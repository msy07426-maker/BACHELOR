#include <iostream>

using namespace std;

int main()
{
    // مصفوفة بحجم أقصى ثابت (100 عنصر) لتجنب التعقيد
    int arr[100];
    int n;

    // 1. طلب حجم المصفوفة وإدخال العناصر من المستخدم
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 4)
     {
        cout << "Please enter at least 4 elements!" << endl;
        return 0;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
     }

    // طباعة المصفوفة الأصلية
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. حذف العنصر قبل الأخير (دليله n - 2)
    int idxBeforeLast = n - 2;
    for (int i = idxBeforeLast; i < n - 1; i++)
    {
        arr[i] = arr[i + 1]; // إزاحة لليسار
    }
    n--; / تقليص الحجم بمقدار 1

    // حذف العنصر الثاني (الذي أصبح دليله الآن 1)
    for (int i = 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1]; // إزاحة لليسار
    }
    n--;
    // تقليص الحجم بمقدار 1

    // طباعة المصفوفة بعد الحذف
    cout << "Array after deleting 2nd and before-last elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. إضافة 0 قبل كل عنصر سالب
    for (int i = 0; i < n; i++)
     {
        if (arr[i] < 0)
        {
            // إزاحة العناصر من النهاية حتى موقع العنصر الحالي نحو اليمين لفتح مجال
            for (int j = n; j > i; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i] = 0; // وضع الصفر قبل العنصر السالب
            n++;        // زيادة الحجم لأننا أضفنا عنصراً جديداً
            i++;        // القفز فوق العنصر السالب الأصلي حتى لا نكرر العملية عليه
        }
    }

    // 4. طباعة المصفوفة النهائية
    cout << "Final array (with 0 before negative numbers): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
