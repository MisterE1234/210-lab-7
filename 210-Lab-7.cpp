//COMSC| Lab 7 | Ethan Aylard
//IDE used: Visual Studio Code

#include <iostream>
using namespace std;

// Function prototypes
void reverseArray(string*);
void displayArray(string*);

int main()
{
    const int size = 5;
    //Calling a dynamic array that holds 5 strings
    string *namePtr = nullptr;
    namePtr = new string[size];

    //Filling the array with names
    namePtr[0] = "Alice";
    namePtr[1] = "Bob";
    namePtr[2] = "Charlie";
    namePtr[3] = "Diana";
    namePtr[4] = "Ethan";

    //Displaying the original array
    cout << "Original array:" << endl;
    displayArray(namePtr);

    //Reversing the array
    reverseArray(namePtr);

    //Displaying the reversed array
    cout << "\nReversed array:" << endl;
    displayArray(namePtr);

    //Freeing the dynamically allocated memory
    delete[] namePtr;

    return 0;
}

//reversArray() swaps the values in the array to reverse their order
//arguments: string pointer
//returns: nothing
void reverseArray(string* nArry)
{
    const int size = 5;
    //Using a temporary variable to swap the values
    string temp;

    //Using a loop to reverse the names in the array by swapping them with their mirrored index
    for (int i = 0; i < size / 2; i++)
    {
        temp = nArry[i];
        nArry[i] = nArry[size - 1 - i];
        nArry[size - 1 - i] = temp;
    }

}

//displayArray() displays the contents of the array
//arguments: string pointer
//returns: nothing
void displayArray(string* nArry)
{
    const int size = 5;

    //Looping through the array to display each name
    for (int i = 0; i < size; i++)
    {
        cout << nArry[i] << "  ";
    }
    cout << endl;

}