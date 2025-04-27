#include<iostream>
using namespace std;
void function2(){
    cout<<"\n the function2 is being called and it's process being done."<<endl;

}
void function1(){
    cout<<"\n the before the function 2 is called"<<endl;
    function2();
    cout<<"\n after the function 1 is end"<<endl;
}
int main(){
    cout<<"\n Before the main function calling "<<endl;
    function1();
    cout<<"\n After the main function ended"<<endl;
}