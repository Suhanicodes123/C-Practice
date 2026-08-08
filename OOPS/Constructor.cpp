#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(void);
        // constructor is a special member function with the same name as of the class.It is used to initialize the object of its class.It is automatically invoked whenever an object is creater

    
    void printNumber(){
           cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
       } 
};


Complex :: Complex(void){
    a = 10;
    b = 20;
}

int main(){
    Complex c;
    c.printNumber();
    return 0;
    
}