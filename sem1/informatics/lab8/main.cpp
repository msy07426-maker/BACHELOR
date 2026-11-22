#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

// تعريف هيكل "القطار" (Структура "Поезд") بالحقول الأربعة المطلوبة
struct Train 
{
    int number;              // رقم القطار (номер поезда)
    char destination[50];    // وجهة السفر (пункт назначения)
    char departureTime[20];  // وقت المغادرة (время отправления)
    int carriages;           // عدد العربات (количество вагонов)
};

// دالة مساعدة لإدخال بيانات قطار واحد
Train inputTrain()
 {
    Train t;
    cout << "  -> Enter train number (e.g., 102): ";
    cin >> t.number;
    cin.ignore(); // تنظيف ذاكرة الإدخال المؤقتة قبل قراءة النصوص

    cout << "  -> Enter destination (e.g., Perm): ";
    cin.getline(t.destination, 50);

    cout << "  -> Enter departure time (e.g., 14:30): ";
    cin.getline(t.departureTime, 20);

    cout << "  -> Enter number of carriages (e.g., 12): ";
    cin >> t.carriages;
    return t;
}

// 1. دالة تكوين الملف الثنائي (Формирование двоичного файла)
void createFile(const char* filename) 
{
    ofstream outFile(filename, ios::binary);
    if (!outFile.is_open()) 
    {
        cerr << "[ERROR] Failed to open file '" << filename << "' for writing!\n";
        return;
    }

    int count;
    cout << "How many trains do you want to add initially?\n> ";
    cin >> count;

    for (int i = 0; i < count; ++i) 
    {
        cout << "\n[Train #" << (i + 1) << "]\n";
        Train t = inputTrain();
        outFile.write(reinterpret_cast<const char*>(&t), sizeof(Train));

        if (outFile.fail()) 
        {
            cerr << "[ERROR] Write operation failed!\n";
            outFile.close();
            return;
        }
    }

    outFile.close();
    cout << "\n[SUCCESS] Binary file '" << filename << "' created successfully!\n";
}

// 2. دالة طباعة محتويات الملف (Печать содержимого файла)
void printFile(const char* filename) 
{
    ifstream inFile(filename, ios::binary);
    if (!inFile.is_open()) 
    {
        cerr << "[ERROR] Failed to open file '" << filename << "' for reading!\n";
        return;
    }

    cout << "\n====================================================================\n";
    cout << left << setw(12) << "Train No."
         << setw(25) << "Destination"
         << setw(18) << "Departure"
         << setw(12) << "Carriages" << "\n";
    cout << "--------------------------------------------------------------------\n";

    Train t;
    bool isEmpty = true;

    while (inFile.read(reinterpret_cast<char*>(&t), sizeof(Train))) 
    {
        isEmpty = false;
        cout << left << setw(12) << t.number
             << setw(25) << t.destination
             << setw(18) << t.departureTime
             << setw(12) << t.carriages << "\n";
    }

    if (inFile.bad()) 
    {
        cerr << "[ERROR] Read operation failed!\n";
    } else if (isEmpty) 
    {
        cout << "The file is currently empty.\n";
    }
    cout << "====================================================================\n";

    inFile.close();
}

// 3. دالة البحث عن عنصر برقم القطار (Функция поиска элемента)
bool findTrain(const char* filename, int targetNumber, Train& foundTrain) 
{
    ifstream inFile(filename, ios::binary);
    if (!inFile.is_open()) 
    {
        cerr << "[ERROR] Failed to open file for searching!\n";
        return false;
    }

    Train t;
    while (inFile.read(reinterpret_cast<char*>(&t), sizeof(Train))) 
    {
        if (t.number == targetNumber) 
        {
            foundTrain = t;
            inFile.close();
            return true;
        }
    }

    inFile.close();
    return false;
}

