//we are inserting in the array only if there is space in the array...
//we are not inserting like that we do in the vector...
#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int> &arr,int x,int position)
{
    for(int i=arr.size();i>=position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=x;                
}

int main()
{
    vector<int> arr;
    int n;
    cout<<"\n Enter the size of your array";
    cin>>n;
    cout<<"\n Enter the elements of your array";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"\n Enter the element you want to insert";
    int x;
    cin>>x;
    cout<<"\n Enter the position you want to insert at";
    int pos;
    cin>>pos;
    if(pos>arr.size())
    {
        cout<<"\n Invalid position";
        return 0;
    }

    insertion(arr,x,pos);
    cout<<"\n The array after insertion is: ";  
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    // return 0;
    // return 0;

}