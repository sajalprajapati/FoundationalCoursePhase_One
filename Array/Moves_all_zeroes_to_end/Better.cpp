#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void movingZeroes(vector<int> &arr,int size){

    if(size==0 || size==1) return;

    if(size==2 && arr[1]==0){
        swap(arr[0], arr[1]);
        return;
    }
    
    for(int i = 0; i < size; i++){
        if(arr[i] != 0){
            continue;
        }

        else if(arr[i] == 0){
            int j = i + 1;

            while(j < size){
                if(arr[j] != 0){
                    break;
                }
                j++;
            }

            // ✅ Only swap if j is within array bounds
            if(j < size){
                swap(arr[i], arr[j]);
            } else {
                break; // No more non-zero elements ahead
            }

            // i = j;
        }
    }

    // Time Complexity: O(n^2) in worst case
    // Space Complexity: O(1)
}


int main(){
    vector<int> answer;
    int size;
    cout<<"\n Enter the size of an array";
    cin>>size;

    cout<<"\n enter the elements in the array";
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        answer.push_back(element);
    }

    movingZeroes(answer,size);
    cout<<"\n the element  after moving array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<answer[i]<<endl;
    }
}