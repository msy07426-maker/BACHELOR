# Отчет по лабораторной работе №7

<div align="center">

# 🎓 МИНИСТЕРСТВО ОБРАЗОВАНИЯ И НАУКИ РОССИЙСКОЙ ФЕДЕРАЦИИ
### Кафедра Автоматизированных систем управления (АСУ)

---

## 👤 Студенческая Визитная Карточка

| 📝 Личные данные студента | 🔍 Официальная информация |
| :--- | :--- |
| **ФИО Студента** | <span style="color: #238636;"><b>[Мухаммад Майя]</b></span> |
| **Номер группы** | <span style="color: #1f6feb;"><b>[ИВТ-26-1б]</b></span> |
| **Специальность** | Инженерная информатика (АСУ) |
| **Дисциплина** | Программирование на языке С++ |

</div>

---

## 📌 Постановка задачи

Написать перегруженные функции и основную программу, которая их вызывает (Вариант 27):
а) для возведения целого числа в степень;
б) для возведения комплексного числа в степень.

> 🌐 **[EN]** Task setup: Write overloaded functions and a main program that calls them (Variant 27): a) for raising an integer to a power; b) for raising a complex number to a power.
> 🌐 **[AR]** صياغة المسألة: كتابة دوال محملة زائداً (Overloaded Functions) وبرنامج رئيسي يقوم باستدعائها (النموذج 27): أ) لرفع عدد صحيح إلى أس؛ ب) لرفع عدد مركب إلى أس.

---

## 🗺️ Блок-схема алгоритма программы (Flowchart)

<div align="center">

```mermaid
flowchart TD
    Start([Начало / Start]) --> InputInt[/Ввод целого числа intBase и степени intExp/]
    InputInt --> CallInt["Вызов power(intBase, intExp)"]
    CallInt --> PrintInt[/Вывод результата intResult/]
    PrintInt --> InputComp[/Ввод realPart, imagPart и степени compExp/]
    InputComp --> CreateComp["Создание compBase(realPart, imagPart)"]
    CreateComp --> CallComp["Вызов power(compBase, compExp)"]
    CallComp --> PrintComp[/Вывод результата в виде a ± bi/]
    PrintComp --> End([Конец / End])
```

</div>

---

## 🧩 Пошаговый разбор кода (Step-by-Step Code Explanation)

### 🔹 Шаг 1: Подключение библиотек (Header Files)

```cpp
#include <iostream>
#include <complex>
#include <cmath>

using namespace std;
```

Подключаются библиотеки `iostream` (для консольного ввода-вывода), `complex` (для работы с комплексными числами) и `cmath` (для функции модуля `abs`). Директива `using namespace std;` позволяет использовать стандартные имена без префикса `std::`.

> 🌐 **[EN]** Includes `iostream` (for console I/O), `complex` (for handling complex numbers), and `cmath` (for the `abs` function). `using namespace std;` allows using standard names without the `std::` prefix.
> 🌐 **[AR]** استدعاء مكتبات `iostream` (للإدخال والإخراج)، و `complex` (للتعامل مع الأعداد المركبة)، و `cmath` (لاستخدام دالة القيمة المطلقة `abs`). السطر الأخير يغني عن كتابة `std::` قبل الأوامر.

---

### 🔹 Шаг 2: Перегруженная функция для целого числа (Overloaded Function for Integer)

```cpp
double power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1.0;
    }

    double result = 1.0;
    int absExp = abs(exponent);

    for (int i = 0; i < absExp; ++i)
    {
        result *= base;
    }

    if (exponent < 0)
    {
        return 1.0 / result;
    }

    return result;
}
```

Первая перегруженная функция `power` принимает целое основание `base` и степень `exponent`. Если степень равна `0`, возвращается `1.0`. В цикле `for` число умножается само на себя `abs(exponent)` раз. При отрицательной степени возвращается обратное значение `1.0 / result`.

