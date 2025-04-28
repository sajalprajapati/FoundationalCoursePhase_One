#include<iostream>
using namespace std;
void binary(int n){
   if(n==0){return;}
   binary(n/2);
   cout<<n%2;
}
int main(){
    int n;
    cout<<"\n enter the value of n to which you want to convert to binary"<<endl;
    cin>>n;
    binary(n);
}