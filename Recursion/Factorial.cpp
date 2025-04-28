#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }


    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"\n Enter the value of n"<<endl;
    cin>>n;
    cout<<"\n the factorial of a number is "<<factorial(n);
}