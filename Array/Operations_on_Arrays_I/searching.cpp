#include<iostream>
using namespace std;
int searching(int arr[],int n,int target)
{
 for(int i=0;i<n;i++)
 {
        if(arr[i]==target)
        {
            return i;
        }
 }
 return -1;
}


int main()
{
    int arr[]={20,44,3,42,24,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=34;
 
    cout<<"\n the element is present at "<<searching(arr,n,x);
    
}