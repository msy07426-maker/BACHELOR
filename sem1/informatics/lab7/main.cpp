#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

// أ) دالة محملة زائداً (Overloaded) لرفع عدد صحيح إلى أس صحيح
double power(int base, int exponent)
{
    // أي عدد مرفوع للأس صفر يساوي 1
    if (exponent == 0) 
    {
        return 1.0;
    }

    double result = 1.0;
    int absExp = abs(exponent); // أخذ القيمة المطلقة للأس لتكرار الضرب

    // حلقة تكرارية لضرب الأساس في نفسه بعدد مرات الأس
    for (int i = 0; i < absExp; ++i)
    {
        result *= base;
    }

    // معالجة الأس السالب (مثال: 2^-3 = 1 / 8)
    if (exponent < 0)
    {
        return 1.0 / result;
    }

    return result;
}

// ب) دالة محملة زائداً (Overloaded) لرفع عدد مركب إلى أس صحيح
complex<double> power(complex<double> base, int exponent)
{
    // أي عدد مركب مرفوع للأس صفر يساوي (1 + 0i)
    if (exponent == 0) 
    {
        return complex<double>(1.0, 0.0);
    }

    complex<double> result(1.0, 0.0);
    int absExp = abs(exponent); // أخذ القيمة المطلقة للأس

    // حلقة تكرارية لضرب العدد المركب في نفسه
    for (int i = 0; i < absExp; ++i) 
    {
        result *= base;
    }

    // معالجة الأس السالب للعدد المركب (1 / z^|n|)
    if (exponent < 0) 
    {
        return complex<double>(1.0, 0.0) / result;
    }

    return result;
}

int main()
{
    // طباعة ترويسة البرنامج للمستخدم
    cout << "=========================================================\n";
    cout << "       Power Calculation Program (Overloaded Functions)  \n";
    cout << "=========================================================\n\n";

    // --- الجزء الأول: حساب أس العدد الصحيح ---
    int intBase, intExp;
    cout << "[Part 1: Integer Number]\n";
    cout << "1. Enter an integer base number (e.g., 2):\n> ";
    cin >> intBase;

    cout << "2. Enter the integer exponent (power, e.g., 3 or -2):\n> ";
    cin >> intExp;

    // استدعاء الدالة الأولى الخاصة بالأعداد الصحيحة
    double intResult = power(intBase, intExp);
    cout << "-> Result: " << intBase << "^" << intExp << " = " << intResult << "\n";
    cout << "---------------------------------------------------------\n\n";

    // --- الجزء الثاني: حساب أس العدد المركب ---
    double realPart, imagPart;
    int compExp;
    cout << "[Part 2: Complex Number (a + bi)]\n";
    cout << "1. Enter the real part (a) of the complex number:\n> ";
    cin >> realPart;

    cout << "2. Enter the imaginary part (b) of the complex number:\n> ";
    cin >> imagPart;

    cout << "3. Enter the integer exponent (power) for the complex number:\n> ";
    cin >> compExp;

    // تكوين العدد المركب واستدعاء الدالة الثانية الخاصة بالأعداد المركبة
    complex<double> compBase(realPart, imagPart);
    complex<double> compResult = power(compBase, compExp);

    // تنسيق الطباعة لإظهار العدد المركب بشكل رياضي أنيق (a + bi) أو (a - bi)
    char sign = (compResult.imag() >= 0) ? '+' : '-';
    cout << "-> Result: (" << realPart << (imagPart >= 0 ? " + " : " - ") << abs(imagPart) << "i)^" << compExp
         << " = " << compResult.real() << " " << sign << " " << abs(compResult.imag()) << "i\n";
    cout << "=========================================================\n";

    return 0;
}
