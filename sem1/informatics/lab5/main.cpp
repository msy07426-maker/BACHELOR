#include <iostream>
#include <algorithm> // لاستخدام دالة swap الجاهزة للتبديل

using namespace std;

// تعريف ثابت لحجم المصفوفة (مثلاً 4x4)
const int N = 4;

// 1. كتابة الدالة التي تقوم بتبديل الأقطار
void swapDiagonals(int matrix[N][N]) 
{
    for (int i = 0; i < N; i++) 
    {
        // تبديل عنصر القطر الرئيسي [i][i] مع عنصر القطر الفرعي [i][N - 1 - i]
        swap(matrix[i][i], matrix[i][N - 1 - i]);
    }
}

// دالة مساعدة لطباعة المصفوفة بشكل منظم
void printMatrix(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
      {
        for (int j = 0; j < N; j++) 
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    // 2. تعريف مصفوفة مربعة وتحديد عناصرها للتجربة
    int myMatrix[N][N] =
  {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(myMatrix);
    cout << "-----------------------------------" << endl;

    // 3. استدعاء الدالة لتحويل المصفوفة المطلوبة
    swapDiagonals(myMatrix);

    cout << "Matrix After Swapping Diagonals:" << endl;
    printMatrix(myMatrix);

    return 0;
}
