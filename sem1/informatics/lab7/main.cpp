#include <iostream>
#include <complex>
#include <cmath>
#include <cstdarg>


using namespace std;

// =========================================================
// الجزء 7.1: الدوال المحملة زائداً (Overloaded Functions)
// =========================================================

// أ) رفع عدد صحيح إلى أس
double power(int base, int exponent) 
{
    if (exponent == 0) return 1.0;

    double result = 1.0;
    int absExp = abs(exponent);

    for (int i = 0; i < absExp; ++i) 
    {
        result *= base;
    }

    return (exponent < 0) ? (1.0 / result) : result;
}

// ب) رفع عدد مركب إلى أس
complex<double> power(complex<double> base, int exponent) 
{
    if (exponent == 0) return complex<double>(1.0, 0.0);

    complex<double> result(1.0, 0.0);
    int absExp = abs(exponent);

    for (int i = 0; i < absExp; ++i) 
    {
        result *= base;
    }

    return (exponent < 0) ? (complex<double>(1.0, 0.0) / result) : result;
}

// =========================================================
// الجزء 7.2: دالة count باستخدام المؤشرات (أسلوب المحاضرة)
// =========================================================


int count(int k, ...) 
{
    va_list args;       // تعريف قائمة المعاملات المتغيرة
    va_start(args, k);  // بدء القراءة من بعد المعامل k

    int total = 0;      // عداد للأرقام التي تقبل القسمة على 3

    for (int i = 0; i < k; ++i) 
    {
        int val = va_arg(args, int); // قراءة الرقم التالي بدقة على أي نظام (32 أو 64 بت)
        if (val % 3 == 0) 
        {
            total++;
        }
    }

    va_end(args);       // إغلاق القائمة
    return total;
}

// =========================================================
// البرنامج الرئيسي (main)
// =========================================================

int main() 
{
    cout << "=========================================================\n";
    cout << "          LABORATORY WORK #7 (Parts 7.1 & 7.2)           \n";
    cout << "=========================================================\n\n";

    // --- تشغيل الجزء 7.1 ---
    cout << ">>> PART 7.1: OVERLOADED FUNCTIONS (POWER) <<<\n\n";

    int intBase, intExp;
    cout << "[1. Integer Number]\n";
    cout << "Enter an integer base number (e.g., 5):\n> ";
    cin >> intBase;
    cout << "Enter the integer exponent (e.g., 5):\n> ";
    cin >> intExp;

    cout << "-> Result: " << intBase << "^" << intExp << " = " << power(intBase, intExp) << "\n\n";

    double realPart, imagPart;
    int compExp;
    cout << "[2. Complex Number (a + bi)]\n";
    cout << "Enter the real part (a):\n> ";
    cin >> realPart;
    cout << "Enter the imaginary part (b):\n> ";
    cin >> imagPart;
    cout << "Enter the integer exponent:\n> ";
    cin >> compExp;

    complex<double> compBase(realPart, imagPart);
    complex<double> compResult = power(compBase, compExp);

    char sign = (compResult.imag() >= 0) ? '+' : '-';
    cout << "-> Result: (" << realPart << (imagPart >= 0 ? " + " : " - ") << abs(imagPart) << "i)^" << compExp
         << " = " << compResult.real() << " " << sign << " " << abs(compResult.imag()) << "i\n";
    cout << "---------------------------------------------------------\n\n";

    // --- تشغيل الجزء 7.2 ---
    cout << ">>> PART 7.2: VARIADIC FUNCTION count() USING POINTERS <<<\n\n";

    // الاستدعاء الأول: 4 أرقام
    cout << "1. Call with 4 parameters: count(4, 3, 5, 9, 10)\n";
    cout << "-> Count of numbers divisible by 3: " << count(4, 3, 5, 9, 10) << "\n\n";

    // الاستدعاء الثاني: 8 أرقام
    cout << "2. Call with 8 parameters: count(8, 1, 2, 3, 4, 5, 6, 7, 9)\n";
    cout << "-> Count of numbers divisible by 3: " << count(8, 1, 2, 3, 4, 5, 6, 7, 9) << "\n\n";

    // الاستدعاء الثالث: 12 رقماً
    cout << "3. Call with 12 parameters: count(12, 3, 6, 9, 12, 15, 18, 2, 4, 7, 8, 11, 21)\n";
    cout << "-> Count of numbers divisible by 3: " << count(12, 3, 6, 9, 12, 15, 18, 2, 4, 7, 8, 11, 21) << "\n";

    cout << "=========================================================\n";

    return 0;
}
