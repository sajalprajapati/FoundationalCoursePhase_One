#include<iostream>
#include<vector>
using namespace std;

int removing(vector<int> &arr) {
    
    /*
    Below one is my logic
    int i=0; 
    int j=i+1; //j=1;
    int size=arr.size();
    
    while(j<size)
    {
   
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
           
        }
        j++;
    }

    return i+1;
    */




    //gfg logic:

    int res=1; //this res is telling that current size and next index also
    for(int i=1;i<arr.size();i++)
    {
      if(arr[i]!=arr[res-1])
      {
        arr[res]=arr[i];
        res++;
      }
    }

    return res;
    
    //Time Complexity:O(N);
    //Space Complexity:O(1);
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