> 🌐 **[EN]** The first overloaded function `power` takes an integer `base` and `exponent`. If the exponent is `0`, it returns `1.0`. A `for` loop multiplies the base by itself `abs(exponent)` times. For negative exponents, it returns `1.0 / result`.
> 🌐 **[AR]** الدالة الأولى المحملة زائداً `power` تستقبل أساساً صحيحاً `base` وأساً `exponent`. إذا كان الأس `0` تُرجع `1.0`، وفي حلقة التكرار يُضرب الأساس في نفسه بعدد مرات القيمة المطلقة للأس، وإذا كان الأس سالباً تُرجع مقلوب الناتج `1.0 / result`.

---

### 🔹 Шаг 3: Перегруженная функция для комплексного числа (Overloaded Function for Complex Number)

```cpp
complex<double> power(complex<double> base, int exponent)
{
    if (exponent == 0)
    {
        return complex<double>(1.0, 0.0);
    }

    complex<double> result(1.0, 0.0);
    int absExp = abs(exponent);

    for (int i = 0; i < absExp; ++i)
    {
        result *= base;
    }

    if (exponent < 0)
    {
        return complex<double>(1.0, 0.0) / result;
    }

    return result;
}
```

Вторая функция с тем же именем `power` принимает объект `complex<double>`. Логика аналогична первой функции, но умножение и деление выполняются по правилам арифметики комплексных чисел.

> 🌐 **[EN]** The second function with the same name `power` accepts a `complex<double>` object. The logic mirrors the first function, performing multiplication and division according to complex number arithmetic.
> 🌐 **[AR]** الدالة الثانية التي تحمل نفس الاسم `power` تستقبل عدداً مركباً `complex<double>`. تعمل بنفس منطق الدالة الأولى ولكنها تنفذ عمليات الضرب والقسمة وفق قواعد الأعداد المركبة.

---

### 🔹 Шаг 4: Ввод и расчет для целого числа в `main()`

```cpp
    int intBase, intExp;
    cout << "[Part 1: Integer Number]\n";
    cout << "1. Enter an integer base number (e.g., 2):\n> ";
    cin >> intBase;

    cout << "2. Enter the integer exponent (power, e.g., 3 or -2):\n> ";
    cin >> intExp;

    double intResult = power(intBase, intExp);
    cout << "-> Result: " << intBase << "^" << intExp << " = " << intResult << "\n";
```

В функции `main()` считываются целое основание и показатель степени. Компилятор автоматически выбирает первую версию функции `power(int, int)` по типам переданных аргументов и выводит результат.

> 🌐 **[EN]** In `main()`, the integer base and exponent are read from the user. The compiler automatically selects the first `power(int, int)` overload based on argument types and prints the result.
> 🌐 **[AR]** في الدالة الرئيسية `main()` يتم قراءة الأساس والأس الصحيحين من المستخدم، ويقوم المترجم تلقائياً باختيار النسخة الأولى من دالة `power` بناءً على نوع المعاملات ثم يطبع النتيجة.

---

### 🔹 Шаг 5: Ввод и форматированный вывод для комплексного числа

```cpp
    double realPart, imagPart;
    int compExp;
    cout << "[Part 2: Complex Number (a + bi)]\n";
    cout << "1. Enter the real part (a) of the complex number:\n> ";
    cin >> realPart;

    cout << "2. Enter the imaginary part (b) of the complex number:\n> ";
    cin >> imagPart;

    cout << "3. Enter the integer exponent (power) for the complex number:\n> ";
    cin >> compExp;

    complex<double> compBase(realPart, imagPart);
    complex<double> compResult = power(compBase, compExp);

    char sign = (compResult.imag() >= 0) ? '+' : '-';
    cout << "-> Result: (" << realPart << (imagPart >= 0 ? " + " : " - ") << abs(imagPart) << "i)^" << compExp
         << " = " << compResult.real() << " " << sign << " " << abs(compResult.imag()) << "i\n";
```

Считываются действительная (`a`) и мнимая (`b`) части комплексного числа, а также степень. Создается объект `compBase`, вызывается вторая перегруженная функция `power(complex<double>, int)`, а результат выводится в привычной алгебраической форме `a ± bi`.

