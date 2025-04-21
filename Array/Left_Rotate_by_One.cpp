#include<iostream>
#include<vector>
using namespace std;
void leftRotationByOne(vector<int>&arr,int size)
{
    if(size==1){
        return;
    }
  else if(size==2)
  {
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
  }


  int temp=arr[0]; //O(N)

  for(int i=0;i<size-1;i++) //O(N-1)=O(N)
  {
    arr[i]=arr[i+1];
  }

  arr[size-1]=temp;//O(N)
  
  //Time Complexity: O(N)
  //Space Complexity:O(1)
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

   leftRotationByOne(answer,size);
   cout<<"\n the array after the rotation is "<<endl;
   for(int i=0;i<size;i++)
   {
    cout<<answer[i]<<" ";
   }
}