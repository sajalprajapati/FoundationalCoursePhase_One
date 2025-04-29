#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }

    return n+Sum(n-1);
}
int main(){
    int n;
    cout<<"\n Enter the number of which you want to find the sum of natural numbers";
    cin>>n;
    cout<<"\n Sum Of Natural Number is "<<Sum(n);
}