#include<iostream>
using namespace std;
void printingValue(int n){
    if(n==0){return ;}
  
    printingValue(n-1);

    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"\n enter the value of n"<<endl;
    cin>>n;
    printingValue(n);
}