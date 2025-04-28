#include<iostream>
using namespace std;
void printingValue(int n){
    if(n==0){return ;}
    cout<<n<<" ";
    printingValue(n-1);
}
int main(){
    int n;
    cout<<"\n enter the value of n"<<endl;
    cin>>n;
    printingValue(n);
}