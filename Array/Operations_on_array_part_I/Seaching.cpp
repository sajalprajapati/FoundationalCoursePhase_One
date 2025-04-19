#include<iostream>
using namespace std;
bool linear_search(int arr[],int sizeOfArray,int target)
{
  for(int i=0;i<sizeOfArray;i++)
  {
    if(arr[i]==target)
    {return true;}
  }

  return false;
}

int main()
{
    int arr[]={45,34,2,3,5,46,78,9,0};
    int sizeOfArray=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"\n etner your target value";
    cin>>target;

    bool answer=linear_search(arr,sizeOfArray,target);
    if(answer==true)
    {cout<<"\n Elemennt is found ";}
    else{cout<<"\n The element is not found here !";}
}