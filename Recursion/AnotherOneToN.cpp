#include<iostream>
using namespace std;
void printingValue(int n,int k){
    if(n==0) return;
    cout<<k<<" ";
    printingValue(n-1,k+1);
}
int main(){
    int n;
    cout<<"\n enter the value of n"<<endl;
    cin>>n;
    printingValue(n,1);
}