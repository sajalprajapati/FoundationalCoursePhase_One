#include<iostream>
using namespace std;
int factorial(int n,int k){
    if(n==0 || n==1){
        return k;
    }


    return factorial(n-1,k*n);
}
int main(){
    int n;
    cout<<"\n Enter the value of n"<<endl;
    cin>>n;
    cout<<"\n the factorial of a number is "<<factorial(n,1);
}