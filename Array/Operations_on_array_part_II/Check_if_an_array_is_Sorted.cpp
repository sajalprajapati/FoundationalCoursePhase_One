#include<iostream>
#include<vector>
using namespace std;

bool checking(vector<int> &answer,int size){
  
   
    for(int i=0;i<size-1;i++)
    {
        if(answer[i]>answer[i+1]) return false;
    }

    return true;


    
}

int main(){
    vector<int> answer;
    int size;
    cout<<"\n enter the size of an array";
    cin>>size;
    cout<<"\n enter the element in the array";
    for(int i=0;i<size;i++)
    {
        int element;
        cin>>element;
        answer.push_back(element);
    }


    bool isSorted=checking(answer,size);
    
    if(isSorted==true){
        cout<<"\n Array is Sorted ";
    }
    else if(isSorted==false)
    {
        cout<<"\n Array is not Sorted";
    }
}