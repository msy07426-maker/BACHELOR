# Отчет по лабораторной работе №6

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

Заменить в строке все вхождения заданного слова на заданное слово-замену.

> 🌐 **[EN]** Task setup: Replace all occurrences of a given word in a string with a specified replacement word.
> 🌐 **[AR]** صياغة المسألة: استبدال جميع تكرارات كلمة معينة في سلسلة نصية (جملة) بكلمة بديلة محددة.

---

## 🗺️ Блок-схема алгоритма программы (Flowchart)

<div align="center">

```mermaid

```

</div>

---

## 🧩 Пошаговый разбор кода (Step-by-Step Code Explanation)

### 🔹 Шаг 1: Подключение библиотек (Header Files)

```cpp
#include <iostream>
#include <string>

using namespace std;
```

Подключаются библиотеки `iostream` (для ввода и вывода данных через консоль) и `string` (для работы со строками и их методами). Директива `using namespace std;` позволяет использовать стандартные имена без префикса `std::`.

> 🌐 **[EN]** Includes `iostream` (for console input/output) and `string` (for string manipulation methods). `using namespace std;` allows using standard names without the `std::` prefix.
> 🌐 **[AR]** استدعاء مكتبتي `iostream` (للإدخال والإخراج عبر الشاشة) و `string` (للتعامل مع النصوص ودوالها). السطر الأخير يسمح بكتابة الأوامر مباشرة دون الحاجة لكتابة `std::` قبلها.

---

### 🔹 Шаг 2: Объявление функции и защита от пустого слова

```cpp
string replaceAll(string text, const string& targetWord, const string& replacementWord)
 {
    if (targetWord.empty())
    {
        return text;
    }
```

Функция принимает исходный текст, искомое слово и слово-замену. Условие `targetWord.empty()` проверяет, не является ли искомое слово пустым, чтобы избежать зацикливания программы.

> 🌐 **[EN]** The function takes the original text, target word, and replacement word. `targetWord.empty()` checks if the target word is empty to prevent an infinite loop.
> 🌐 **[AR]** تستقبل الدالة النص الأصلي والكلمة المطلوبة والكلمة البديلة. الشرط `targetWord.empty()` يتأكد أن الكلمة المطلوبة ليست فارغة لتجنب دخول البرنامج في تكرار لا نهائي.

---

### 🔹 Шаг 3: Инициализация позиции поиска

```cpp
    size_t pos = 0;
```

Создается переменная `pos` типа `size_t` с начальным значением `0`. Она хранит индекс (позицию) текущего символа, с которого начинается поиск слова в строке.

> 🌐 **[EN]** Creates a variable `pos` of type `size_t` initialized to `0`. It stores the index (position) where the search currently starts in the string.
> 🌐 **[AR]** إنشاء متغير باسم `pos` وقيمته الابتدائية `0`، وظيفته تخزين رقم الحرف (الموقع) الذي يبدأ منه البحث داخل الجملة.

---

### 🔹 Шаг 4: Цикл поиска вхождений `while`

```cpp
    while ((pos = text.find(targetWord, pos)) != string::npos)
    {
```

Метод `text.find()` ищет слово `targetWord` начиная с позиции `pos`. Цикл продолжается до тех пор, пока слово находится в строке (то есть результат не равен `string::npos` — «не найдено»).

> 🌐 **[EN]** `text.find()` searches for `targetWord` starting from `pos`. The loop continues as long as the word is found (i.e., result is not equal to `string::npos` — "not found").
> 🌐 **[AR]** تبحث دالة `find` عن الكلمة المطلوبة بدءاً من الموقع `pos`. تستمر الحلقة طالما أن الكلمة موجودة في النص (أي أن النتيجة لا تساوي `string::npos` التي تعني غير موجود).

---

### 🔹 Шаг 5: Замена слова и сдвиг позиции

```cpp
        text.replace(pos, targetWord.length(), replacementWord);
        pos += replacementWord.length();
    }
    return text;
}
```

Метод `text.replace()` удаляет старое слово длиной `targetWord.length()` начиная с позиции `pos` и вставляет новое слово. Затем `pos` сдвигается вперед на длину нового слова, чтобы продолжить поиск дальше по тексту.

> 🌐 **[EN]** `text.replace()` removes the old word of length `targetWord.length()` at `pos` and inserts the new word. Then `pos` moves forward by the new word's length to continue searching.
> 🌐 **[AR]** تقوم دالة `replace` بحذف الكلمة القديمة من الموقع `pos` ووضع الكلمة الجديدة مكانها، ثم يتحرك مؤشر البحث `pos` لما بعد الكلمة الجديدة لإكمال البحث في باقي الجملة.

