#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// دالة مساعدة لحساب عدد الكلمات في سطر نصي واحد
int countWords(const string& line) 
{
    stringstream ss(line); // تقسيم السطر تلقائياً عند كل مسافة
    string word;
    int count = 0;

    while (ss >> word) 
    {
        count++;
    }
    return count;
}

// 1. دالة تكوين الملف الأول F1.txt من مدخلات المستخدم
void createFileF1(const string& filename) 
{
    ofstream outFile(filename);
    if (!outFile.is_open()) 
    {
        cerr << "[ERROR] Failed to create file '" << filename << "'!\n";
        return;
    }

    int lineCount;
    cout << "How many lines do you want to write into " << filename << "?\n> ";
    cin >> lineCount;
    cin.ignore(); // تنظيف ذاكرة الإدخال المؤقتة بعد قراءة الرقم

    cout << "\nEnter the lines one by one:\n";
    for (int i = 0; i < lineCount; ++i) 
    {
        string line;
        cout << "Line " << (i + 1) << "> ";
        getline(cin, line);
        outFile << line << "\n";
    }

    outFile.close();
    cout << "\n[SUCCESS] File '" << filename << "' created successfully!\n";
}

// 2. دالة طباعة محتويات أي ملف نصي مع توضيح عدد كلمات كل سطر
void printFile(const string& filename) 
{
    ifstream inFile(filename);
    if (!inFile.is_open()) 
    {
        cerr << "[ERROR] Failed to open file '" << filename << "' for reading!\n";
        return;
    }

    cout << "\n---------------------------------------------------------\n";
    cout << "Contents of '" << filename << "':\n";
    cout << "---------------------------------------------------------\n";

    string line;
    int lineNum = 0;
    while (getline(inFile, line)) 
    {
        lineNum++;
        cout << "[" << lineNum << "] " << line << "  (Words: " << countWords(line) << ")\n";
    }

    if (lineNum == 0) 
    {
        cout << "(File is empty)\n";
    }
    cout << "---------------------------------------------------------\n";

    inFile.close();
}

// 3. دالة نسخ الأسطر ذات العدد الزوجي من الكلمات من F1 إلى F2
void copyEvenWordLines(const string& fileF1, const string& fileF2) 
{
    ifstream inFile(fileF1);
    ofstream outFile(fileF2);

    if (!inFile.is_open() || !outFile.is_open()) 
    {
        cerr << "[ERROR] Failed to open files during copy operation!\n";
        return;
    }

    string line;
    int copiedCount = 0;

    while (getline(inFile, line)) 
    {
        int words = countWords(line);
        // التحقق أن السطر غير فارغ وأن عدد كلماته زوجي
        if (words > 0 && words % 2 == 0) 
        {
            outFile << line << "\n";
            copiedCount++;
        }
    }

    inFile.close();
    outFile.close();
    cout << "\n[SUCCESS] Copied " << copiedCount << " line(s) with an even number of words to '" << fileF2 << "'.\n";
}

// 4. دالة حساب عدد الكلمات في السطر الأخير من الملف F2
int countWordsInLastLine(const string& filename) 
{
    ifstream inFile(filename);
    if (!inFile.is_open()) 
    {
        cerr << "[ERROR] Failed to open file '" << filename << "'!\n";
        return -1;
    }

    string line, lastLine;
    bool hasLines = false;

    while (getline(inFile, line)) 
    {
        if (!line.empty()) 
        {
            lastLine = line;
            hasLines = true;
        }
    }

    inFile.close();

    if (!hasLines) 
    {
        return 0; // الملف فارغ
    }

    return countWords(lastLine);
}

int main() 
{
    const string fileF1 = "F1.txt";
    const string fileF2 = "F2.txt";

    cout << "=========================================================\n";
    cout << "     LABORATORY WORK #9: STRING FILE I/O (Variant 27)    \n";
    cout << "=========================================================\n\n";

    // 1. إنشاء الملف F1 وطباعته
    createFileF1(fileF1);
    printFile(fileF1);

    // 2. نسخ الأسطر ذات عدد الكلمات الزوجي إلى F2 وطباعته
    copyEvenWordLines(fileF1, fileF2);
    printFile(fileF2);

    // 3. حساب عدد الكلمات في السطر الأخير من F2
    int lastLineWords = countWordsInLastLine(fileF2);
    cout << "\n>>> Result: Number of words in the last line of '" << fileF2 << "' = " << lastLineWords << "\n";
    cout << "=========================================================\n";

    return 0;
}
