#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        
        Number(Number &obj){
            cout<<"copy constructor called! "<<endl;
            a = obj.a;
        }
        // when no copy constructor is found, compiler supplies its own copy constructor
        
        void display(){
            cout<<"the number for this object is "<<a<<endl;
        }
};

int main(){
    Number x, y, z(45), z2;
    z.display();
    Number z1(x);
    // copy constructor invoked
    // z1 should exactly resemble z or x or y
    z1.display();
    z2 = z;
    // copy constructor not called
    return 0;
}