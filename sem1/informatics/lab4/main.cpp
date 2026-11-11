#include <iostream>
#include <cstdlib> // مكتبة توليد الأرقام العشوائية rand و srand
#include <ctime>   // مكتبة time لضمان عشوائية الأرقام في كل تشغيل

using namespace std;

int main()
{
    // تعيين بذور الأرقام العشوائية بناءً على وقت الجهاز الحالي
    srand(time(0));

    int arr[200]; // حجم أكبر ليتسع للإضافات القادمة
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 4)
    {
        cout << "Please enter at least 4 elements!" << endl;
        return 0;
    }

    // 1. توليد المصفوفة عشوائياً (أرقام بين -50 و 50 لتشمل أرقاماً سالبة وموجبة)
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 101 - 50; 
    }

    // 2. طباعة المصفوفة الأصلية
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. حذف العنصر قبل الأخير (موقعه n - 2)
    int idxBeforeLast = n - 2;
    for (int i = idxBeforeLast; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; // تقليص الحجم

    // 4. حذف العنصر الثاني (موقعه الآن هو الدليل 1 دائماً)
    int idxSecond = 1;
    for (int i = idxSecond; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; // تقليص الحجم

    // 5. إضافة عنصر 0 قبل كل عنصر سالب
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            // إزاحة العناصر لليمين لفتح مجال للصفر
            for (int j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = 0; // وضع الصفر في الموقع الحالي
            n++;        // زيادة الحجم الإجمالي للمصفوفة
            i++;        // تخطي العنصر السالب الحالي حتى لا ندخل في حلقة لا نهائية
        }
    }

    // 6. طباعة المصفوفة النهائية
    cout << "Final array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
