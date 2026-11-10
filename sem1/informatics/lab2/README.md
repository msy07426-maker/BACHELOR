# Отчет по лабораторной работе №2



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



Используя оператор цикла, найти сумму элементов числового ряда с заданной точностью $\\varepsilon = 10^{-4}$. Результат напечатать, снабдив соответствующим заголовком.



**Общий член ряда (Вариант 28):**

                       {2n + 1}
       a_n =  _________________________                
                        {3^n}



> 🌐 **[EN]** Task setup: Use a loop to calculate the sum of the infinite series with a given precision $\\varepsilon = 10^{-4}$ based on the general term formula.

> 🌐 **[AR]** صياغة المسألة: باستخدام حلقة تكرارية، احسب مجموع عناصر المتسلسلة العددية بدقة محددة $\\varepsilon = 10^{-4}$ بناءً على صيغة الحد العام.



---



## 🗺️ Блок-схема алгоритма программы (Flowchart)
![lab2.drawio](https://github.com/user-attachments/files/34629839/lab2.drawio)

<div align="center"> 

<mxfile host="Electron">
  <diagram name="‫الصفحة-1‬" id="R421uFxlyflyUg_a_MlP">
    <mxGraphModel dx="1198" dy="895" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="star" vertex="1">
          <mxGeometry height="60" width="120" x="354" y="10" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-2" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="sum = 0.0 ,&lt;div&gt;epsilon= 1e - 4 ,&lt;/div&gt;&lt;div&gt;an = 0.0 ,&lt;/div&gt;&lt;div&gt;n = 1&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="354" y="120" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-3" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="an &amp;lt; apsilon" vertex="1">
          <mxGeometry height="80" width="100" x="364" y="230" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-4" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="sum , n , an" vertex="1">
          <mxGeometry height="60" width="120" x="120" y="340" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-5" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="60" width="120" x="120" y="450" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-6" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="an = (2.0 * n + 1.0 ) /&lt;div&gt;pow(3.0 , n) ,&lt;/div&gt;&lt;div&gt;sum += an ,&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="560" y="340" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-7" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="sum , n , an" vertex="1">
          <mxGeometry height="60" width="120" x="560" y="440" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-8" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n += n" vertex="1">
          <mxGeometry height="60" width="120" x="560" y="540" as="geometry" />
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-9" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-2" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="470" y="280" as="sourcePoint" />
            <mxPoint x="520" y="230" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-10" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-2" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-3" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="470" y="280" as="sourcePoint" />
            <mxPoint x="520" y="230" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-11" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-4" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.2311" as="geometry">
            <Array as="points">
              <mxPoint x="180" y="270" />
            </Array>
            <mxPoint x="470" y="280" as="sourcePoint" />
            <mxPoint x="190" y="270" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-12" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-6" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.2079" as="geometry">
            <Array as="points">
              <mxPoint x="620" y="270" />
            </Array>
            <mxPoint x="470" y="280" as="sourcePoint" />
            <mxPoint x="680" y="230" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-13" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-4" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-5" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="180" y="420" as="sourcePoint" />
            <mxPoint x="430" y="530" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-14" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-6" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-7" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="470" y="450" as="sourcePoint" />
            <mxPoint x="520" y="400" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-15" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-7" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="9AGsYg7Cdo5W3Ztbaqko-8" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="470" y="450" as="sourcePoint" />
            <mxPoint x="520" y="400" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="9AGsYg7Cdo5W3Ztbaqko-16" edge="1" parent="1" source="9AGsYg7Cdo5W3Ztbaqko-8" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.2513" as="geometry">
            <Array as="points">
              <mxPoint x="750" y="570" />
              <mxPoint x="750" y="200" />
            </Array>
            <mxPoint x="470" y="450" as="sourcePoint" />
            <mxPoint x="410" y="200" as="targetPoint" />
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>






> 📊 **Графическая схема итерационного цикла с условием останова**

> *Iterative loop flowchart with stop condition | المخطط التدفيقي للحلقة التكرارية مع شرط التوقف*



</div>



---



## 💻 Разбор и подробное объяснение исходного кода



### 1. Подключение библиотек для математики и форматирования вывода

```cpp

#include <iostream>

#include <cmath>

#include <iomanip>



using namespace std;

```

> 📑 **Описание работы:**

> Мы подключаем директиву `#include <iostream>` для ввода и вывода данных. Также добавляем `#include <cmath>` для работы с функцией возведения в степень `pow()`. Библиотека `#include <iomanip>` необходима для управления шириной столбцов и количеством знаков после запятой при выводе таблицы.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Includes I/O streams, math library for `pow()`, and `<iomanip>` for precise tabular output formatting.

> * **AR:** تضمين مكتبات الإدخال والإخراج، المكتبة الرياضية لحساب الأسس، ومكتبة `<iomanip>` لتنسيق مخرجات الجدول بدقة.



---



### 2. Инициализация управляющих переменных числового ряда

```cpp

int main()
{

   double sum = 0.0;       

   double epsilon = 1e-4;  

   double an = 0.0;        

   int n = 1;              

```

> 📑 **Описание работы:**

> Внутри главной функции мы объявляем переменные с высокой точностью `double`. `sum` будет накапливать общий результат сложения, `epsilon` хранит порог точности `0.0001`. Переменная `an` выделена для хранения значения текущего члена ряда, а `n` — это счетчик итераций, начинающийся с 1.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Initializes high-precision `double` variables for accumulation (`sum`), error threshold (`epsilon`), and loop counter (`n`).

> * **AR:** تهيئة متغيرات بدقة مزدوجة `double` لتخزين المجموع (`sum`)، عتبة الخطأ (`epsilon`)، وعداد الحلقة (`n`).



---



### 3. Запуск итерационного цикла вычислений

```cpp

   while (true)
     {

       an = (2.0 * n + 1.0) / pow(3.0, n);

       sum += an;

```

> 📑 **Описание работы:**

> Мы запускаем бесконечный цикл `while(true)`. На каждой итерации программа рассчитывает значение текущего члена ряда `an` по формуле Варианта 28. Сразу после расчета это значение прибавляется к общей сумме `sum` с помощью оператора совмещенного присваивания `+=`.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Starts an infinite loop where the current element `an` is computed via the formula and directly accumulated into `sum`.

> * **AR:** بدء حلقة تكرارية لا نهائية لحساب الحد الحالي `an` وفقاً للمعادلة وإضافته مباشرة إلى المجموع الكلي.



---



### 4. Вывод итерационной таблицы и проверка условия останова

```cpp

       cout << n << "\t" << fixed << setprecision(6) << an << "\t" << sum << endl;



       if (an < epsilon)
        {

           break;

        }

       n++; 

   }

```

> 📑 **Описание работы:**

> Манипуляторы `fixed` и `setprecision(6)` отображают 6 знаков после запятой, чтобы наглядно видеть затухание членов ряда. Конструкция `if (an < epsilon)` проверяет условие: если текущее слагаемое стало меньше заданной точности `0.0001`, оператор `break` немедленно завершает работу цикла. Иначе счетчик увеличивается (`n++`).

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Formats output to 6 decimal places. Breaks the loop using `break` as soon as `an` falls below the `epsilon` threshold.

> * **AR:** طباعة النتائج بـ 6 خانات عشرية. يتم كسر الحلقة باستخدام `break` عندما تصبح قيمة الحد الحالي أصغر من قيمة الدقة المطلوبة.



---



### 5. Вывод финального результата

```cpp

   cout << "Final Sum of the series: " << fixed << setprecision(4) << sum << endl;

   cout << "Total iterations (n): " << n << endl;



   return 0;

}

```

> 📑 **Описание работы:**

> После выхода из цикла программа выводит на экран окончательную сумму ряда с точностью до 4 знаков после запятой, а также показывает общее число пройденных шагов `n`. Оператор `return 0` успешно завершает выполнение программы.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Prints the definitive sum rounded to 4 decimal places and displays the total number of iterations performed.

> * **AR:** طباعة المجموع النهائي مقرباً إلى 4 خانات عشرية وعرض عدد الخطوات الكلي المقطوعة.



---



## 📊 Заключение и результаты вычислений



## 🖥️ Практический вывод программы в консоль (Console Output)



При запуске исходного кода на ЭВМ была получена следующая итерационная таблица:



```text

Lab 2: Sum of Infinite Series (Variant 28) ===

n       an              Current Sum

---------------------------------------------

1       1.000000        1.000000

2       0.555556        1.555556

3       0.259259        1.814815

4       0.111111        1.925926

5       0.045267        1.971193

6       0.017833        1.989026

7       0.006859        1.995885

8       0.002591        1.998476

9       0.000965        1.999441

10      0.000356        1.999797

11      0.000130        1.999927

12      0.000047        1.999974

---------------------------------------------

Final Sum of the series: 2.0000

Total iterations (n): 12

```



---



## 📊 Заключение и результаты вычислений (Conclusion)



| Точность ($varepsilon$) | Общее число шагов ($n$) | Итоговая сумма ряда | Статус выполнения |
| :---: | :---: | :---: | :---: |[lab2.drawio](https://github.com/user-attachments/files/34629616/lab2.drawio)

| **$10^{-4}$** | **12** | **2.0000** | **Успешно выполнено** ✅ |



> 🌐 **[EN] Summary:** Real console output proves that the series converges extremely fast. At the 12th iteration, the term value drops below $0.0001$, triggering the safe loop break with a final accurate sum of $2.0000$.

> 🌐 **[AR] الخلاصة** يثبت خرج الكونسول الفعلي أن المتسلسلة تتقارب بسرعة كبيرة. عند الخطوة رقم 12، انخفضت قيمة الحد الحالي عن عتبة $0.0001$، مما أدى إلى كسر الحلقة التكرارية بنجاح والخروج بمجموع دقيق يساوي $2.0000$.