---

### 🔹 Шаг 6: Ввод исходного текста с пробелами в `main()`

```cpp
int main()
{
    string inputText, targetWord, replacementWord;

    cout << "1. Enter the full text (sentence):\n> ";
    getline(cin, inputText);
```

Функция `getline(cin, inputText)` считывает всю введенную пользователем строку целиком вместе с пробелами до нажатия клавиши `Enter`.

> 🌐 **[EN]** `getline(cin, inputText)` reads the entire line entered by the user, including spaces, until the `Enter` key is pressed.
> 🌐 **[AR]** تقرأ دالة `getline` السطر الكامل الذي يكتبه المستخدم بكل مسافاته حتى يضغط على زر الإدخال `Enter`.

---

### 🔹 Шаг 7: Ввод слов и вывод результата

```cpp
    cout << "\n2. Enter the word you want to replace:\n> ";
    cin >> targetWord;

    cout << "\n3. Enter the new replacement word:\n> ";
    cin >> replacementWord;

    string resultText = replaceAll(inputText, targetWord, replacementWord);

    cout << "\nOriginal text : " << inputText << "\n";
    cout << "Modified text : " << resultText << "\n";
    return 0;
}
```

Оператор `cin >>` считывает отдельные слова (искомое и заменяющее). Далее вызывается функция `replaceAll`, а на экран выводятся исходный и измененный тексты.

> 🌐 **[EN]** `cin >>` reads individual words (target and replacement). Then `replaceAll` is called, and both the original and modified texts are printed to the screen.
> 🌐 **[AR]** يقرأ الأمر `cin` الكلمة المطلوبة والكلمة البديلة، ثم يتم استدعاء دالة `replaceAll` وطباعة الجملة الأصلية والجملة بعد التعديل على الشاشة.

---

## 💻 Полный исходный код программы (Full Source Code)

```cpp
#include <iostream>
#include <string>

using namespace std;

string replaceAll(string text, const string& targetWord, const string& replacementWord) {
    if (targetWord.empty()) {
        return text;
    }

    size_t pos = 0;

    while ((pos = text.find(targetWord, pos)) != string::npos) {
        text.replace(pos, targetWord.length(), replacementWord);
        pos += replacementWord.length();
    }

    return text;
}

int main() {
    string inputText;
    string targetWord;
    string replacementWord;

    cout << "==========================================\n";
    cout << "        Word Replacement Program          \n";
    cout << "==========================================\n\n";

    cout << "1. Enter the full text (sentence):\n> ";
    getline(cin, inputText);

    cout << "\n2. Enter the word you want to replace:\n> ";
    cin >> targetWord;

    cout << "\n3. Enter the new replacement word:\n> ";
    cin >> replacementWord;

    string resultText = replaceAll(inputText, targetWord, replacementWord);

    cout << "\n------------------------------------------\n";
    cout << "Original text : " << inputText << "\n";
    cout << "Modified text : " << resultText << "\n";
    cout << "------------------------------------------\n";

    return 0;
}
```

---

## 🖥️ Пример работы программы (Консоль)

```text
==========================================
        Word Replacement Program          
==========================================

1. Enter the full text (sentence):
> C++ is hard, but C++ is powerful.

2. Enter the word you want to replace:
> C++

3. Enter the new replacement word:
> Python

------------------------------------------
Original text : C++ is hard, but C++ is powerful.
Modified text : Python is hard, but Python is powerful.
------------------------------------------
```

---

## ✅ Вывод

В ходе выполнения лабораторной работы были изучены методы работы со строками (`std::string`) в языке C++, включая считывание строк с пробелами с помощью `getline()`, а также поиск и замену подстрок с использованием методов `find()` и `replace()`.

> 🌐 **[EN]** Conclusion: During this lab work, methods for working with strings (`std::string`) in C++ were studied, including reading strings with spaces using `getline()`, as well as searching and replacing substrings using `find()` and `replace()`.
> 🌐 **[AR]** الخلاصة: تم في هذا العمل المخبري دراسة طرق التعامل مع السلاسل النصية (`std::string`) في لغة C++، بما في ذلك قراءة الجمل مع المسافات باستخدام `getline()`، والبحث عن الكلمات واستبدالها باستخدام دوال `find()` و `replace()`.