> 🌐 **[EN]** The real (`a`) and imaginary (`b`) parts of the complex number and the exponent are read. The `compBase` object is created, the second `power(complex<double>, int)` overload is called, and the result is formatted cleanly as `a ± bi`.
> 🌐 **[AR]** يتم قراءة الجزء الحقيقي (`a`) والتخيلي (`b`) للعدد المركب والأس، ثم إنشاء الكائن `compBase` واستدعاء النسخة الثانية من الدالة `power`، وطباعة النتيجة بصيغة رياضية منسقة `a ± bi`.

---

## 💻 Полный исходный код программы (Full Source Code)

```cpp
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
complex compBase(realPart, imagPart);
complex compResult = power(compBase, compExp);
// تنسيق الطباعة لإظهار العدد المركب بشكل رياضي أنيق (a + bi) أو (a - bi)
char sign = (compResult.imag() >= 0) ? '+' : '-';
cout << "-> Result: (" << realPart << (imagPart >= 0 ? " + " : " - ") << abs(imagPart) << "i)^" << compExp
<< " = " << compResult.real() << " " << sign << " " << abs(compResult.imag()) << "i\n";
cout << "=========================================================\n";
return 0;
}

```

## 🖥️ Пример работы программы (Консоль)

```text
=========================================================
       Power Calculation Program (Overloaded Functions)  
=========================================================

[Part 1: Integer Number]
1. Enter an integer base number (e.g., 2):
> 5
2. Enter the integer exponent (power, e.g., 3 or -2):
> 5
-> Result: 5^5 = 3125
---------------------------------------------------------

[Part 2: Complex Number (a + bi)]
1. Enter the real part (a) of the complex number:
> 5
2. Enter the imaginary part (b) of the complex number:
> 5
3. Enter the integer exponent (power) for the complex number:
> 5
-> Result: (5 + 5i)^5 = -12500 - 12500i
=========================================================

```
## 📌 Постановка задачи (Часть 7.2)

**7.2. Функции с переменным числом параметров:**
Написать функцию `count` с переменным числом параметров, которая подсчитывает количество чисел типа `int`, кратных 3. Написать вызывающую функцию `main`, которая обращается к функции `count` не менее трёх раз с количеством параметров 4, 8, 12.

> 🌐 **[EN]** Task setup (Part 7.2): Variadic functions — Write a function `count` with a variable number of parameters that counts how many `int` numbers are multiples of 3. Write a calling `main` function that calls `count` at least three times with 4, 8, and 12 parameters.
> 🌐 **[AR]** صياغة المسألة (الجزء 7.2): الدوال ذات العدد المتغير من المعاملات — كتابة دالة باسم `count` تستقبل عدداً متغيراً من المعاملات وتحسب عدد الأرقام الصحيحة (`int`) التي تقبل القسمة على 3، ثم استدعاؤها في الدالة الرئيسية `main` ثلاث مرات على الأقل بعدد معاملات 4، 8، و 12.

---

## 🗺️ Блок-схема алгоритма программы — Часть 7.2 (Flowchart)

<div align="center">

```mermaid
flowchart TD
    Start(["Начало функции count(int k, ...)"]) --> Init["int *p = &k;\nint total = 0;"]
    Init --> Check{"k != 0 ?"}
    Check -- "Да / Yes" --> Next["Сдвиг указателя *(++p)\nи проверка: *(++p) % 3 == 0 ?"]
    Next -- "Да (кратно 3)" --> Inc["total++"]
    Next -- "Нет (не кратно)" --> Dec["k--"]
    Inc --> Dec
    Dec --> Check
    Check -- "Нет / No" --> Ret(["Возврат total / Return total"])
```

</div>

---

## 🧩 Пошаговый разбор кода — Часть 7.2 (Step-by-Step Code Explanation)

### 🔹 Шаг 1: Подключение библиотек (Header Files)

