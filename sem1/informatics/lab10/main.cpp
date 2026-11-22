#include <iostream>
#include <iomanip>

using namespace std;

// 1. دالة حجز وتعبئة مصفوفة ثنائية ديناميكية باستخدام new
int** createMatrix(int rows, int cols) 
{
    int** matrix = new int*[rows]; // حجز مصفوفة مؤشرات للصفوف
    cout << "\nEnter the matrix elements row by row:\n";
    for (int i = 0; i < rows; ++i) 
    {
        matrix[i] = new int[cols]; // حجز أعمدة كل صف
        cout << "Row " << i << " (" << cols << " integers): ";
        for (int j = 0; j < cols; ++j) 
        {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

// 2. دالة طباعة المصفوفة بشكل منسق
void printMatrix(int** matrix, int rows, int cols) 
{
    cout << "\n---------------------------------------------------------\n";
    if (rows == 0) 
    {
        cout << "(Matrix has 0 rows - completely empty)\n";
        cout << "---------------------------------------------------------\n";
        return;
    }

    for (int i = 0; i < rows; ++i) 
    {
        cout << "Row [" << i << "]: ";
        for (int j = 0; j < cols; ++j) 
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << "\n";
    }
    cout << "---------------------------------------------------------\n";
}

// دالة مساعدة للتحقق هل يحتوي الصف على عنصر يساوي صفراً أم لا
bool hasZero(const int* row, int cols) 
{
    for (int j = 0; j < cols; ++j) 
    {
        if (row[j] == 0) 
        {
            return true;
        }
    }
    return false;
}

// 3. دالة حذف جميع الصفوف التي تحتوي على أصفار
int** deleteRowsWithZero(int** matrix, int& rows, int cols) 
{
    // حساب عدد الصفوف التي لا تحتوي على أصفار
    int validRows = 0;
    for (int i = 0; i < rows; ++i) 
    {
        if (!hasZero(matrix[i], cols)) 
        {
            validRows++;
        }
    }

    int deletedCount = rows - validRows;
    if (deletedCount == 0) 
    {
        cout << "\n[INFO] No rows contain zero elements. Nothing deleted.\n";
        return matrix;
    }

    // إنشاء مصفوفة مؤشرات جديدة بالحجم الجديد
    int** newMatrix = (validRows > 0) ? new int*[validRows] : nullptr;
    int newIdx = 0;

    for (int i = 0; i < rows; ++i) 
    {
        if (hasZero(matrix[i], cols))
        {
            delete[] matrix[i]; // تحرير ذاكرة الصف المحذوف فوراً
        } 
        else 
        {
            newMatrix[newIdx++] = matrix[i]; // نقل مؤشر الصف السليم للمصفوفة الجديدة
        }
    }

    delete[] matrix; // تحرير مصفوفة المؤشرات القديمة
    rows = validRows;

    cout << "\n[SUCCESS] Deleted " << deletedCount << " row(s) containing zero elements.\n";
    return newMatrix;
}

// 4. دالة إضافة صف جديد في موضع محدد (برقم الصف)
int** insertRowAt(int** matrix, int& rows, int cols, int insertIndex) 
{
    // التحقق من صحة رقم الصف المدخل
    if (insertIndex < 0 || insertIndex > rows) 
    {
        cerr << "[ERROR] Invalid row index! Must be between 0 and " << rows << ".\n";
        return matrix;
    }

    // حجز الصف الجديد وقراءة عناصره من المستخدم
    int* newRow = new int[cols];
    cout << "Enter " << cols << " elements for the new row:\n> ";
    for (int j = 0; j < cols; ++j) 
    {
        cin >> newRow[j];
    }

    // إنشاء مصفوفة مؤشرات جديدة أكبر بصف واحد
    int** newMatrix = new int*[rows + 1];

    // نسخ الصفوف التي تسبق موضع الإدراج
    for (int i = 0; i < insertIndex; ++i) 
    {
        newMatrix[i] = matrix[i];
    }

    // وضع الصف الجديد في الموضع المطلوب
    newMatrix[insertIndex] = newRow;

    // نسخ باقي الصفوف بعد الصف الجديد
    for (int i = insertIndex; i < rows; ++i) 
    {
        newMatrix[i + 1] = matrix[i];
    }

    delete[] matrix; // تحرير مصفوفة المؤشرات القديمة
    rows++;

    cout << "\n[SUCCESS] New row inserted at index " << insertIndex << "!\n";
    return newMatrix;
}

// 5. دالة تحرير كامل الذاكرة المحجوزة للمصفوفة قبل إنهاء البرنامج
void freeMatrix(int** matrix, int rows) 
{
    if (matrix != nullptr) 
    {
        for (int i = 0; i < rows; ++i) 
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
}

int main() 
{
    cout << "=========================================================\n";
    cout << "     LABORATORY WORK #10: DYNAMIC 2D ARRAYS (new/delete) \n";
    cout << "=========================================================\n\n";

    int rows, cols;
    cout << "1. Enter initial number of rows:\n> ";
    cin >> rows;
    cout << "2. Enter number of columns:\n> ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) 
    {
        cerr << "[ERROR] Dimensions must be positive integers!\n";
        return 1;
    }

    // 1. تكوين المصفوفة وطباعتها
    int** matrix = createMatrix(rows, cols);
    cout << "\nInitial Matrix:";
    printMatrix(matrix, rows, cols);

    // 2. حذف الصفوف التي تحتوي على أصفار
    matrix = deleteRowsWithZero(matrix, rows, cols);
    cout << "Matrix after deleting rows with zeros:";
    printMatrix(matrix, rows, cols);

    // 3. إضافة صف جديد برقم محدد
    int insertIndex;
    cout << "\nEnter the row index where you want to INSERT a new row (0 to " << rows << "):\n> ";
    cin >> insertIndex;

    matrix = insertRowAt(matrix, rows, cols, insertIndex);
    cout << "Final Matrix after insertion:";
    printMatrix(matrix, rows, cols);

    // تحرير الذاكرة بالكامل
    freeMatrix(matrix, rows);

    return 0;
}
