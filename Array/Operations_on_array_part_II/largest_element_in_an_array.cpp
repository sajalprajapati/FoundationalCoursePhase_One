#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> answer;
    cout<<"\n Enter the size of an array";
    int size;
    cin>>size;
    cout<<"\n Enter the element in an array";
    for(int i=0;i<size;i++)
    {
        int element;
        cin>>element;
        answer.push_back(element);
    }

    int largest=answer[0];
    for(int i=1;i<answer.size();i++)
    {
        if(answer[i]>largest)
        {
            largest=answer[i];
        }
    }

    cout<<"\n the largest element is "<<largest;
}