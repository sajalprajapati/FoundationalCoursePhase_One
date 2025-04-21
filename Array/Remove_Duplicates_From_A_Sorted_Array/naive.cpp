#include<iostream>
#include<vector>
using namespace std;

int removing(vector<int> &arr) {
    int n = arr.size(); 
    vector<int> temp(n);   // Use vector instead of raw array
    temp[0] = arr[0];
    int res = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != temp[res - 1]) {
            temp[res] = arr[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++) {
        arr[i] = temp[i];
    }

    return res;

    //Time Complexity:2O(N);
    //Space Complexity:O(N;
}

int main() {
    vector<int> answer;
    int size;
    cout << "\nEnter the size of an array: ";
    cin >> size;

    cout << "\nEnter the elements in the array (sorted):\n";
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        answer.push_back(element);
    }

    int res = removing(answer);

    cout << "\nThe array after removing duplicates is:\n";
    for (int i = 0; i < res; i++) {
        cout << answer[i] << " ";
    }

    cout << endl;
    return 0;
}
