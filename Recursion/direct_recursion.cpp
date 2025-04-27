#include<iostream>
using namespace std;
void function1(){
    cout<<"Hello from Sajal"<<endl;
    function1();
}
int main(){
  function1();
}