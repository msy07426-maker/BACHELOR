# Отчет по лабораторной работе №5

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

Написать функцию, которая меняет местами **главную** и **побочную** диагонали квадратной матрицы. С её помощью преобразовать заданную матрицу.

> 🌐 **[EN]** Task setup: Write a function that swaps the **main** and **secondary (anti)** diagonals of a square matrix, and use it to transform a given matrix.
> 🌐 **[AR]** صياغة المسألة: كتابة دالة تقوم بتبديل عناصر **القطر الرئيسي** و**القطر الفرعي (الثانوي)** لمصفوفة مربعة، واستخدامها لتحويل مصفوفة معطاة.

---

## 🗺️ Блок-схема алгоритма программы (Flowchart)

<div align="center"> 

<img width="1552" height="662" alt="lab5" src="https://github.com/user-attachments/assets/8a212310-b51a-462c-9142-026c3d17f6ad" />
<mxfile host="Electron">
  <diagram name="‫الصفحة-1‬" id="v2UuxqkNaksxE9z23WmS">
    <mxGraphModel dx="2770" dy="1453" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="2cBpevwIDqt-_ubgaBZW-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#0050ef;fontColor=#ffffff;strokeColor=#001DBC;" value="start-swapdiagonals" vertex="1">
          <mxGeometry height="60" width="100" x="-543" y="20" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-2" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#0050ef;fontColor=#ffffff;strokeColor=#001DBC;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="-553" y="140" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-3" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#0050ef;fontColor=#ffffff;strokeColor=#001DBC;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="-533" y="240" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-4" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#0050ef;fontColor=#ffffff;strokeColor=#001DBC;" value="end-swapdiagonals" vertex="1">
          <mxGeometry height="60" width="120" x="-400" y="320" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-5" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#0050ef;fontColor=#ffffff;strokeColor=#001DBC;" value="swap (matrix[i][i] , matrix[i][n-1-i]" vertex="1">
          <mxGeometry height="60" width="120" x="-750" y="320" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-6" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#0050ef;fontColor=#ffffff;strokeColor=#001DBC;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="-750" y="410" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-7" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="start-printmatrix" vertex="1">
          <mxGeometry height="70" width="100" x="514" y="10" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-8" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="504" y="140" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-9" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="j = 0" vertex="1">
          <mxGeometry height="60" width="120" x="320" y="330" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-10" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="90" x="519" y="250" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-11" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="end-printmatrix" vertex="1">
          <mxGeometry height="60" width="110" x="690" y="330" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-12" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="j &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="340" y="430" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-13" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="matrix[i][i]" vertex="1">
          <mxGeometry height="60" width="120" x="170" y="510" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-14" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="444" y="510" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-15" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#6a00ff;fontColor=#ffffff;strokeColor=#3700CC;" value="j ++" vertex="1">
          <mxGeometry height="60" width="110" x="175" y="610" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-16" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="start" vertex="1">
          <mxGeometry height="70" width="110" x="-75" y="20" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-17" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="matrix = {1,2,3,4} ,{5,6,7,8} , {9,10,11,12} ,{13,14,15,16}" vertex="1">
          <mxGeometry height="60" width="120" x="-80" y="140" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-18" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="printmatrix&lt;div&gt;(matrix&lt;span style=&quot;background-color: transparent; color: light-dark(#000000, var(--ge-light-color, #ffffff));&quot;&gt;[n][n])&lt;/span&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="-80" y="250" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-19" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="swapdiagonals&lt;div&gt;(matrix[n][n])&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="-80" y="360" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-20" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="printmatrix&lt;div&gt;(matrix&lt;span style=&quot;background-color: transparent;&quot;&gt;[n][n])&lt;/span&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="-80" y="475" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-21" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="60" width="110" x="-75" y="590" as="geometry" />
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-22" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;fillColor=#0050ef;strokeColor=#001DBC;" target="2cBpevwIDqt-_ubgaBZW-2" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-470" y="330" as="sourcePoint" />
            <mxPoint x="-420" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-23" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-2" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;fillColor=#0050ef;strokeColor=#001DBC;" target="2cBpevwIDqt-_ubgaBZW-3" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-470" y="330" as="sourcePoint" />
            <mxPoint x="-420" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-24" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#0050ef;strokeColor=#001DBC;" target="2cBpevwIDqt-_ubgaBZW-5" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="-690" y="280" />
            </Array>
            <mxPoint x="-470" y="330" as="sourcePoint" />
            <mxPoint x="-420" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-27" connectable="0" parent="2cBpevwIDqt-_ubgaBZW-24" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.1371" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-25" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#0050ef;strokeColor=#001DBC;" target="2cBpevwIDqt-_ubgaBZW-4" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="-340" y="280" />
            </Array>
            <mxPoint x="-470" y="330" as="sourcePoint" />
            <mxPoint x="-420" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-28" connectable="0" parent="2cBpevwIDqt-_ubgaBZW-25" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="no" vertex="1">
          <mxGeometry relative="1" x="-0.1242" y="2" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-26" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-5" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#0050ef;strokeColor=#001DBC;" target="2cBpevwIDqt-_ubgaBZW-6" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-470" y="330" as="sourcePoint" />
            <mxPoint x="-420" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-29" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-7" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-8" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-30" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-8" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-10" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-31" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-10" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-9" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.162" as="geometry">
            <Array as="points">
              <mxPoint x="380" y="290" />
            </Array>
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-32" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-10" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-11" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.0227" as="geometry">
            <Array as="points">
              <mxPoint x="745" y="290" />
            </Array>
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-33" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-9" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-12" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-34" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-12" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-14" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="504" y="470" />
            </Array>
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-35" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-12" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-13" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="230" y="470" />
            </Array>
            <mxPoint x="350" y="380" as="sourcePoint" />
            <mxPoint x="400" y="330" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-36" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-13" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#6a00ff;strokeColor=#3700CC;" target="2cBpevwIDqt-_ubgaBZW-15" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="350" y="610" as="sourcePoint" />
            <mxPoint x="400" y="560" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-37" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-16" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="2cBpevwIDqt-_ubgaBZW-17" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-115" y="370" as="sourcePoint" />
            <mxPoint x="-65" y="320" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-38" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-17" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="2cBpevwIDqt-_ubgaBZW-18" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-115" y="370" as="sourcePoint" />
            <mxPoint x="-65" y="320" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-39" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-18" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="2cBpevwIDqt-_ubgaBZW-19" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-115" y="370" as="sourcePoint" />
            <mxPoint x="-65" y="320" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-40" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-19" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="2cBpevwIDqt-_ubgaBZW-20" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-115" y="370" as="sourcePoint" />
            <mxPoint x="-65" y="320" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="2cBpevwIDqt-_ubgaBZW-41" edge="1" parent="1" source="2cBpevwIDqt-_ubgaBZW-20" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="2cBpevwIDqt-_ubgaBZW-21" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-115" y="370" as="sourcePoint" />
            <mxPoint x="-65" y="320" as="targetPoint" />
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>

</div>

---

## 💻 Разбор и подробное объяснение исходного кода

### 1. Подключение библиотек и определение размерности матрицы

```cpp
#include <iostream>
#include <algorithm> 

using namespace std;

const int N = 4;
```

> 📑 **Описание работы:**
> Мы подключаем `#include <iostream>` для ввода и вывода данных в консоль. Библиотека `#include <algorithm>` предоставляет стандартную функцию `swap()`, позволяющую обменивать значения двух переменных в одну строку. Константа `const int N = 4` фиксирует размерность квадратной матрицы 4 × 4.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Includes `<iostream>` for console I/O and `<algorithm>` for `std::swap()`, defining a constant matrix dimension `N = 4`.
> * **AR:** تضمين مكتبات الإدخال والإخراج ومكتبة `<algorithm>` لاستخدام دالة التبديل الجاهزة `swap()`، مع تعريف ثابت لحجم المصفوفة المربعة `N = 4`.

---

### 2. Функция обмена главной и побочной диагоналей (`swapDiagonals`)

```cpp
void swapDiagonals(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        swap(matrix[i][i], matrix[i][N - 1 - i]);
    }
}
```

> 📑 **Описание работы:**
> В каждой строке `i` (от `0` до `N - 1`) элемент **главной диагонали** имеет индексы `[i][i]`, а элемент **побочной диагонали** расположен по индексам `[i][N - 1 - i]`. Функция `swap()` построчно меняет эти два элемента местами за один проход цикла сложности O(N).
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Iterates through each row `i` and swaps the main diagonal element `matrix[i][i]` with the secondary diagonal element `matrix[i][N - 1 - i]`.
> * **AR:** المرور على كل صف `i` وتبديل عنصر القطر الرئيسي `matrix[i][i]` مع عنصر القطر الفرعي `matrix[i][N - 1 - i]` في نفس الصف.

---

### 3. Вспомогательная функция форматированного вывода матрицы (`printMatrix`)

```cpp
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
```

> 📑 **Описание работы:**
> Вложенный цикл проходит по всем строкам `i` и столбцам `j` двумерного массива. Символ табуляции `"\t"` выравнивает числа по столбцам, обеспечивая наглядное табличное отображение матрицы в консоли.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Uses nested loops and tab characters (`\t`) to print the 2D matrix in a clean, aligned grid format.
> * **AR:** استخدام حلقات متداخلة وعلامة الجدولة `\t` لطباعة المصفوفة ثنائية الأبعاد بشكل منسق ومنظم على الشاشة.

---

### 4. Главная функция `main()`: инициализация и вызов преобразования

```cpp
int main() {
    int myMatrix[N][N] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(myMatrix);
    cout << "-----------------------------------" << endl;

    swapDiagonals(myMatrix);

    cout << "Matrix After Swapping Diagonals:" << endl;
    printMatrix(myMatrix);

    return 0;
}
```

> 📑 **Описание работы:**
> В функции `main()` задаётся тестовая квадратная матрица 4 × 4, заполненная числами от 1 до 16. Программа выводит исходную матрицу, вызывает пользовательскую функцию `swapDiagonals(myMatrix)` для выполнения преобразования, а затем печатает обновлённую матрицу.
> 
> 💬 **🌐 Multilingual Summary:**
> * **EN:** Initializes a 4 × 4 test matrix, prints its initial state, calls `swapDiagonals()`, and displays the transformed matrix.
> * **AR:** تعريف مصفوفة مربعة تجريبية بحجم 4 × 4، طباعتها قبل التعديل، استدعاء دالة `swapDiagonals()` لتبديل الأقطار، ثم طباعة المصفوفة الناتجة.

---

## 🖥️ Практический вывод программы в консоль (Console Output)

При запуске исходного кода на ЭВМ был получен следующий результат:

```text
Original Matrix:
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
-----------------------------------
Matrix After Swapping Diagonals:
4       2       3       1
5       7       6       8
9       11      10      12
16      14      15      13
```

---

## 📊 Заключение и результаты вычислений (Conclusion)

| Строка ($i$) | Элемент главной диагонали `[i][i]` | Элемент побочной диагонали `[i][N-1-i]` | Результат обмена |
| :---: | :---: | :---: | :---: |
| **0** | `1` | `4` | `4 ↔ 1` ✅ |
| **1** | `6` | `7` | `7 ↔ 6` ✅ |
| **2** | `11` | `10` | `10 ↔ 11` ✅ |
| **3** | `16` | `13` | `13 ↔ 16` ✅ |

> 🌐 **[EN] Summary:** The custom function `swapDiagonals` successfully swaps the main and secondary diagonals of the $4 \times 4$ square matrix in $O(N)$ time without requiring extra memory, preserving all non-diagonal elements intact.
> 🌐 **[AR] الخلاصة:** نجحت الدالة `swapDiagonals` في تبديل عناصر القطر الرئيسي والقطر الفرعي للمصفوفة المربعة $4 \times 4$ بكفاءة عالية دون الحاجة لذاكرة إضافية، مع الحفاظ على بقية عناصر المصفوفة كما هي.
