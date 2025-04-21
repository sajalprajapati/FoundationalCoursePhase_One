#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void leftRotation(vector<int>& arr, int size, int d) {
    if (size <= 1 || d == 0) return;
    
    if(d>size) return;
    // Step 1: Reverse first d elements
    reverse(arr, 0, d - 1);
    
    // Step 2: Reverse the remaining elements (from index d to size-1)
    reverse(arr, d, size - 1);
    
    // Step 3: Reverse the entire array
    reverse(arr, 0, size - 1);
}

int main(){
    vector<int> answer;
    int size;
    cout<<"\n Enter the size of an array"<<endl;
    cin>>size;
    cout<<"\n Enter the elements in the array"<<endl;
    for(int i=0;i<size;i++)
    {
        int element;
        cin>>element;
        answer.push_back(element);
    }


    int d;
    cout<<"\n How many rotation do you want to left rotate an array"<<endl;
    cin>>d;

   leftRotation(answer,size,d);
   cout<<"\n the array after the rotation is "<<endl;
   for(int i=0;i<size;i++)
   {
    cout<<answer[i]<<" ";
   }
}