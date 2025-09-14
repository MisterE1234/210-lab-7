//COMSC| Lab 7 | Ethan Aylard
//IDE used: Visual Studio Code

#include <iostream>
using namespace std;

void reverseArray(string*);
void displayArray(string*);

int main()
{
    const int size = 5;
    string *namePtr = nullptr;
    namePtr = new string[size];

    namePtr[0] = "Alice";
    namePtr[1] = "Bob";
    namePtr[2] = "Charlie";
    namePtr[3] = "Diana";
    namePtr[4] = "Ethan";


    cout << "Original array:" << endl;
    displayArray(namePtr);

    reverseArray(namePtr);

    cout << "\nReversed array:" << endl;
    displayArray(namePtr);

    return 0;
}

void reverseArray(string* nArry)
{
    const int size = 5;
    string temp;

    for (int i = 0; i < size / 2; i++)
    {
        temp = nArry[i];
        nArry[i] = nArry[size - 1 - i];
        nArry[size - 1 - i] = temp;
    }
}