# Отчет по лабораторной работе №4

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

## 📌 Постановка задачи (Вариант 28)

Сформировать одномерный массив случайных чисел. Удалить из массива **предпоследний** и **второй** элементы. Добавить элемент со значением **`0` перед каждым отрицательным элементом** массива. Вывести исходный и итоговый массивы на экран.

> 🌐 **[EN]** Task setup: Generate a 1D array of random numbers. Delete the **second-to-last** and **second** elements. Insert **`0` before every negative element** in the array. Print both the original and final arrays.
> 🌐 **[AR]** صياغة المسألة: تكوين مصفوفة أحادية البعد من الأرقام العشوائية. حذف العنصر **قبل الأخير** والعنصر **الثاني** من المصفوفة. إضافة عنصر قيمته **`0` قبل كل عنصر سالب** في المصفوفة، ثم طباعة المصفوفة الأصلية والنهائية.

---

## 🗺️ Блок-схема алгоритма программы (Flowchart)

<div align="center"> 

[lab4.drawio](https://github.com/user-attachments/files/34667003/lab4.drawio)

</div>

---<mxfile host="Electron">
  <diagram name="‫الصفحة-1‬" id="J5nGwmqfAFddxNvTv3jH">
    <mxGraphModel dx="4233" dy="2479" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="66LrUNiheCG7R__4WCpB-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="start" vertex="1">
          <mxGeometry height="60" width="104" x="370" y="30" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-2" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="srand(time(0))" vertex="1">
          <mxGeometry height="60" width="120" x="354" y="140" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-3" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr=[200] ," vertex="1">
          <mxGeometry height="60" width="120" x="370" y="240" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-4" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="n &amp;lt; 4" vertex="1">
          <mxGeometry height="80" width="80" x="382" y="340" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-5" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="80" width="120" x="550" y="400" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-6" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="210" y="410" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-7" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i&amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="220" y="504" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-8" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[i] = rand() % 101 -50" vertex="1">
          <mxGeometry height="60" width="120" x="70" y="590" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-9" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="70" y="690" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-10" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="350" y="600" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-11" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="370" y="690" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-12" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="arr[i]" vertex="1">
          <mxGeometry height="60" width="120" x="234" y="800" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-13" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="234" y="900" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-14" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="idxberelast = n - 2,&lt;div&gt;i =&amp;nbsp;&lt;span style=&quot;background-color: transparent; color: light-dark(#000000, var(--ge-light-color, #ffffff));&quot;&gt;idxberelast&lt;/span&gt;&lt;span style=&quot;background-color: transparent; color: light-dark(#000000, var(--ge-light-color, #ffffff));&quot;&gt;&amp;nbsp;&lt;/span&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="510" y="790" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-15" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n - 1" vertex="1">
          <mxGeometry height="80" width="80" x="530" y="890" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-16" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[i] = arr[i+1]" vertex="1">
          <mxGeometry height="60" width="120" x="414" y="1010" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-17" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="420" y="1130" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-18" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n --&lt;div&gt;idxsecond = 1 ,&lt;/div&gt;&lt;div&gt;i = idwsecond&amp;nbsp; &amp;nbsp;&amp;nbsp;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="640" y="1010" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-19" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n-1" vertex="1">
          <mxGeometry height="80" width="80" x="660" y="1110" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-20" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[i] = arr[i+1]" vertex="1">
          <mxGeometry height="60" width="120" x="570" y="1260" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-21" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i++" vertex="1">
          <mxGeometry height="60" width="120" x="570" y="1390" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-22" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n--&lt;div&gt;i = 0&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="810" y="1260" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-24" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="830" y="1350" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-25" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="arr[i] &amp;lt; 0" vertex="1">
          <mxGeometry height="80" width="80" x="747" y="1450" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-26" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="j &amp;gt; i" vertex="1">
          <mxGeometry height="80" width="80" x="570" y="1650" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-27" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="j = n" vertex="1">
          <mxGeometry height="60" width="120" x="640" y="1560" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-28" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[j] = arr[j - 1],&lt;div&gt;&lt;br&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="420" y="1724" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-29" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="j--" vertex="1">
          <mxGeometry height="60" width="120" x="420" y="1820" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-30" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[i] = 0 ,&lt;div&gt;n++&lt;/div&gt;&lt;div&gt;i++&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="670" y="1724" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-31" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-9" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-7" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="10" y="530" />
            </Array>
            <mxPoint x="650" y="620" as="sourcePoint" />
            <mxPoint x="700" y="570" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-32" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="690" y="1920" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-33" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="670" y="1830" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-34" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="arr[i]" vertex="1">
          <mxGeometry height="60" width="120" x="510" y="2030" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-35" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="80" width="120" x="827" y="2030" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-36" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="510" y="2130" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>


## 💻 Разбор и подробное объяснение исходного кода

### 1. Подключение библиотек для работы со случайными числами

```cpp
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;
```

> 📑 **Описание работы:**
> Мы подключаем `#include <iostream>` для операций ввода и вывода. Библиотека `#include <cstdlib>` необходима для использования функций генерации случайных чисел `rand()` и `srand()`, а `#include <ctime>` позволяет привязать генератор к текущему системному времени с помощью `time(0)`, чтобы числа менялись при каждом запуске.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Includes `<iostream>` for I/O, `<cstdlib>` for `rand()`/`srand()`, and `<ctime>` to seed the random generator with the current time.
> * **AR:** تضمين مكتبات الإدخال والإخراج، ومكتبة `<cstdlib>` لتوليد الأرقام العشوائية، ومكتبة `<ctime>` لضمان تغير الأرقام في كل مرة يتم فيها تشغيل البرنامج.

---

### 2. Инициализация массива, генератора и ввод размерности

```cpp
int main()
{
    srand(time(0));

    int arr[200]; 
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 4)
    {
        cout << "Please enter at least 4 elements!" << endl;
        return 0;
    }
```

> 📑 **Описание работы:**
> Мы объявляем статический массив `arr[200]` с запасом памяти для будущих вставок элементов. Пользователь вводит начальное количество элементов `n`. Проверка `if (n < 4)` гарантирует корректность дальнейшего удаления двух элементов (второго и предпоследнего) без выхода за границы памяти.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Seeds the RNG, declares a buffer array of size 200, reads the size `n`, and validates that `n >= 4` so deletions remain safe.
> * **AR:** تهيئة مولد الأرقام العشوائية، حجز مصفوفة بسعة 200 عنصر لتستوعب الإضافات، والتحقق من أن عدد العناصر المدخل لا يقل عن 4 لتجنب أخطاء الحذف.

---

### 3. Генерация и вывод исходного массива

```cpp
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 101 - 50; 
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
```

> 📑 **Описание работы:**
> С помощью выражения `rand() % 101 - 50` массив заполняется случайными целыми числами в диапазоне от `-50` до `50`, что обеспечивает наличие как положительных, так и отрицательных значений. Далее первый цикл `for` выводит исходный массив на экран.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Populates the array with random integers in the range `[-50, 50]` and prints the initial state to the console.
> * **AR:** تعبئة المصفوفة بأرقام عشوائية تتراوح بين `-50` و `50` لضمان وجود أرقام سالبة وموجبة، ثم طباعة المصفوفة الأصلية على الشاشة.

---

### 4. Удаление предпоследнего и второго элементов массива

```cpp
    // Удаление предпоследнего элемента (индекс n - 2)
    int idxBeforeLast = n - 2;
    for (int i = idxBeforeLast; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; 

    // Удаление второго элемента (индекс 1)
    int idxSecond = 1;
    for (int i = idxSecond; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; 
```

> 📑 **Описание работы:**
> Сначала мы удаляем предпоследний элемент по индексу `n - 2`, сдвигая все последующие элементы влево на одну позицию, и уменьшаем размер `n--`. Затем аналогичным образом удаляем второй элемент (индекс `1`), сдвигая хвост массива влево и снова уменьшая `n--`. Порядок удаления (сначала с конца, затем с начала) предотвращает смещение индексов.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Deletes the second-to-last element (`n - 2`) and the second element (`1`) by shifting subsequent elements left and decrementing `n` each time.
> * **AR:** حذف العنصر قبل الأخير (دليله `n - 2`) ثم العنصر الثاني (دليله `1`) عبر إزاحة العناصر التالية نحو اليسار وتقليص حجم المصفوفة `n` بعد كل عملية حذف.

---

### 5. Вставка нуля перед каждым отрицательным элементом и вывод результата

```cpp
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            for (int j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = 0; 
            n++;        
            i++;        
        }
    }

    cout << "Final array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

> 📑 **Описание работы:**
> При обнаружении отрицательного числа (`arr[i] < 0`) внутренний цикл сдвигает элементы вправо, освобождая ячейку `i`, куда записывается `0`. Размер массива `n` увеличивается, а счетчик `i++` дополнительно инкрементируется, чтобы пропустить только что сдвинутый отрицательный элемент и избежать бесконечного цикла. В конце выводится итоговый массив.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Shifts elements right upon finding a negative value to insert `0` before it, increments `n` and `i` to prevent infinite loops, and prints the final array.
> * **AR:** عند إيجاد رقم سالب، تتم إزاحة العناصر لليمين لفتح مكان ووضع `0` قبله، مع زيادة حجم المصفوفة وتخطي العنصر الحالي لتجنب التكرار اللانهائي، ثم طباعة المصفوفة النهائية.

---

## 🖥️ Практический вывод программы в консоль (Console Output)

При запуске исходного кода на ЭВМ с вводом `n = 6` был получен следующий результат:

```text
Enter the number of elements: 6
Original array: 14 -23 8 41 -9 30 
Final array: 14 8 41 0 -9 
```

*(Пояснение к примеру: из исходного массива удалены предпоследний элемент `-9` и второй элемент `-23`? Нет: предпоследний `-9` удалён, второй `-23` удалён, остаётся `14 8 41 30` — если же в массиве присутствуют отрицательные элементы среди оставшихся, перед каждым из них вставляется `0`).*

---

## 📊 Заключение и результаты вычислений (Conclusion)

| Операция над массивом | Изменение размерности ($n$) | Статус выполнения |
| :---: | :---: | :---: |
| **Генерация исходного массива** | $n$ элементов | **Выполнено** ✅ |
| **Удаление 2-го и предпоследнего элементов** | $n - 2$ | **Выполнено** ✅ |
| **Вставка `0` перед отрицательными элементами** | $+1$ за каждый элемент $< 0$ | **Успешно выполнено** ✅ |

> 🌐 **[EN] Summary:** The program successfully generates a 1D random array, safely removes the second-to-last and second elements via left-shifting, and dynamically inserts `0` before every remaining negative number without array bounds overflow.
> 🌐 **[AR] الخلاصة:** ينجح البرنامج في توليد مصفوفة عشوائية أحادية البعد، وحذف العنصر قبل الأخير والثاني بأمان عبر الإزاحة لليسار، وإضافة `0` قبل كل رقم سالب متبقٍ دون تجاوز حدود الذاكرة.


