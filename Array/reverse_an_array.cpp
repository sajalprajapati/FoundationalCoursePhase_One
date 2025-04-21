#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void reverseAnArray(vector<int> &arr)
{
    if(arr.size()==1) //O(N)
    return;

    int i=0;//O(1)
    int j=arr.size()-1;//O(1)
    while(i<=j)//O(n-1)
    {
        swap(arr[i],arr[j]); //O(!)
        i++;//O(1)
        j--;//O(1)
    }

    //Time Complexity:O(n)
    //Space Complexity:O(1)

}



int main(){
    vector<int> answer;
    int size;
    cout<<"\n Enter the size of an array";
    cin>>size;

    cout<<"\n enter the elements in an array";
    for(int i=0;i<size;i++)
    {
        int element;
        cin>>element;
        answer.push_back(element);
    }

    reverseAnArray(answer);

    cout<<"\n The array after the traversal is "<<endl;
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
}