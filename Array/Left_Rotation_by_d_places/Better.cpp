#include<iostream>
#include<vector>
using namespace std;



void leftRotation(vector<int>&arr,int size,int d)
{
  if(size<=1 || d==0)
  return;
  else if(d>size){return;}

  vector<int> answer(arr.begin(),arr.begin()+d); //<--this is also the way to push the elements in the vector.
  
  for(int i=d;i<size;i++)
  {
    arr[i-d]=arr[i];
  }

  for(int i=0;i<d;i++)
  {
    arr[size-d+i]=answer[i];
  }

  //Time Complexity:O(N)
  //Space Complexity:O(d);
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