#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> secondLargest(vector<int> &arr)
{
     vector<int> answer; // O(N)
     
     if(answer.size()<=2)
     return answer;

     int largest=arr[0]; //O(1)
     int secondLargest=INT_MIN; //O(1)

     for(int i=0;i<arr.size();i++) //O(n)
     {
        if(arr[i]>largest and largest>secondLargest)//O(n)
        {
          secondLargest=largest;//O(N)
          largest=arr[i];//O(N)
        }

        else if(arr[i]>secondLargest and arr[i]!=largest) //O(N)
        {
            secondLargest=arr[i];//O(N)
        }
     }

     answer.push_back(largest);//O(1)
     answer.push_back(secondLargest);//O(1)

     return answer; //O(2)

     /*
     Time Complexity: O(N)
     Space Complexity:O(2)=O(1)
     */
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

    vector<int> output=secondLargest(answer);
    cout<<"\n The largest element is "<<output[0]<<endl;
    cout<<"\n the second largest element is "<<output[1]<<endl;
}