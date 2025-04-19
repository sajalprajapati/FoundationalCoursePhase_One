#include<iostream>
using namespace std;


//first occurence will be deleted ...
int deletion(int arr[], int target, int size)
{
    int elementPresentIndex = -1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            elementPresentIndex = i;
            break; // delete first match and break
        }
    }

    if(elementPresentIndex == -1) {
        cout << "Element not found!" << endl;
        return size; // size remains unchanged
    }

    // Shift elements left
    for(int i = elementPresentIndex; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return size - 1; // new size
}

int main()
{
    int arr[5] = {3, 8, 12, 6, 5};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    size = deletion(arr, target, size); // update size

    cout << "\nThe array after the deletion is:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
