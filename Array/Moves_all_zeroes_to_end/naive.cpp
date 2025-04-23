#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void movingZeroes(vector<int> &arr,int size){

    if(size==0 ||size==1) return; //O(1)

    if(size==2 and arr[1]==0){//O(1)
        swap(arr[0],arr[1]);//O(1)
        return;//O(1)
    }
    vector<int> tempAnswer; //O(size)
    int count=0;//O(1)
    int i=0;//O(1)
    for(;i<size;i++){ //O(size)
       if(arr[i]!=0){//O(1)
        tempAnswer.push_back(arr[i]);//O(1)
       }
       else if(arr[i]==0){//O(1)
        count++;//O(1)
       }
    }

     
    for(int i=0;i<count;i++){ //O(Count)
        tempAnswer.push_back(0);
    }


    for(int i=0;i<size;i++){//O(size)
        arr[i]=tempAnswer[i];
    }

    //Overall Time Complexity is :O(size+count)
    //Space Complexity:O(size);

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