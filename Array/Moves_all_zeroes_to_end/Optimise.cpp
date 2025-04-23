#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void movingZeroes(vector<int> &arr,int size){

    if(size==0 || size==1) return;

    if(size==2 && arr[1]==0){
        swap(arr[0], arr[1]);
        return;
    }
    
    for(int i=0;i<size;i++){
        int count=0; //this variable is having two meaning right now..
        //first one is it is showing how many elements are correctly present in the front...
        //second showing the next index number where we can perform swapping ....

        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }

    // Time Complexity: O(N) in worst case
    // Space Complexity: O(1)
}


int main(){
    vector<int> answer;
    int size;
    cout<<"\n Enter the size of an array";
    cin>>size;

    cout<<"\n enter the elements in the array";
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        answer.push_back(element);
    }

    movingZeroes(answer,size);
    cout<<"\n the element  after moving array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<answer[i]<<endl;
    }
}