// 4. دالة حذف عنصر باستخدام دالة البحث (Удаление элемента)
void deleteTrain(const char* filename, int targetNumber) 
{
    Train dummy;
    if (!findTrain(filename, targetNumber, dummy)) 
    {
        cout << "[INFO] Train #" << targetNumber << " was not found in the file.\n";
        return;
    }

    ifstream inFile(filename, ios::binary);
    ofstream tempFile("temp.dat", ios::binary);

    if (!inFile.is_open() || !tempFile.is_open()) 
    {
        cerr << "[ERROR] File error during deletion process!\n";
        return;
    }

    Train t;
    while (inFile.read(reinterpret_cast<char*>(&t), sizeof(Train))) 
    {
        if (t.number != targetNumber) 
        {
            tempFile.write(reinterpret_cast<const char*>(&t), sizeof(Train));
            if (tempFile.fail()) 
            {
                cerr << "[ERROR] Write error while copying data!\n";
                inFile.close();
                tempFile.close();
                return;
            }
        }
    }

    inFile.close();
    tempFile.close();

    remove(filename);
    rename("temp.dat", filename);

    cout << "[SUCCESS] Train #" << targetNumber << " deleted successfully!\n";
}

// 5. دالة إضافة عنصر باستخدام دالة البحث (Добавление элемента)
void addTrain(const char* filename) 
{
    cout << "\n[Add New Train]\n";
    Train newTrain = inputTrain();

    int afterNumber;
    cout << "Enter train number after which to insert (or 0 to append at the end):\n> ";
    cin >> afterNumber;

    if (afterNumber == 0) 
    {
        ofstream outFile(filename, ios::binary | ios::app);
        if (!outFile.is_open())
        {
            cerr << "[ERROR] Failed to open file for appending!\n";
            return;
        }
        outFile.write(reinterpret_cast<const char*>(&newTrain), sizeof(Train));

        if (outFile.fail()) 
        {
            cerr << "[ERROR] Write error while appending!\n";
        } 
        else 
        {
            cout << "[SUCCESS] New train appended to the end of the file!\n";
        }
        outFile.close();
        return;
    }

    Train dummy;
    if (!findTrain(filename, afterNumber, dummy)) 
    {
        cout << "[INFO] Reference Train #" << afterNumber << " not found. Appending to the end instead.\n";
        ofstream outFile(filename, ios::binary | ios::app);
        if (!outFile.is_open()) 
        {
            cerr << "[ERROR] Failed to open file for appending!\n";
            return;
        }
        outFile.write(reinterpret_cast<const char*>(&newTrain), sizeof(Train));
        outFile.close();
        return;
    }

    ifstream inFile(filename, ios::binary);
    ofstream tempFile("temp.dat", ios::binary);

    if (!inFile.is_open() || !tempFile.is_open()) 
    {
        cerr << "[ERROR] File error during insertion process!\n";
        return;
    }

    Train t;
    bool inserted = false;
    while (inFile.read(reinterpret_cast<char*>(&t), sizeof(Train))) 
    {
        tempFile.write(reinterpret_cast<const char*>(&t), sizeof(Train));
        if (t.number == afterNumber && !inserted) 
        {
            tempFile.write(reinterpret_cast<const char*>(&newTrain), sizeof(Train));
            inserted = true;
        }
    }

    inFile.close();
    tempFile.close();

    remove(filename);
    rename("temp.dat", filename);

    cout << "[SUCCESS] New train inserted after Train #" << afterNumber << "!\n";
}

int main() 
{
    const char* filename = "trains.dat";

    cout << "=========================================================\n";
    cout << "       LABORATORY WORK #8: BINARY FILE OPERATIONS        \n";
    cout << "=========================================================\n\n";

    // 1. تكوين الملف وطباعته
    createFile(filename);
    printFile(filename);

    // 2. البحث والحذف
    int delNum;
    cout << "\nEnter the train number you want to DELETE:\n> ";
    cin >> delNum;
    deleteTrain(filename, delNum);
    printFile(filename);

    // 3. البحث والإضافة
    addTrain(filename);
    printFile(filename);

    return 0;
}
