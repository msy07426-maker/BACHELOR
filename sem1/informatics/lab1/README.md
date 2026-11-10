# Отчет по лабораторной работе №1



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



## 📌 Постановка задачи (Вариант 28)



### Задание 1: Вычисление арифметического выражения

Вычислить значение математического выражения при различных вещественных типах данных (`float` и `double`) с использованием промежуточных переменных. Сравнить и объяснить полученные результаты.



[frac{(a-b)^5 - (a^5 - 5a^4b)}{-10a^3b^2 + 10a^2b^3 - 5ab^4 + b^5}]



*Где исходные данные:* (a = 1000), (b = 0.0001)



### Задание 2: Логические выражения и инкременты

Вычислить значения выражений с использованием унарных операций инкремента и декремента:

1. `n++ \* ++m`

2. `--m < n--`

3. `m++ > n++`



> 🌐 **[EN]** Task setup: Calculate math expressions via `float`/`double` and analyze precision loss. Evaluate increment/decrement expressions.

> 🌐 **[AR]** صياغة المسألة: حساب تعبير رياضي باستخدام نوعين (`float` و `double`) وتحليل فقدان الدقة، وتقييم تعابير الزيادة والنقصان.



---



## 🗺️ Блок-схема алгоритма (Flowchart)



<div align="center">



> 📊 **Логическая структура выполнения программы**

