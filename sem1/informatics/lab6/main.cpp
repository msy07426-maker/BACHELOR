#include <iostream>
#include <string>

using namespace std;

// دالة لاستبدال جميع تكرارات الكلمة داخل النص
string replaceAll(string text, const string& targetWord, const string& replacementWord) 
    {
    // إذا كانت الكلمة المطلوبة فارغة، نعيد النص كما هو لتجنب التكرار اللانهائي
    if (targetWord.empty())
    {
        return text;
    }

    size_t pos = 0; // متغير لتخزين موقع الكلمة في النص

    // حلقة تكرار تبحث عن الكلمة طالما أنها موجودة في النص
    // string::npos تعني "لم يتم العثور على الكلمة"
    while ((pos = text.find(targetWord, pos)) != string::npos)
   {
        
        // استبدال الكلمة القديمة بالجديدة في الموقع الذي وجدناها فيه
        text.replace(pos, targetWord.length(), replacementWord);
        
        // تحريك مؤشر البحث لما بعد الكلمة الجديدة لتجنب فحصها مرة أخرى
        pos += replacementWord.length();
    }

    return text;
}

int main()
 {
    string inputText;
    string targetWord;
    string replacementWord;

    // 1. الترحيب وطلب الجملة الأساسية
    cout << "==========================================\n";
    cout << "        Word Replacement Program          \n";
    cout << "==========================================\n\n";

    cout << "1. Enter the full text (sentence):\n> ";
    getline(cin, inputText);

    // 2. طلب الكلمة المراد استبدالها
    cout << "\n2. Enter the word you want to replace:\n> ";
    cin >> targetWord;

    // 3. طلب الكلمة البديلة
    cout << "\n3. Enter the new replacement word:\n> ";
    cin >> replacementWord;

    // تنفيذ عملية الاستبدال
    string resultText = replaceAll(inputText, targetWord, replacementWord);

    // 4. طباعة النتيجة النهائية
    cout << "\n------------------------------------------\n";
    cout << "Original text : " << inputText << "\n";
    cout << "Modified text : " << resultText << "\n";
    cout << "------------------------------------------\n";

    return 0;
}
