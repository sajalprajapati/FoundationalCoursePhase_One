#include<iostream>
using namespace std;

void insertion(int arr[], int &size, int position, int element)
{
    if(position > size + 1 || position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    if(size >= 5) {
        cout << "Array is full!" << endl;
        return;
    }

    int pointer = size - 1;
    for(; pointer >= position - 1; pointer--) {
        arr[pointer + 1] = arr[pointer];
    }

    arr[position - 1] = element;
    size++;
}

int main()
{
    int arr[5] = {5, 10, 20};  // Fixed size array
    int size = 3;  // Initial number of elements

    int position;
    cout << "\nEnter your position: ";
    cin >> position;

    int elementToBeInserted;
    cout << "\nEnter the element to insert at that position: ";
    cin >> elementToBeInserted;

    cout << "\nArray before insertion: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    insertion(arr, size, position, elementToBeInserted);  // Note: fixed function name

    cout << "\nArray after insertion: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
