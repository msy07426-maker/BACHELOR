# Task

<div align="center">

# 🎓 МИНИСТЕРСТВО ОБРАЗОВАНИЯ И НАУКИ РОССИЙСКОЙ ФЕДЕРАЦИИ
### Кафедра Автоматизированных систем управления (АСУ)

---

## 👤 Студенческая Визитная Карточка

| 📝 Личные данные студента | 🔍 Официальная информация |
| :--- | :--- |
| **ФИО Студента** | <span style="color: #238636;"><b>\[Мухаммад Майя]</b></span> |
| **Номер группы** | <span style="color: #1f6feb;"><b>\[ИВТ-26-1б]</b></span> |
| **Специальность** | Инженерная информатика (АСУ) |
| **Дисциплина** | Программирование на языке С++ |

</div>

---

## 📌 Постановка задачи (Home Assignments Menu)

Разработать консольное приложение с интерактивным меню на базе оператора `switch-case`, объединяющее 8 алгоритмических задач на языке C++: поиск экстремумов и их индексов, проверка отсортированности массива, реверс массива, поиск максимума в двумерной матрице, три классических алгоритма сортировки (вставками, выбором, пузырьком) и работу со строго типизированным перечислением `enum class`.

> 🌐 **[EN]** Task setup: Build a menu-driven C++ console application using `switch-case` that integrates 8 core algorithmic tasks: finding min/max with indices and counts, checking array sortedness, reversing an array, finding the max element in a 2D matrix, implementing Insertion, Selection, and Bubble sorts, and demonstrating `enum class`.
> 🌐 **[AR]** صياغة المسألة: تطوير تطبيق كونسول تفاعلي بلغة C++ باستخدام جملة `switch-case` يجمع 8 مهام برمجية: إيجاد القيم العظمى والصغرى وفهارسها وتكرارها، التحقق من ترتيب المصفوفة، عكس المصفوفة، إيجاد القيمة العظمى في مصفوفة ثنائية الأبعاد، خوارزميات الفرز الثلاث (الإدراج، الاختيار، الفقاعي)، ومثال على التعداد `enum class`.

---

## 🗺️ Блок-схема алгоритма программы (Flowchart)

<div align="center"> 

> ⚠️ *Примечание: Вставьте сюда ссылку на изображение вашей блок-схемы `task.drawio` (аналогично предыдущим работам).*

</div>

---

## 💻 Разбор и подробное объяснение исходного кода

### 1. Главное меню и диспетчеризация выбора (`switch-case`)

```cpp
#include <iostream>
using namespace std;

int main()
{
    int choice;
    
    cout << "=========================================\n";
    cout << "        Home Assignments Menu            \n";
    cout << "=========================================\n";
    cout << "1. Task 1: Find Max/Min, Indices & Counts\n";
    cout << "2. Task 2: Check if Array is Sorted      \n";
    cout << "3. Task 3: Reverse an Array              \n";
    cout << "4. Task 4: Find Max in 2D Array          \n";
    cout << "5. Task 5: Insertion Sort                \n";
    cout << "6. Task 6: Selection Sort                \n";
    cout << "7. Task 7: Bubble Sort                   \n";
    cout << "8. Task 9: Enum Example (Color)          \n";
    cout << "0. Exit                                  \n";
    cout << "=========================================\n";
    cout << "Enter your choice (0-8): ";
    cin >> choice;
```

> 📑 **Описание работы:**
> Программа выводит текстовое меню со списком всех доступных заданий и считывает номер выбранного пункта в переменную `choice`. Далее управление передаётся соответствующей ветке `case` оператора `switch`.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Displays a structured console menu and reads the user's integer selection into `choice` to route execution via `switch`.
> * **AR:** طباعة القائمة الرئيسية على الشاشة وقراءة رقم المهمة المختارة من المستخدم لتوجيه التنفيذ عبر جملة `switch`.

---

### 2. Задачи 1–3: Линейная обработка одномерных массивов

```cpp
        case 1:
        {
            int arr[] = {4, 9, 2, 9, 1};
            int size = 5, maxVal = arr[0], minVal = arr[0], maxIndex = 0, minIndex = 0, countMax = 0, countMin = 0;
            
            for (int i = 1; i < size; i++)
            {
                if (arr[i] > maxVal) { maxVal = arr[i]; maxIndex = i; }
                if (arr[i] < minVal) { minVal = arr[i]; minIndex = i; }
            }
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == maxVal) countMax++;
                if (arr[i] == minVal) countMin++;
            }
            // Вывод результатов...
            break;
        }
        case 2:
           {
            int arr[] = {1, 2, 3, 4, 5};
            int size = 5;
            bool isSorted = true;
            for (int i = 0; i < size - 1; i++) {
                if (arr[i] > arr[i + 1]) { isSorted = false; break; }
            }
            break;
            }
        case 3:
       {
            int arr[] = {1, 2, 3, 4, 5};
            int size = 5;
            for (int i = 0, j = size - 1; i < j; i++, j--)
            {
                int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
            }
            break;
        }
```

