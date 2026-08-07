#include<iostream>
using namespace std;

int main(){
    int marks[] = {60,70,80,90};
    int* p = marks;
    cout<<*(p++)<<endl;
    // value of p increased
    cout<<*(++p)<<endl;
    // value of p will increase again and the new value is printed
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;


}

