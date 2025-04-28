#include<iostream>
#include<vector>
using namespace std;
int logrithmic(int n){
   if(n==1){
    return 0;
   } else{
    return 1+logrithmic(n/2);
   }
}
int main(){
    int n;
    cout<<"\n enter of which value you want to find the power base 2"<<endl;
    cin>>n;
    cout<<"\n the final answer of "<<n<<" is "<<logrithmic(n);
}