```cpp
#include <iostream>

using namespace std;
```

Подключается библиотека `iostream` для ввода и вывода данных в консоль. Директива `using namespace std;` позволяет использовать стандартные имена (`cout`, `endl`) без префикса `std::`.

> 🌐 **[EN]** Includes `iostream` for console input and output. `using namespace std;` allows using standard names (`cout`, `endl`) without the `std::` prefix.
> 🌐 **[AR]** استدعاء مكتبة `iostream` للإدخال والإخراج عبر الشاشة، واستخدام `using namespace std;` لكتابة الأوامر مباشرة دون الحاجة لكتابة `std::`.

---

### 🔹 Шаг 2: Объявление функции и инициализация указателя

```cpp
int count(int k, ...)
{
    int *p = &k;   // ضبط المؤشر على المعامل الأول k (عدد العناصر)
    int total = 0; // عداد للأعداد التي تقبل القسمة على 3
```

Функция `count` принимает первый обязательный параметр `k` (количество передаваемых чисел) и многоточие `...` (переменное число параметров). Указатель `p` настраивается на адрес параметра `k` в стеке памяти, а переменная `total` обнуляется для подсчёта подходящих чисел.

> 🌐 **[EN]** The function `count` takes the first mandatory parameter `k` (number of passed integers) and an ellipsis `...` (variable arguments). Pointer `p` is set to the memory address of `k` on the stack, and `total` is initialized to `0` to count multiples of 3.
> 🌐 **[AR]** تستقبل الدالة `count` المعامل الأول الإجباري `k` (الذي يحدد عدد الأرقام الممررة) ثم النقاط الثلاث `...` للدلالة على تعدد المعاملات. يتم توجيه المؤشر `p` إلى عنوان المتغير `k` في الذاكرة (Stack)، وتصفير العداد `total`.

---

### 🔹 Шаг 3: Цикл перебора параметров через сдвиг указателя

```cpp
    for (; k != 0; k--)
{
        if (*(++p) % 3 == 0)
        {
// تحريك المؤشر للعنصر التالي وفحص قابليته للقسمة على 3
            total++;
        }
    }

    return total;
}
```

В цикле `for` счётчик `k` уменьшается на 1 на каждой итерации. Выражение `*(++p)` сдвигает указатель к следующему аргументу в памяти и разыменовывает его. Если остаток от деления на 3 равен нулю (`% 3 == 0`), счётчик `total` увеличивается на 1. После завершения цикла возвращается результат `total`.

> 🌐 **[EN]** Inside the `for` loop, `k` decrements by 1 each iteration. The expression `*(++p)` advances the pointer to the next argument in memory and dereferences it. If the remainder when divided by 3 is zero (`% 3 == 0`), `total` is incremented. Finally, `total` is returned.
> 🌐 **[AR]** في حلقة التكرار `for` ينقص العداد `k` بمقدار 1 في كل دورة، ويقوم التعبير `*(++p)` بتحريك المؤشر إلى الرقم التالي في الذاكرة وقراءة قيمته؛ فإذا كان يقبل القسمة على 3 بدون باقٍ (`% 3 == 0`) يزداد العداد `total` بمقدار 1، ثم تُرجع الدالة النتيجة النهائية.

---

### 🔹 Шаг 4: Вызов функции `count` в `main()` с 4, 8 и 12 параметрами

```cpp
int main()
{
    // الاستدعاء الأول: 4 أرقام
    cout << "1. Call with 4 parameters: count(4, 3, 5, 9, 10)\n";
    cout << "-> Count of numbers divisible by 3: " << count(4, 3, 5, 9, 10) << "\n\n";

    // الاستدعاء الثاني: 8 أرقام
    cout << "2. Call with 8 parameters: count(8, 1, 2, 3, 4, 5, 6, 7, 9)\n";
    cout << "-> Count of numbers divisible by 3: " << count(8, 1, 2, 3, 4, 5, 6, 7, 9) << "\n\n";

    // الاستدعاء الثالث: 12 رقماً
    cout << "3. Call with 12 parameters: count(12, 3, 6, 9, 12, 15, 18, 2, 4, 7, 8, 11, 21)\n";
    cout << "-> Count of numbers divisible by 3: " << count(12, 3, 6, 9, 12, 15, 18, 2, 4, 7, 8, 11, 21) << "\n";

    return 0;
}
```

