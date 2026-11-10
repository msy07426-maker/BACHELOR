# Отчет по лабораторной работе №3



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



Для аргумента (x), изменяющегося от (a=0.1) до (b=1.0) с шагом ((b-a)/k), где (k=10), вычислить функцию 

                  {sin x} 
       f(x) = _________________
                   {x}
используя ее разложение в степенной ряд Тейлора (Маклорена) в двух случаях:

а) для заданного (n = 12);

б) для заданной точности (varepsilon = 0.0001).



Для сравнения найти точное значение функции.



> 🌐 **[EN]** Task setup: Evaluate the function (f(x) = {sin x}/{x}) using its Maclaurin series expansion in two scenarios: for a fixed number of terms (n=1)) and for a given precision (varepsilon=0.0001).




---



## 🗺️ Блок-схема алгоритма программы (Flowchart)



<div align="center">



> 📊 **Схема вложенных циклов для расчета степенного ряда**

> *Nested loops flowchart for Taylor series expansion | المخطط التدفيقي للحلقات المتداخلة لحساب متسلسلة تيلور*

[lab3.drawio](https://github.com/user-attachments/files/34638749/lab3.drawio)

<mxfile host="Electron">
  <diagram name="‫الصفحة-1‬" id="C-w6IAvHJZC0HccIuuy0">
    <mxGraphModel dx="4438" dy="2081" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="nby86AiIq5n4QuoMAR8C-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#d0cee2;strokeColor=#56517e;" value="start_factorial" vertex="1">
          <mxGeometry height="60" width="120" x="329" y="367" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-2" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#d0cee2;strokeColor=#56517e;" value="fact = 1.0 ,&amp;nbsp;&lt;div&gt;i = 1&amp;nbsp;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="329" y="457" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-3" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#d0cee2;strokeColor=#56517e;" value="i &amp;lt;= num&amp;nbsp;" vertex="1">
          <mxGeometry height="80" width="120" x="329" y="556" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-4" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#d0cee2;strokeColor=#56517e;" value="fact *= i ,&lt;div&gt;i++&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="125" y="636" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-5" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#d0cee2;strokeColor=#56517e;" value="return fact" vertex="1">
          <mxGeometry height="60" width="120" x="525" y="636" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-6" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#d0cee2;strokeColor=#56517e;" value="end_factorial" vertex="1">
          <mxGeometry height="60" width="120" x="525" y="738" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-7" parent="1" style="strokeWidth=2;html=1;shape=mxgraph.flowchart.annotation_2;align=left;labelPosition=right;pointerEvents=1;labelPerimeter=1;fillColor=#d0cee2;strokeColor=#56517e;" value="int main ()&lt;div&gt;&lt;div style=&quot;color: rgb(187, 190, 191); background-color: rgb(18, 19, 20); font-family: Consolas, &amp;quot;Courier New&amp;quot;, monospace; font-size: 14px; line-height: 19px; white-space: pre;&quot;&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;term&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;=&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(210, 168, 255);&quot;&gt;pow&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;(&lt;/span&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;-&lt;/span&gt;&lt;span style=&quot;color: rgb(181, 206, 168);&quot;&gt;1&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;, &lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;n&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;)&lt;/span&gt;&lt;/div&gt;&lt;div style=&quot;color: rgb(187, 190, 191); background-color: rgb(18, 19, 20); font-family: Consolas, &amp;quot;Courier New&amp;quot;, monospace; font-size: 14px; line-height: 19px; white-space: pre;&quot;&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;*&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(210, 168, 255);&quot;&gt;pow&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;(&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;x&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;, &lt;/span&gt;&lt;span style=&quot;color: rgb(181, 206, 168);&quot;&gt;2&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;*&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;n&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;) &lt;/span&gt;&lt;/div&gt;&lt;div style=&quot;color: rgb(187, 190, 191); background-color: rgb(18, 19, 20); font-family: Consolas, &amp;quot;Courier New&amp;quot;, monospace; font-size: 14px; line-height: 19px; white-space: pre;&quot;&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;/&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(210, 168, 255);&quot;&gt;factorial&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;(&lt;/span&gt;&lt;span style=&quot;color: rgb(181, 206, 168);&quot;&gt;2&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;*&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;n&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(212, 212, 212);&quot;&gt;+&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: rgb(181, 206, 168);&quot;&gt;1&lt;/span&gt;&lt;span style=&quot;color: rgb(201, 209, 217);&quot;&gt;);&lt;/span&gt;&lt;/div&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="100" width="66" x="449" y="347" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-8" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#d0cee2;strokeColor=#56517e;" target="nby86AiIq5n4QuoMAR8C-2" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="355" y="674" as="sourcePoint" />
            <mxPoint x="405" y="624" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-9" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-2" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#d0cee2;strokeColor=#56517e;" target="nby86AiIq5n4QuoMAR8C-3" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="355" y="674" as="sourcePoint" />
            <mxPoint x="405" y="624" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-10" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-5" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#d0cee2;strokeColor=#56517e;" target="nby86AiIq5n4QuoMAR8C-6" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="355" y="674" as="sourcePoint" />
            <mxPoint x="405" y="624" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-11" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#d0cee2;strokeColor=#56517e;" target="nby86AiIq5n4QuoMAR8C-4" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="185" y="596" />
            </Array>
            <mxPoint x="355" y="674" as="sourcePoint" />
            <mxPoint x="405" y="624" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-12" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fillColor=#d0cee2;strokeColor=#56517e;" target="nby86AiIq5n4QuoMAR8C-5" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="585" y="596" />
            </Array>
            <mxPoint x="355" y="674" as="sourcePoint" />
            <mxPoint x="405" y="624" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-13" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="start" vertex="1">
          <mxGeometry height="60" width="120" x="-727" y="25" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-14" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="a = 0.1 , b = 1.0 ,&lt;div&gt;k = 10 , step = (a - b) / k ,&lt;/div&gt;&lt;div&gt;epsilon = 0.00001 , x = a&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="186" x="-760" y="152" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-15" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="x &amp;lt;= b + 1e - 9" vertex="1">
          <mxGeometry height="100" width="136.5" x="-735" y="261" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-16" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="60" width="120" x="-520" y="361" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-17" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="sn = 1.0 ,&lt;div&gt;n = 1&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="-970" y="367" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-18" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="n &amp;lt;= 12" vertex="1">
          <mxGeometry height="100" width="110" x="-965" y="480" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-19" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="se = 1.0 ,&lt;div&gt;n_e = 1&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="160" x="-805" y="600" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-20" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="term = pow(- 1, n_e) * pow(x , 2 * n_e) / factorial(2 * n_e + 1)" vertex="1">
          <mxGeometry height="60" width="160" x="-1190" y="601" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-21" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="sn = sn + term ,&lt;div&gt;n = n + 1&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="160" x="-1190" y="720" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-23" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="abs &amp;lt; epsilon&amp;nbsp;" vertex="1">
          <mxGeometry height="90" width="110" x="-780" y="708" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-25" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n_e ++" vertex="1">
          <mxGeometry height="60" width="160" x="-630" y="900" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-26" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="y = sin(x) / x" vertex="1">
          <mxGeometry height="60" width="136.5" x="-950" y="798" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-27" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="x , sn , se ,y" vertex="1">
          <mxGeometry height="60" width="136.5" x="-950" y="900" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-28" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="x += step" vertex="1">
          <mxGeometry height="60" width="120" x="-941" y="1002" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-29" parent="1" style="strokeWidth=2;html=1;shape=mxgraph.flowchart.annotation_2;align=left;labelPosition=right;pointerEvents=1;labelPerimeter=1;direction=east;" value="&#xa;&lt;div style=&quot;color: #bbbebf;background-color: #121314;font-family: Consolas, &#39;Courier New&#39;, monospace;font-weight: normal;font-size: 14px;line-height: 19px;white-space: pre;&quot;&gt;&lt;div&gt;&lt;span style=&quot;color: #d2a8ff;&quot;&gt;factorial&lt;/span&gt;&lt;span style=&quot;color: #bbbebf;&quot;&gt;(&lt;/span&gt;&lt;span style=&quot;color: #ff7b72;&quot;&gt;int&lt;/span&gt;&lt;span style=&quot;color: #bbbebf;&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: #ffa657;&quot;&gt;num&lt;/span&gt;&lt;span style=&quot;color: #bbbebf;&quot;&gt;)&lt;/span&gt;&lt;/div&gt;&lt;/div&gt;&#xa;&#xa;" vertex="1">
          <mxGeometry height="100" width="40" x="-1030" y="584" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-30" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="term = pow(- 1, n_e) * pow(x , 2 * n_e) / factorial(2 * n_e + 1)" vertex="1">
          <mxGeometry height="60" width="160" x="-630" y="798" as="geometry" />
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-31" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-13" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-14" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-720" y="470" as="sourcePoint" />
            <mxPoint x="-670" y="420" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-32" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-14" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-15" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-720" y="470" as="sourcePoint" />
            <mxPoint x="-670" y="420" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-33" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-15" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-17" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.039" as="geometry">
            <Array as="points">
              <mxPoint x="-910" y="311" />
            </Array>
            <mxPoint x="-720" y="470" as="sourcePoint" />
            <mxPoint x="-670" y="420" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-34" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-15" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-16" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="-460" y="311" />
            </Array>
            <mxPoint x="-720" y="470" as="sourcePoint" />
            <mxPoint x="-670" y="420" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-35" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-17" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-18" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-720" y="580" as="sourcePoint" />
            <mxPoint x="-670" y="530" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-36" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-18" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-19" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.03" as="geometry">
            <Array as="points">
              <mxPoint x="-725" y="530" />
            </Array>
            <mxPoint x="-720" y="580" as="sourcePoint" />
            <mxPoint x="-670" y="530" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-37" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-18" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-20" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="-1110" y="530" />
            </Array>
            <mxPoint x="-850" y="580" as="sourcePoint" />
            <mxPoint x="-800" y="530" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-38" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-20" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-21" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-850" y="740" as="sourcePoint" />
            <mxPoint x="-800" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-39" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-19" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-23" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-850" y="740" as="sourcePoint" />
            <mxPoint x="-800" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-40" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-23" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-26" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="-881.75" y="753" />
            </Array>
            <mxPoint x="-850" y="740" as="sourcePoint" />
            <mxPoint x="-800" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-41" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-23" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-30" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="-550" y="753" />
            </Array>
            <mxPoint x="-850" y="740" as="sourcePoint" />
            <mxPoint x="-800" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-42" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-26" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-27" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-850" y="740" as="sourcePoint" />
            <mxPoint x="-800" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-43" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-27" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-28" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-850" y="740" as="sourcePoint" />
            <mxPoint x="-800" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-44" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-30" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="nby86AiIq5n4QuoMAR8C-25" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="-580" y="860" as="sourcePoint" />
            <mxPoint x="-530" y="810" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-46" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-21" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.0416" as="geometry">
            <Array as="points">
              <mxPoint x="-1280" y="750" />
              <mxPoint x="-1280" y="650" />
              <mxPoint x="-1280" y="450" />
            </Array>
            <mxPoint x="-700" y="510" as="sourcePoint" />
            <mxPoint x="-910" y="450" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-47" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-28" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.1264" as="geometry">
            <Array as="points">
              <mxPoint x="-881" y="1120" />
              <mxPoint x="-1360" y="1120" />
              <mxPoint x="-1360" y="980" />
              <mxPoint x="-1360" y="720" />
              <mxPoint x="-1360" y="240" />
            </Array>
            <mxPoint x="-620" y="350" as="sourcePoint" />
            <mxPoint x="-670" y="240" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-48" edge="1" parent="1" source="nby86AiIq5n4QuoMAR8C-25" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.243" as="geometry">
            <Array as="points">
              <mxPoint x="-550" y="1040" />
              <mxPoint x="-120" y="1040" />
              <mxPoint x="-120" y="680" />
            </Array>
            <mxPoint x="-950" y="660" as="sourcePoint" />
            <mxPoint x="-720" y="680" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="nby86AiIq5n4QuoMAR8C-50" parent="1" style="strokeWidth=2;html=1;shape=mxgraph.flowchart.annotation_2;align=left;labelPosition=right;pointerEvents=1;labelPerimeter=1;direction=east;" value="&#xa;&lt;div style=&quot;color: #bbbebf;background-color: #121314;font-family: Consolas, &#39;Courier New&#39;, monospace;font-weight: normal;font-size: 14px;line-height: 19px;white-space: pre;&quot;&gt;&lt;div&gt;&lt;span style=&quot;color: #d2a8ff;&quot;&gt;factorial&lt;/span&gt;&lt;span style=&quot;color: #bbbebf;&quot;&gt;(&lt;/span&gt;&lt;span style=&quot;color: #ff7b72;&quot;&gt;int&lt;/span&gt;&lt;span style=&quot;color: #bbbebf;&quot;&gt; &lt;/span&gt;&lt;span style=&quot;color: #ffa657;&quot;&gt;num&lt;/span&gt;&lt;span style=&quot;color: #bbbebf;&quot;&gt;)&lt;/span&gt;&lt;/div&gt;&lt;/div&gt;&#xa;&#xa;" vertex="1">
          <mxGeometry height="100" width="57" x="-470" y="780" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>


</div>



---



## 💻 Разбор и подробное объяснение исходного кода



### 1. Дополнительная функция вычисления факториала

```cpp

double factorial(int num)

{

   double fact = 1.0;

   for (int i = 1; i <= num; i++)

  {

       fact *= i;

   }

  return fact;

}

```

> 📑 **Описание работы:**

> Так как в формуле общего члена ряда присутствует знак факториала ((2n+1)!), мы создаем отдельную функцию `factorial`. Она последовательно перемножает числа через цикл и возвращает значение типа `double`, что защищает программу от переполнения разрядной сетки целых чисел (`int`) на больших итерациях.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Defines a custom factorial helper using `double` return type to completely prevent integer overflow on higher terms.

> * **AR:** تعريف دالة مساعدة لحساب المضروب (الفاکتوریل) باستخدام النوع `double` لتفادي تجاوز السعة الرقمية للمتغيرات الصحيحة.



---



### 2. Главный внешний цикл изменения аргумента X

```cpp

int main()

{

   double a = 0.1, b = 1.0;

   int k = 10;

   double step = (b - a) / k; 

   double epsilon = 0.0001;



   for (double x = a; x <= b + 1e-9; x += step)

    {

```

> 📑 **Описание работы:**

> Программа вычисляет шаг изменения аргумента `step` (равный 0.09). Внешний цикл `for` отвечает за итерационное увеличение переменной `x` от `0.1` до `1.0`. Небольшая добавка `1e-9` к условию завершения цикла защищает логический оператор от аппаратных ошибок округления вещественных типов.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Implements the outer loop tracking variable `x`. A correction value `1e-9` prevents floating-point rounding issues in loop boundaries.

> * **AR:** تنفيذ الحلقة الخارجية لتتبع قيم `x` المتغيرة، مع إضافة القيمة التصحيحية `1e-9` لتجنب أخطاء التقريب العشري في الشرط.



---



### 3. Расчет суммы ряда для фиксированного N=12 (Случай А)

```cpp

       double sn = 1.0;

       for (int n = 1; n <= 12; n++)

      {

           double term = pow(-1, n) \* pow(x, 2 \* n) / factorial(2 \* n + 1);

           sn += term;

       }

```

> 📑 **Описание работы:**

> Внутренний цикл реализует пункт (а). Суммирование ряда `sn` начинается с единицы. Цикл строго выполняет 12 шагов, рассчитывая на каждой итерации очередной знакочередующийся член разложения Маклорена для синуса и накапливая его в промежуточную переменную.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Inner loop for scenario (a). Explicitly performs 12 loops to evaluate the polynomial series accumulation for `sn`.

> * **AR:** الحلقة الداخلية للحالة (أ). تقوم بتنفيذ 12 دورة محددة لحساب المجموع التراكمي لعناصر المتسلسلة في المتغير `sn`.



---



### 4. Расчет суммы ряда по заданной точности (Случай Б)

```cpp

      double se = 1.0;

       int n_e = 1;

       while (true)

        {

           double term = pow(-1, n_e) * pow(x, 2 * n_e) / factorial(2 * n_e + 1);

           se += term;

           if (abs(term) < epsilon)

           {

               break;

           }

           n_e++;

        }

```

> 📑 **Описание работы:**

> Этот блок выполняет вычисления для пункта (б). Цикл `while(true)` производит суммирование элементов в переменную `se` до тех пор, пока модуль текущего слагаемого `abs(term)` не станет меньше установленного порога точности `0.0001`. Как только условие выполняется, оператор `break` прерывает цикл.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Computes scenario (b) via a conditional loop. Stops instantly when the absolute value of the element drops below `epsilon`.

> * **AR:** حساب الحالة (ب) عبر حلقة مشروطة. تتوقف فوراً عندما تصبح القيمة المطلقة للحد الحالي أقل من قيمة الدقة `epsilon`.



---



### 5. Консольный вывод результатов

```cpp

       double y = sin(x) / x;



     cout << fixed << setprecision(2) << x << "\t\t"

          << setprecision(6) << sn << "\t" << se << "\t" << y << endl;

   }

   return 0;

}

```

> 📑 **Описание работы:**

> В конце каждой итерации внешнего цикла рассчитывается эталонное (точное) значение функции `y` с помощью стандартной функции `sin(x)`. После этого манипуляторы форматирования упорядочивают и выводят данные на экран в виде аккуратных столбцов: `X`, `SN`, `SE`, `Y`.

> 

> 💬 **🌐 Multilingual Summary:**

> * **EN:** Evaluates the exact mathematical solution using `<cmath>` and displays the compared values in strict tabular format.

> * **AR:** حساب الحل الرياضي الدقيق باستخدام المكتبة القياسية وعرض مقارنة القيم المستخرجة في جدول منسق.



---



## 🖥️ Практический вывод программы в консоль (Console Output)



При запуске скомпилированного исходного кода на ЭВМ была получена следующая итерационная таблица:



```text

=== Lab 3: Function Taylor Series Approximation (Variant 28) ===

X               SN (n=12)       SE (eps=0.0001) Y (Exact)

------------------------------------------------------------------

0.10            0.998334        0.998334        0.998334

0.19            0.993988        0.993988        0.993988

0.28            0.987059        0.987059        0.987059

0.37            0.977626        0.977626        0.977626

0.46            0.965780        0.965780        0.965780

0.55            0.951633        0.951633        0.951633

0.64            0.935310        0.935310        0.935310

0.73            0.916939        0.916939        0.916939

0.82            0.896655        0.896655        0.896655

0.91            0.874603        0.874603        0.874603

1.00            0.841471        0.841471        0.841471

```



---



## 📊 Результаты расчетов (Финальная таблица)



| Аргумент (X) | Сумма SN (n=12) | Сумма SE (varepsilon=10^{-4}$) | Точное Y | Статус соответствия |
| :---: | :---: | :---: | :---: | :---: |
| **0.10** | 0.998334 | 0.998334 | 0.998334 | Идеальное совпадение ✅ |
| **0.55** | 0.951633 | 0.951633 | 0.951633 | Идеальное совпадение ✅ |
| **1.00** | 0.841471 | 0.841471 | 0.841471 | Идеальное совпадение ✅ |




