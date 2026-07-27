#include<iostream>
using namespace std;
int c=45;
int main(){
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;  
    // :: is called scope resolution operator,used to access global value of a variable
    
}
