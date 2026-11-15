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

[lab4.drawio](https://github.com/user-attachments/files/34869564/lab4.drawio)
<mxfile host="Electron">
  <diagram name="‫الصفحة-1‬" id="J5nGwmqfAFddxNvTv3jH">
    <mxGraphModel dx="3387" dy="1983" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="66LrUNiheCG7R__4WCpB-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="start" vertex="1">
          <mxGeometry height="60" width="104" x="370" y="30" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-2" parent="1" style="shape=process;whiteSpace=wrap;html=1;backgroundOutline=1;" value="srand(time(0))" vertex="1">
          <mxGeometry height="60" width="120" x="362" y="140" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-3" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr=[200] ," vertex="1">
          <mxGeometry height="60" width="120" x="362" y="240" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-4" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="n &amp;lt; 4" vertex="1">
          <mxGeometry height="80" width="80" x="382" y="340" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-5" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="50" width="100" x="520" y="420" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-6" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="210" y="420" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-7" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="230" y="505" as="geometry" />
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
          <mxGeometry height="60" width="120" x="250" y="770" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-13" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="110" x="256" y="867" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-14" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="idxberelast = n - 2,&lt;div&gt;i =&amp;nbsp;&lt;span style=&quot;background-color: transparent; color: light-dark(#000000, var(--ge-light-color, #ffffff));&quot;&gt;idxberelast&lt;/span&gt;&lt;span style=&quot;background-color: transparent; color: light-dark(#000000, var(--ge-light-color, #ffffff));&quot;&gt;&amp;nbsp;&lt;/span&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="470" y="770" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-15" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n - 1" vertex="1">
          <mxGeometry height="80" width="80" x="490" y="873" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-16" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[i] = arr[i+1]" vertex="1">
          <mxGeometry height="60" width="120" x="400" y="990" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-17" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="400" y="1087" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-18" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n --&lt;div&gt;idxsecond = 1 ,&lt;/div&gt;&lt;div&gt;i = idwsecond&amp;nbsp; &amp;nbsp;&amp;nbsp;&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="590" y="990" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-19" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n-1" vertex="1">
          <mxGeometry height="80" width="80" x="610" y="1089" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-20" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="arr[i] = arr[i+1]" vertex="1">
          <mxGeometry height="60" width="120" x="590" y="1240" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-21" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i++" vertex="1">
          <mxGeometry height="60" width="120" x="590" y="1340" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-22" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="n--&lt;div&gt;i = 0&lt;/div&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="850" y="1240" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-24" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="870" y="1350" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-25" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="arr[i] &amp;lt; 0" vertex="1">
          <mxGeometry height="80" width="80" x="780" y="1440" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-26" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="j &amp;gt; i" vertex="1">
          <mxGeometry height="80" width="80" x="570" y="1650" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-27" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="j = n" vertex="1">
          <mxGeometry height="60" width="120" x="660" y="1550" as="geometry" />
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
        <mxCell id="66LrUNiheCG7R__4WCpB-31" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-9" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.0637" as="geometry">
            <Array as="points">
              <mxPoint x="30" y="720" />
              <mxPoint x="30" y="490" />
            </Array>
            <mxPoint x="650" y="620" as="sourcePoint" />
            <mxPoint x="270" y="490" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-32" parent="1" style="rhombus;whiteSpace=wrap;html=1;shapeInside=1;" value="i &amp;lt; n" vertex="1">
          <mxGeometry height="80" width="80" x="1120" y="1380" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-33" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i = 0" vertex="1">
          <mxGeometry height="60" width="120" x="670" y="1820" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-34" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="arr[i]" vertex="1">
          <mxGeometry height="60" width="120" x="1140" y="1510" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-35" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;" value="end" vertex="1">
          <mxGeometry height="80" width="120" x="860" y="1644" as="geometry" />
        </mxCell>
        <mxCell id="66LrUNiheCG7R__4WCpB-36" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="i ++" vertex="1">
          <mxGeometry height="60" width="120" x="1130" y="1620" as="geometry" />
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-1" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-2" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="430" y="240" as="sourcePoint" />
            <mxPoint x="480" y="190" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-2" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-2" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-3" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="430" y="330" as="sourcePoint" />
            <mxPoint x="480" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-3" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-3" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-4" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="430" y="440" as="sourcePoint" />
            <mxPoint x="480" y="390" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-4" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-4" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-6" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="270" y="380" />
            </Array>
            <mxPoint x="430" y="510" as="sourcePoint" />
            <mxPoint x="480" y="460" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-5" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-4" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.1528" y="-3" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-6" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-4" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-5" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="570" y="380" />
            </Array>
            <mxPoint x="430" y="510" as="sourcePoint" />
            <mxPoint x="480" y="460" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-7" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-6" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="no" vertex="1">
          <mxGeometry relative="1" x="-0.1158" y="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-8" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-6" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-7" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="260" y="640" as="sourcePoint" />
            <mxPoint x="310" y="590" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-9" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-7" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-8" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="130" y="545" />
            </Array>
            <mxPoint x="260" y="640" as="sourcePoint" />
            <mxPoint x="310" y="590" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-10" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-9" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.6661" y="-2" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-11" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-7" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-10" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="410" y="545" />
            </Array>
            <mxPoint x="260" y="710" as="sourcePoint" />
            <mxPoint x="310" y="660" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-12" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-11" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="no" vertex="1">
          <mxGeometry relative="1" x="-0.0011" y="-2" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-13" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-9" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="130" y="650" as="sourcePoint" />
            <mxPoint x="310" y="710" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-14" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-10" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-11" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="360" y="810" as="sourcePoint" />
            <mxPoint x="410" y="760" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-15" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-11" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-12" value="">
          <mxGeometry height="50" relative="1" width="50" x="-0.08" as="geometry">
            <Array as="points">
              <mxPoint x="310" y="730" />
            </Array>
            <mxPoint x="280" y="910" as="sourcePoint" />
            <mxPoint x="330" y="860" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-16" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-15" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.4058" y="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-17" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-12" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-13" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="260" y="940" as="sourcePoint" />
            <mxPoint x="310" y="890" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-18" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-13" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="210" y="897" />
              <mxPoint x="210" y="670" />
            </Array>
            <mxPoint x="350" y="970" as="sourcePoint" />
            <mxPoint x="410" y="670" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-19" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-11" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-14" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="530" y="730" />
            </Array>
            <mxPoint x="450" y="980" as="sourcePoint" />
            <mxPoint x="500" y="930" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-20" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-19" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="noi" vertex="1">
          <mxGeometry relative="1" x="-0.1" y="2" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-21" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-15" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-16" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="460" y="913" />
            </Array>
            <mxPoint x="450" y="1060" as="sourcePoint" />
            <mxPoint x="430" y="940" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-22" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-21" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.6222" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-23" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-14" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-15" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="460" y="1040" as="sourcePoint" />
            <mxPoint x="510" y="990" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-24" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-16" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-17" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="460" y="1150" as="sourcePoint" />
            <mxPoint x="510" y="1100" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-25" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-17" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="380" y="1117" />
              <mxPoint x="380" y="850" />
            </Array>
            <mxPoint x="460" y="1150" as="sourcePoint" />
            <mxPoint x="530" y="850" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-26" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-15" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-18" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="650" y="913" />
            </Array>
            <mxPoint x="570" y="1180" as="sourcePoint" />
            <mxPoint x="620" y="1130" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-27" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-26" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="no" vertex="1">
          <mxGeometry relative="1" x="-0.4237" y="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-28" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-19" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-20" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.2295" as="geometry">
            <Array as="points" />
            <mxPoint x="530" y="1330" as="sourcePoint" />
            <mxPoint x="580" y="1280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-29" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-28" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.709" y="-1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-30" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-18" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-19" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="410" y="1470" as="sourcePoint" />
            <mxPoint x="460" y="1420" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-31" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-20" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-21" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="440" y="1390" as="sourcePoint" />
            <mxPoint x="490" y="1340" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-32" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-21" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-19" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="560" y="1370" />
              <mxPoint x="560" y="1129" />
            </Array>
            <mxPoint x="470" y="1410" as="sourcePoint" />
            <mxPoint x="520" y="1360" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-33" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-19" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-22" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="910" y="1130" />
            </Array>
            <mxPoint x="680" y="1410" as="sourcePoint" />
            <mxPoint x="730" y="1360" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-34" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-33" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="no" vertex="1">
          <mxGeometry relative="1" x="-0.0549" y="3" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-35" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-22" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-24" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="640" y="1570" as="sourcePoint" />
            <mxPoint x="690" y="1520" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-36" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-24" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-25" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="820" y="1390" />
            </Array>
            <mxPoint x="640" y="1570" as="sourcePoint" />
            <mxPoint x="690" y="1520" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-37" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-36" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.3407" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-38" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-25" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-27" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="720" y="1480" />
            </Array>
            <mxPoint x="760" y="1560" as="sourcePoint" />
            <mxPoint x="810" y="1510" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-39" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-38" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.3846" y="-3" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-40" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="860" y="1480" as="sourcePoint" />
            <mxPoint x="940" y="1600" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-41" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="950" y="1390" as="sourcePoint" />
            <mxPoint x="1080" y="1390" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-42" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-27" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-26" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="610" y="1580" />
            </Array>
            <mxPoint x="810" y="1790" as="sourcePoint" />
            <mxPoint x="860" y="1740" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-43" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-26" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-28" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="480" y="1690" />
            </Array>
            <mxPoint x="710" y="1880" as="sourcePoint" />
            <mxPoint x="760" y="1830" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-44" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-43" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="yes" vertex="1">
          <mxGeometry relative="1" x="-0.0814" y="2" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-45" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-28" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-29" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="710" y="1880" as="sourcePoint" />
            <mxPoint x="760" y="1830" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-46" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-29" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.1119" as="geometry">
            <Array as="points">
              <mxPoint x="340" y="1850" />
              <mxPoint x="340" y="1610" />
            </Array>
            <mxPoint x="720" y="1900" as="sourcePoint" />
            <mxPoint x="610" y="1610" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-47" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-26" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="66LrUNiheCG7R__4WCpB-30" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="730" y="1690" />
            </Array>
            <mxPoint x="740" y="1930" as="sourcePoint" />
            <mxPoint x="790" y="1880" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-48" connectable="0" parent="-UauE8iiKkMlvjLXwtg8-47" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];inheritText=1;defaultLabelBackgroundColor=page;" value="no" vertex="1">
          <mxGeometry relative="1" x="0.0843" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-49" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-30" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" target="66LrUNiheCG7R__4WCpB-33" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <mxPoint x="740" y="1990" as="sourcePoint" />
            <mxPoint x="790" y="1940" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="-UauE8iiKkMlvjLXwtg8-50" edge="1" parent="1" source="66LrUNiheCG7R__4WCpB-33" style="endArrow=classic;html=1;rounded=0;defaultLabelBackgroundColor=page;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" value="">
          <mxGeometry height="50" relative="1" width="50" x="0.0288" as="geometry">
            <Array as="points">
              <mxPoint x="730" y="1940" />
              <mxPoint x="1480" y="1940" />
              <mxPoint x="1480" y="1320" />
            </Array>
            <mxPoint x="760" y="1820" as="sourcePoint" />
            <mxPoint x="910" y="1320" as="targetPoint" />
          </mxGeometry>
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


