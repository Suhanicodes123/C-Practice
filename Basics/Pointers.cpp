#include<iostream>
using namespace std;

int main(){
    int a=3;
    // (data type)* denotes a pointer,which holds the address of other data types
    
    int* b = &a;
    // & denotes (address of) operator
    cout<<"The address of a is "<<&a<<endl;
    
    cout<<"The address of a is "<<b<<endl;
    // * denotes(value at) dereference operator
    cout<<"The value at address b is "<<*b<<endl;
    
    // pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    
}


