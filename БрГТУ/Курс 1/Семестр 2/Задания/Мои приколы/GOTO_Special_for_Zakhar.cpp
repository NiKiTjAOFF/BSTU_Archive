#define CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
    int* array = NULL, * tempArray = NULL, size, action, i, j, averageSum;
    cout << "Print size of array: ";
    cin >> size;
    goto createArray;
startingCase:
menu:
    cout << "Choose operation:\n\t1: sort array\n\t2: print array\n\t3: delete array\n\t4: initialize array\n\t5: copy array" << '\n';
    cin >> action;
    i = j = averageSum = 0;
    switch (action) {
    case 1:
        goto sortArray;
    caseOneBreak:
        break;
    case 2:
        goto printArray;
    caseTwoBreak:
        break;
    case 3:
        goto deleteArray;
    caseThreeBreak:
        break;
    case 4:
        goto initializeArray;
    caseFourBreak:
        break;
    case 5:
        goto copyArray;
    caseFiveBreak:
        break;
    default: return 0;
    }
    goto menu;

createArray:
    cout << "Print " << size << " elements of array: ";
    array = new int[size];
    i = 0;
    createArrayLoop:
        if (i < size) {
            cin >> array[i];
            ++i;
            goto createArrayLoop;
        }
        else goto startingCase;

sortArray:
    if (!array) {
        cout << "There is no array" << '\n';
        goto caseOneBreak;
    }
    i = j = 0;
sortArrayLoop1:
    if (i < size) {
    sortArrayLoop2:
        if (j < size - 1 - i) {
            if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
            ++j;
            goto sortArrayLoop2;
        }
        j = 0;
        ++i;
        goto sortArrayLoop1;
    }
    else goto caseOneBreak;

printArray:
    if (!array) {
        cout << "There is no array" << '\n';
        goto caseTwoBreak;
    }
    printArrayLoop:
        if (i < size) {
            cout << array[i] << ' ';
            ++i;
            goto printArrayLoop;
        }
        else {
            cout << '\n';
            goto caseTwoBreak;
        }

deleteArray:
    if (array) {
        delete array;
        array = NULL;
        goto caseThreeBreak;
    }
    else {
        cout << "There is no array" << '\n';
        goto caseThreeBreak;
    }

initializeArray:
    if (array) {
        cout << "Delete array first" << '\n';
        goto caseFourBreak;
    }
    cout << "Print number of elements: ";
    cin >> size;
    array = new int[size];
    cout << "Print " << size << " elements: " << '\n';
    initializeArrayLoop:
        if (i < size) {
            cin >> array[i];
            ++i;
            goto initializeArrayLoop;
        }
        else goto caseFourBreak;

copyArray:
    if (!array) {
        cout << "There is no array" << '\n';
        goto caseOneBreak;
    }
    tempArray = new int[size];
    copyArrayLoop:
        if (i < size) {
            tempArray[i] = array[i];
            ++i;
            goto copyArrayLoop;
        }
        else goto caseFiveBreak;

}