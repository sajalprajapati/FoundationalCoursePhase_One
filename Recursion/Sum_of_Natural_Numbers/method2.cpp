#include<iostream>
using namespace std;
int Sum(int n,int sum){
    if(n==1){
        return sum+n;
    }

    return Sum(n-1,sum+n);
}
int main(){
    int n;
    cout<<"\n Enter the number of which you want to find the sum of natural numbers";
    cin>>n;
    cout<<"\n Sum Of Natural Number is "<<Sum(n,0);
}