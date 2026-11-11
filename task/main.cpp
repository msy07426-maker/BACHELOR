#include <iostream>
using namespace std;

int main() 
{
    int choice;
    
    // طباعة القائمة الرئيسية
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

    cout << "\n-----------------------------------------\n";

    switch (choice) 
    {
        case 1:
          {
            cout << "Executing Task 1: Find Max/Min, Indices & Counts\n";
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
            cout << "Max value: " << maxVal << ", first index: " << maxIndex << ", count: " << countMax << endl;
            cout << "Min value: " << minVal << ", first index: " << minIndex << ", count: " << countMin << endl;
            break;
        }
        
        case 2:
          {
            cout << "Executing Task 2: Check if Array is Sorted\n";
            int arr[] = {1, 2, 3, 4, 5};
            int size = 5;
            bool isSorted = true;
            for (int i = 0; i < size - 1; i++)
              {
                if (arr[i] > arr[i + 1]) { isSorted = false; break; }
            }
            if (isSorted) cout << "Result: The array is sorted in ascending order." << endl;
            else cout << "Result: The array is NOT sorted." << endl;
            break;
        }

        case 3: 
          {
            cout << "Executing Task 3: Reverse an Array\n";
            int arr[] = {1, 2, 3, 4, 5};
            int size = 5;
            cout << "Original: ";
            for (int i = 0; i < size; i++) cout << arr[i] << " ";
            for (int i = 0, j = size - 1; i < j; i++, j--) 
            {
                int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
            }
            cout << "\nReversed: ";
            for (int i = 0; i < size; i++) cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 4: 
          {
            cout << "Executing Task 4: Find Max in 2D Array\n";
            int matrix[3][4] = {{1, 5, 9, 2}, {8, 3, 7, 4}, {6, 0, 11, 2}};
            int maxVal = matrix[0][0], maxRow = 0, maxCol = 0;
            for (int i = 0; i < 3; i++) 
            {
                for (int j = 0; j < 4; j++) 
                {
                    if (matrix[i][j] > maxVal)
                    { 
                      maxVal = matrix[i][j]; 
                      maxRow = i;
                      maxCol = j;
                    }
                }
            }
            cout << "Max element: " << maxVal << " at Row: " << maxRow << ", Col: " << maxCol << endl;
            break;
        }

        case 5: 
          {
            cout << "Executing Task 5: Insertion Sort\n";
            int arr[7] = {7, 3, 5, 1, 6, 2, 4};
            for (int i = 1; i < 7; i++) 
            {
                int key = arr[i]; int j = i - 1;
                while (j >= 0 && arr[j] > key) 
                { arr[j + 1] = arr[j];
                 j = j - 1;
                }
                arr[j + 1] = key;
            }
            cout << "Sorted Array (Insertion): ";
            for (int i = 0; i < 7; i++) cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 6: 
          {
            cout << "Executing Task 6: Selection Sort\n";
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
            cout << "Sorted Array (Selection): ";
            for (int i = 0; i < 7; i++) cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 7:
          {
            cout << "Executing Task 7: Bubble Sort\n";
            int arr[7] = {7, 3, 5, 1, 6, 2, 4};
            for (int i = 0; i < 7 - 1; i++) 
            {
                for (int j = 0; j < 7 - i - 1; j++) 
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                      arr[j] = arr[j + 1];
                      arr[j + 1] = temp;
                    }
                }
            }
            cout << "Sorted Array (Bubble): ";
            for (int i = 0; i < 7; i++) cout << arr[i] << " ";
            cout << endl;
            break;
        }
        
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
    }

    cout << "-----------------------------------------\n";
    return 0;
}
