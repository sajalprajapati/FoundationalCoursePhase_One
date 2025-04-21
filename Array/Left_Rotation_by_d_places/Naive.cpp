#include<iostream>
#include<vector>
using namespace std;


void Rotate(vector<int>&arr,int size,int d){
    int temp=arr[0]; //O(N)

    for(int i=0;i<size-1;i++) //O(N-1)=O(N)
    {
      arr[i]=arr[i+1];
    }
  
    arr[size-1]=temp;//O(N)
}


void leftRotation(vector<int>&arr,int size,int d)
{
    if(size <= 1 || d == 0)
        return;
        
    if(d>size)
    return;

    if(d==1 and size==2)
    {
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    }

    else if(d==1 and size==1)
    {
        return;
    }


    while(d>0)
    {
      Rotate(arr,size,d);
      d--;
    }
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