Функция `main()` вызывает `count` три раза: сначала для 4 чисел (`k = 4`), затем для 8 чисел (`k = 8`) и для 12 чисел (`k = 12`), выводя количество найденных чисел, кратных 3.

> 🌐 **[EN]** `main()` calls `count` three times: first with 4 numbers (`k = 4`), then with 8 numbers (`k = 8`), and finally with 12 numbers (`k = 12`), displaying the count of numbers divisible by 3 for each call.
> 🌐 **[AR]** تقوم الدالة الرئيسية `main()` باستدعاء الدالة `count` ثلاث مرات: الأولى لـ 4 أرقام (`k = 4`)، والثانية لـ 8 أرقام (`k = 8`)، والثالثة لـ 12 رقماً (`k = 12`)، وتطبع عدد الأرقام التي تقبل القسمة على 3 في كل مرة.

---

## 💻 Полный исходный код программы — Часть 7.2 (Full Source Code)

```cpp
#include <iostream>

using namespace std;

// دالة count لحساب الأعداد الصحيحة التي تقبل القسمة على 3 باستخدام المؤشرات
int count(int k, ...)
{
    int *p = &k;   // ضبط المؤشر على المعامل الأول k (عدد العناصر)
    int total = 0; // عداد للأعداد التي تقبل القسمة على 3

    for (; k != 0; k--)
    {
        if (*(++p) % 3 == 0)
        {
 // تحريك المؤشر للعنصر التالي وفحص قابليته للقسمة على 3
            total++;
        }
    }

    return total;
}

int main()
{
    cout << "=========================================================\n";
    cout << ">>> PART 7.2: VARIADIC FUNCTION count() USING POINTERS <<<\n";
    cout << "=========================================================\n\n";

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
```

---

## 🖥️ Пример работы программы — Часть 7.2 (Консоль)

```text
=========================================================
>>> PART 7.2: VARIADIC FUNCTION count() USING POINTERS <<<
=========================================================

1. Call with 4 parameters: count(4, 3, 5, 9, 10)
-> Count of numbers divisible by 3: 2

2. Call with 8 parameters: count(8, 1, 2, 3, 4, 5, 6, 7, 9)
-> Count of numbers divisible by 3: 4

3. Call with 12 parameters: count(12, 3, 6, 9, 12, 15, 18, 2, 4, 7, 8, 11, 21)
-> Count of numbers divisible by 3: 10
=========================================================
```

---
Full работы программы
```text
=========================================================
          LABORATORY WORK #7 (Parts 7.1 & 7.2)           
=========================================================

>>> PART 7.1: OVERLOADED FUNCTIONS (POWER) <<<

[1. Integer Number]
Enter an integer base number (e.g., 5):
> 5
Enter the integer exponent (e.g., 5):
> 5
-> Result: 5^5 = 3125

[2. Complex Number (a + bi)]
Enter the real part (a):
> 5
Enter the imaginary part (b):
> 5
Enter the integer exponent:
> 5
-> Result: (5 + 5i)^5 = -12500 - 12500i
---------------------------------------------------------

>>> PART 7.2: VARIADIC FUNCTION count() USING POINTERS <<<

1. Call with 4 parameters: count(4, 3, 5, 9, 10)
-> Count of numbers divisible by 3: 2

2. Call with 8 parameters: count(8, 1, 2, 3, 4, 5, 6, 7, 9)
-> Count of numbers divisible by 3: 4

3. Call with 12 parameters: count(12, 3, 6, 9, 12, 15, 18, 2, 4, 7, 8, 11, 21)
-> Count of numbers divisible by 3: 10
=========================================================
```

---