> 📑 **Описание работы:**
> * **Task 1:** Находит минимальное и максимальное значения за первый проход (фиксируя индекс первого вхождения благодаря строгому неравенству `>` / `<`) и подсчитывает количество их повторений за второй проход.
> * **Task 2:** Проверяет упорядоченность массива по возрастанию, сравнивая соседние элементы `arr[i] > arr[i + 1]`, с досрочным выходом `break` при нарушении порядка.
> * **Task 3:** Выполняет реверс массива на месте (in-place) методом двух указателей (`i` с начала, `j` с конца) до встречи в центре.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Implements linear array algorithms: finding min/max with first indices and frequencies (Task 1), checking ascending order (Task 2), and two-pointer in-place array reversal (Task 3).
> * **AR:** تنفيذ خوارزميات المصفوفات أحادية البعد: إيجاد القيم العظمى والصغرى وأول فهرس وتكرارها (Task 1)، التحقق من الترتيب التصاعدي (Task 2)، وعكس المصفوفة في مكانها بمؤشرين (Task 3).

---

### 3. Задача 4: Поиск максимума и его координат в двумерной матрице

```cpp
        case 4:
       {
            int matrix[3][4] = {{1, 5, 9, 2}, {8, 3, 7, 4}, {6, 0, 11, 2}};
            int maxVal = matrix[0][0], maxRow = 0, maxCol = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (matrix[i][j] > maxVal) { maxVal = matrix[i][j]; maxRow = i; maxCol = j; }
                }
            }
            cout << "Max element: " << maxVal << " at Row: " << maxRow << ", Col: " << maxCol << endl;
            break;
        }
```

> 📑 **Описание работы:**
> Вложенный цикл обходит матрицу размером `3 × 4`. При обнаружении элемента, превышающего текущий максимум `maxVal`, обновляется само значение, а также запоминаются координаты строки `maxRow` и столбца `maxCol`.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Traverses a `3 × 4` 2D matrix using nested loops to locate the maximum value along with its exact row and column indices.
> * **AR:** المرور على مصفوفة ثنائية الأبعاد بحجم `3 × 4` عبر حلقات متداخلة لتحديد أكبر عنصر مع إحداثيات الصف والعمود الخاصين به.

---

### 4. Задачи 5–7: Классические алгоритмы сортировки ($O(N^2)$)

```cpp
        // Task 5: Insertion Sort (Сортировка вставками)
        case 5:
       {
            int arr[7] = {7, 3, 5, 1, 6, 2, 4};
            for (int i = 1; i < 7; i++)
            {
                int key = arr[i]; int j = i - 1;
                while (j >= 0 && arr[j] > key) { arr[j + 1] = arr[j]; j = j - 1; }
                arr[j + 1] = key;
            }
            break;
        }

        // Task 6: Selection Sort (Сортировка выбором)
        case 6:
        {
            int arr[7] = {7, 3, 5, 1, 6, 2, 4};
            for (int i = 0; i < 6; i++)
           {
                int minIndex = i;
                for (int j = i + 1; j < 7; j++)
                {
                    if (arr[j] < arr[minIndex]) minIndex = j;
                }
                int temp = arr[minIndex]; arr[minIndex] = arr[i]; arr[i] = temp;
            }
            break;
        }

        // Task 7: Bubble Sort (Пузырьковая сортировка)
        case 7:
        {
            int arr[7] = {7, 3, 5, 1, 6, 2, 4};
            for (int i = 0; i < 7 - 1; i++)
            {
                for (int j = 0; j < 7 - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
                    }
                }
            }
            break;
        }
```

> 📑 **Описание работы:**
> Все три алгоритма упорядочивают тестовый массив `{7, 3, 5, 1, 6, 2, 4}` по возрастанию:
> * **Insertion Sort (Task 5):** Последовательно берёт элемент `key` и вставляет его на нужную позицию в уже отсортированную левую часть массива.
> * **Selection Sort (Task 6):** На каждом шаге находит индекс минимального элемента `minIndex` в неотсортированной части и меняет его местами с текущим элементом `arr[i]`.
> * **Bubble Sort (Task 7):** Попарно сравнивает соседние элементы и «всплывает» наибольшие значения в конец массива.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Demonstrates three $O(N^2)$ sorting algorithms on `{7, 3, 5, 1, 6, 2, 4}`: Insertion Sort (shifting keys left), Selection Sort (swapping minimum elements), and Bubble Sort (adjacent swaps).
> * **AR:** تطبيق ثلاث خوارزميات فرز على نفس المصفوفة: الفرز بالإدراج (Task 5)، الفرز بالاختيار (Task 6)، والفرز الفقاعي (Task 7).

---

### 5. Задача 9 и завершение работы: Перечисления (`enum class`) и обработка ошибок

```cpp
        case 9:
       {
            cout << "Executing Task 9 (Enum Example)\n";
            enum class Color { RED, GREEN, BLUE };
            Color myColor = Color::GREEN;
            if (myColor == Color::GREEN) cout << "Result: The color is GREEN (Enum class works!)" << endl;
            break;
        }

        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please run the program again.\n";
```

> 📑 **Описание работы:**
В ветке case 9 объявляется строго типизированное перечисление enum class Color с константами RED, GREEN, BLUE, создаётся переменная myColor и проверяется её значение через оператор сравнения ==. Ветки case 0 и default отвечают за штатный выход и обработку некорректного ввода. (Примечание: в тексте меню пункт подписан как 8. Task 9, поэтому для его запуска вводится число 9).
💬 🌐 Multilingual Summary:
• EN: Showcases type-safe enum class Color comparison in case 9, along with graceful program exit (case 0) and invalid input handling (default).
• AR: توضيح استخدام التعداد الآمن enum class Color في الفرع case 9، بالإضافة إلى الخروج الآمن ومعالجة الإدخال الخاطئ عبر default.