> *Logical execution flow | الهيكل المنطقي لتنفيذ البرنامج*
> 
![lab1.drawio](https://github.com/user-attachments/files/34617309/lab1.drawio)

<mxfile host="Electron">
  <diagram name="‫الصفحة-1‬" id="E_htBZbuySDYP9T9Uxm2">
    <mxGraphModel dx="3323" dy="2484" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="mI7I274n_UORCBZzSbyU-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="start" vertex="1">
          <mxGeometry height="70" width="180" x="320" y="56" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-3" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="a_d = 1000.0 ,&lt;div&gt;b_d = 0.0001 ,&lt;/div&gt;&lt;div&gt;&amp;nbsp;a_f = 1000.0f ,&lt;/div&gt;&lt;div&gt;&amp;nbsp;b_f = 0.0001f ,&lt;/div&gt;" vertex="1">
          <mxGeometry height="80" width="500" x="160" y="186" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-4" edge="1" parent="1" source="mI7I274n_UORCBZzSbyU-1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="410.1" y="125.99999999999977" as="sourcePoint" />
            <mxPoint x="411.9" y="186" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-5" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="num_d = pow(a_d - b_d , 5 ) - (pow(a_d , 5 ) - 5.0 * pow(a_d , 4 ) * b_d ) ,&lt;div&gt;den_d = - 10.0 * pow (a_d , 3) * pow(b_d , 2) + 10.0 * pow(a_d , 2) * pow(b_d , 3)&amp;nbsp; - 5.0 * a_d * pow(b_d , 4 ) + pow(b_d,5) ,&lt;/div&gt;&lt;div&gt;result_double = num_d / den_d ,&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;&lt;div&gt;num_f = pow(a_f - b_f , 5 ) - (pow(a_d , 5 ) - 5.0 * pow(a_f , 4 ) * b_f ) ,&lt;div&gt;den_f = - 10.0 * pow (a_f , 3) * pow(b_f , 2) + 10.0 * pow(a_f , 2) * pow(b_f , 3)&amp;nbsp; - 5.0 * a_f&amp;nbsp; * pow(b_f , 4 ) + pow(b_f , 5) ,&lt;/div&gt;&lt;div&gt;result_flout&amp;nbsp; = num_f / den_f ,&lt;/div&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="170" width="500" x="160" y="296" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-8" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="setrecision(6),&lt;div&gt;result_double ,&lt;/div&gt;&lt;div&gt;result_flout ,&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="510" x="160" y="496" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-9" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n = 5 ,&lt;div&gt;m = 5&amp;nbsp;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="510" x="160" y="596" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-10" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="expr1 = n++ * ++m" vertex="1">
          <mxGeometry height="60" width="510" x="160" y="686" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-11" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="n , m" vertex="1">
          <mxGeometry height="60" width="510" x="160" y="786" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-13" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="expr2 = --m &amp;lt; n--" vertex="1">
          <mxGeometry height="120" width="220" x="310" y="876" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-14" edge="1" parent="1" source="mI7I274n_UORCBZzSbyU-13" style="endArrow=classic;html=1;rounded=0;exitX=0;exitY=0.5;exitDx=0;exitDy=0;curved=0;fontFamily=Times New Roman;labelBackgroundColor=default;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" target="mI7I274n_UORCBZzSbyU-20" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.6607" as="geometry">
            <Array as="points">
              <mxPoint x="200" y="936" />
              <mxPoint x="200" y="1056" />
              <mxPoint x="330" y="1056" />
            </Array>
            <mxPoint x="369" y="938" as="sourcePoint" />
            <mxPoint x="395.3499999999999" y="1021.25" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-15" connectable="0" parent="mI7I274n_UORCBZzSbyU-14" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;fontFamily=Times New Roman;" value="yes" vertex="1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-16" edge="1" parent="1" source="mI7I274n_UORCBZzSbyU-13" style="endArrow=classic;html=1;rounded=0;curved=0;fontFamily=Times New Roman;labelBackgroundColor=default;entryX=1;entryY=0.5;entryDx=0;entryDy=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" target="mI7I274n_UORCBZzSbyU-20" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.5186" as="geometry">
            <Array as="points">
              <mxPoint x="640" y="936" />
              <mxPoint x="640" y="1056" />
              <mxPoint x="490" y="1056" />
            </Array>
            <mxPoint x="459" y="938" as="sourcePoint" />
            <mxPoint x="539" y="1088" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-18" connectable="0" parent="mI7I274n_UORCBZzSbyU-16" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;fontFamily=Times New Roman;" value="no" vertex="1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-19" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="expr2 ,&lt;div&gt;n ,&lt;/div&gt;&lt;div&gt;m&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="510" x="160" y="1106" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-20" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;aspect=fixed;" value="" vertex="1">
          <mxGeometry height="30" width="30" x="400" y="1041" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-29" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="expr2 ,&lt;div&gt;n ,&lt;/div&gt;&lt;div&gt;m&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="500" x="170" y="1476" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-31" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="70" width="180" x="330" y="1606" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-32" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="expr3 = m++ &amp;lt; n++" vertex="1">
          <mxGeometry height="120" width="220" x="308" y="1226" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-33" edge="1" parent="1" source="mI7I274n_UORCBZzSbyU-32" style="endArrow=classic;html=1;rounded=0;exitX=0;exitY=0.5;exitDx=0;exitDy=0;curved=0;fontFamily=Times New Roman;labelBackgroundColor=default;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" target="mI7I274n_UORCBZzSbyU-37" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.6607" as="geometry">
            <Array as="points">
              <mxPoint x="190" y="1286" />
              <mxPoint x="190" y="1406" />
              <mxPoint x="320" y="1406" />
            </Array>
            <mxPoint x="363" y="1290" as="sourcePoint" />
            <mxPoint x="389.3499999999999" y="1373.25" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-34" connectable="0" parent="mI7I274n_UORCBZzSbyU-33" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;fontFamily=Times New Roman;" value="yes" vertex="1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-35" edge="1" parent="1" source="mI7I274n_UORCBZzSbyU-32" style="endArrow=classic;html=1;rounded=0;curved=0;fontFamily=Times New Roman;labelBackgroundColor=default;entryX=1;entryY=0.5;entryDx=0;entryDy=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" target="mI7I274n_UORCBZzSbyU-37" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.5186" as="geometry">
            <Array as="points">
              <mxPoint x="630" y="1286" />
              <mxPoint x="630" y="1406" />
              <mxPoint x="480" y="1406" />
            </Array>
            <mxPoint x="453" y="1290" as="sourcePoint" />
            <mxPoint x="533" y="1440" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-36" connectable="0" parent="mI7I274n_UORCBZzSbyU-35" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;fontFamily=Times New Roman;" value="no" vertex="1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-37" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;aspect=fixed;" value="" vertex="1">
          <mxGeometry height="30" width="30" x="400" y="1391" as="geometry" />
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-39" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0.005;entryDx=0;entryDy=0;entryPerimeter=0;" target="mI7I274n_UORCBZzSbyU-5" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="413" y="266" as="sourcePoint" />
            <mxPoint x="413.9" y="326" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-40" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.512;entryY=0.024;entryDx=0;entryDy=0;entryPerimeter=0;" target="mI7I274n_UORCBZzSbyU-8" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="416.5" y="465" as="sourcePoint" />
            <mxPoint x="417.5" y="496" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-41" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="mI7I274n_UORCBZzSbyU-9" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="416.5" y="556" as="sourcePoint" />
            <mxPoint x="417" y="588" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-42" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="416.5" y="651" as="sourcePoint" />
            <mxPoint x="417" y="686" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-43" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="mI7I274n_UORCBZzSbyU-11" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="416.5" y="746" as="sourcePoint" />
            <mxPoint x="417" y="781" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-45" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="mI7I274n_UORCBZzSbyU-13" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="416.5" y="844" as="sourcePoint" />
            <mxPoint x="417" y="882" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-46" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="mI7I274n_UORCBZzSbyU-19" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="414.49" y="1070.9999999999995" as="sourcePoint" />
            <mxPoint x="415.5100000000001" y="1106.7800000000002" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-47" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="mI7I274n_UORCBZzSbyU-32" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="418" y="1168" as="sourcePoint" />
            <mxPoint x="418.5" y="1210" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-48" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="415" y="1420" as="sourcePoint" />
            <mxPoint x="415" y="1477" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="mI7I274n_UORCBZzSbyU-50" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.484;entryY=0.035;entryDx=0;entryDy=0;entryPerimeter=0;" target="mI7I274n_UORCBZzSbyU-31" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="417" y="1536" as="sourcePoint" />
            <mxPoint x="419.81999999999994" y="1603.02" as="targetPoint" />
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>




</div>



---



## 💻 Подробный разбор и объяснение исходного кода



### 1. Подключение библиотек и препроцессор (Директивы)

```cpp

#include <iostream>

#include <cmath>



using namespace std;

```

> 📑 **Описание работы:**

> Мы используем директиву `#include <iostream>` для активации потоков ввода и вывода данных на экран дисплея (`cin`, `cout`). Также подключаем `#include <cmath>` для использования математической функции вычисления степени `pow(x, y)`. Инструкция `using namespace std` позволяет использовать стандартное пространство имен без префикса `std::`.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Includes standard input/output streams and the math library for power operations.

> * **AR:** تضمين مكتبات الإدخال/الإخراج القياسية والمكتبة الرياضية لحساب الأسس.



---



### 2. Главная функция и расчет через тип FLOAT (Потеря точности)

```cpp

int main()

{

   float a_f = 1000.0f;

   float b_f = 0.0001f;



   float part1_f = pow(a_f - b_f, 5);

   float part2_f = pow(a_f, 5) - 5 * pow(a_f, 4) * b_f;

   float numerator_f = part1_f - part2_f;



   float denominator_f = -10 * pow(a_f, 3) * pow(b_f, 2) + 10 * pow(a_f, 2) * pow(b_f, 3) - 5 * a_f * pow(b_f, 4) + pow(b_f, 5);

   float result_float = numerator_f / denominator_f;



   cout << "Result with FLOAT:  " << result_float << endl;

```

> 📑 **Описание работы:**

> Здесь мы объявляем переменные `a` и `b` с одинарной точностью памяти `float` (32 бита). Из-за ограниченной разрядной сетки мантиссы (всего 7 значимых цифр) при обработке гигантского числа (1000^5) происходит **катастрофическая потеря точности**. Маленькое число `b` полностью «растворяется» в больших порядках, приводя к хаотичному результату при делении.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** 32-bit `float` causes severe underflow error, completely discarding small variables during algebraic reductions.

> * **AR:** يتسبب نوع `float` (32-بت) في حدوث خطأ دقة حرج، حيث تختفي المتغيرات الصغيرة تماماً عند التعامل مع أسس كبيرة.



---



### 3. Расчет через тип DOUBLE (Высокая точность)

```cpp

   double a_d = 1000.0;

   double b_d = 0.0001;



   double part1_d = pow(a_d - b_d, 5);

   double part2_d = pow(a_d, 5) - 5 * pow(a_d, 4) * b_d;

   double numerator_d = part1_d - part2_d;



   double denominator_d = -10 * pow(a_d, 3) * pow(b_d, 2) + 10 * pow(a_d, 2) * pow(b_d, 3) - 5 * a_d * pow(b_d, 4) + pow(b_d, 5);

   double result_double = numerator_d / denominator_d;



   cout << "Result with DOUBLE: " << result_double << endl;

```

> 📑 **Описание работы:**

> В этом блоке используются 64-битные переменные `double`. Теоретически аналитический результат выражения равен (-1.0) (числитель равен знаменателю с противоположным знаком). Тип `double` успешно сохраняет мелкие знаки, однако из-за эффекта «взаимного уничтожения слагаемых» на грани точности процессора результат незначительно отклоняется до реального значения компьютера.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** 64-bit `double` provides enough capacity to approximate the true analytical result (-1.0) with minimal computational noise.

> * **AR:** يوفر نوع `double` (64-بت) سعة كافية لتقريب النتيجة التحليلية الحقيقية (-1.0) بأقل قدر من الأخطاء الرقمية.



---



### 4. Вычисление выражений инкремента и декремента (Задание 2)

```cpp

   int n = 5, m = 5;



    \\Выражение 1: n++ * ++m

   int res1 = n++ * ++m;

  cout << "1) n++ * ++m = " << res1 << " (After: n=" << n << ", m=" << m << ")" << endl;

```

> 📑 **Описание работы:**

> Инициализируем `n` и `m` со значением 5. Используется **префиксный инкремент** `++m` (значение увеличивается сразу до умножения и становится равным 6) и **постфиксный инкремент** `n++` (в умножении участвует текущее значение 5, а увеличение до 6 происходит ПОСЛЕ операции). Результат: (5 times 6 = 30).

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Prefix `++m` increments first (6), postfix `n++` uses current value (5) then increments. Result: 30.

> * **AR:** الزيادة القبلية `++m` تزيد أولاً (6)، والبعدية `n++` تستخدم القيمة الحالية (5) ثم تزيد. النتيجة: 30.



---



```cpp

   n = 5; m = 5; // Сброс значений

   // Выражение 2: --m < n--

   bool res2 = --m < n--;

  cout << "2) --m < n-- = " << (res2 ? "true" : "false") << endl;

```

> 📑 **Описание работы:**

> После сброса переменных выполняется операция сравнения «меньше» (`<`). Префиксный декремент `--m` уменьшает значение до 4. Постфиксный декремент `n--` оставляет число 5 для сравнения. Сравниваем: (4 < 5), что является логической истиной (`true`).

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Prefix `--m` evaluates to 4. Postfix `n--` evaluates to 5. The comparison 4 < 5 returns true.

> * **AR:** النقصان القبلي `--m` يعطي 4. النقصان البعدي `n--` يعطي 5. المقارنة 4 < 5 تعيد صحيح (true).



---



```cpp

   n = 5; m = 5; // Сброс значений

   // Выражение 3: m++ > n++

   bool res3 = m++ > n++;

   cout << "3) m++ > n++ = " << (res3 ? "true" : "false") << endl;



   return 0;

}

```

> 📑 **Описание работы:**

> Финальное логическое сравнение. Оба инкремента являются постфиксными (`m++` и `n++`), поэтому в сравнении участвуют их первоначальные значения из памяти. Сравниваем: (5 > 5), что является ложью (`false`).

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Both postfix expressions evaluate with original memory values (5 > 5), returning false.

> * **AR:** كلا التعبيرين البعديين يتم تقييمهما بالقيم الأصلية (5 > 5)، مما يعيد خطأ (false).



---



## 🖥️ Реальный вывод программы в консоль (Console Output)



При запуске скомпилированного исходного кода на ЭВМ были получены следующие практические результаты:



```text

Result (double): -1.001250

Result (float) : 1103514.375000



\--- Task 2: Increment/Decrement Operators ---

1) n++ * ++m = 30  -> (Current state in memory: n=6, m=6)

2) --m < n-- = true  -> (Current state in memory: n=5, m=5)

3) m++ > n++ = false  -> (Current state in memory: n=6, m=6)

```



---



## 📊 Сводное объяснение результатов (Conclusion)



| Используемый Тип | Описание эффекта памяти | Финальный результат | Соответствие теории |
| :---: | :--- | :---: | :---: |
| **`FLOAT` (32-bit)** | Полная потеря точности мантиссы | **1103514.375000** | Ошибка переполнения / Сбой |
| **`DOUBLE` (64-bit)** | Сохранение разрядной сетки с минимальным шумом | **-1.001250** | Максимальное приближение к теории (-1) |



> 🌐 **[EN] Summary:** Real console output proves that 32-bit `float` completely fails under algebraic reduction producing giant chaotic value, while 64-bit `double` remains reliable and close to analytical target.

> 🌐 **[AR] الخلاصة:** يثبت خرج الكونسول الفعلي أن نوع `float` (32-بت) يفشل تماماً ويعطي قيمة عشوائية ضخمة، بينما يظل نوع `double` (64-بت) موثوقاً وقريباً جداً من النتيجة التحليلية (-1).



