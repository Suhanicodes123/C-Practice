#include<iostream>
using namespace std;

int main(){
    int a = 3, b = 5;
    cout<<"OPERATORS IN C++"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;

    //ARITHMETIC OPERATORS
    cout<<endl;
    cout<<"Following are the types of arithmetic operators: "<<endl;
    cout<<"The value of a + b is:"<<a+b<<endl; //sum
    cout<<"The value of a - b is:"<<a-b<<endl; //diff
    cout<<"The value of a * b is:"<<a*b<<endl; //prod
    cout<<"The value of a / b is:"<<a/b<<endl; //int div
    cout<<"The value of a % b is:"<<a%b<<endl; //remainder
    cout<<"The value of a++ is:"<<a++<<endl; //first prints a then adds 1 to it
    cout<<"The value of a-- is:"<<a--<<endl; //first prints a then subs 1 from it
    cout<<"The value of ++a is:"<<++a<<endl; //first adds 1 then print a
    cout<<"The value of --a is:"<<--a<<endl; //first subs 1 then print a

    //ASSIGNMENT OPERATORS --> USED TO ASSIGN VALUESTO VARIABLES
    //int a=3,b=5;
    //char d='d'


    //COMPARISON OPERATORS
    cout<<endl;
    cout<<"Following are the types of comparison operators:"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl; //equals to
    cout<<"The value of a < b is "<<(a<b)<<endl; //a is less than b
    cout<<"The value of a > b is "<<(a>b)<<endl; //a is greater than b
    cout<<"The value of a <= b is "<<(a<=b)<<endl; //a is less than or equal to b
    cout<<"The value of a >= b is "<<(a>=b)<<endl; //a is greater than or equal to b
    cout<<"The value of a != b is "<<(a!=b)<<endl; //a is not equal to b

    //LOGICAL OPERATORS
    cout<<endl;
    cout<<"Following are the types of logical operators:"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical AND operator (!((a==b) && (a<b))) is:"<<(!((a==b) && (a<b)))<<endl;

    return 0;
}