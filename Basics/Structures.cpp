#include<iostream>
using namespace std;

typedef struct employee
// by using typedef we can write struct employee as ep 
{
    int eID;
    char favChar;
    float salary;
} ep;

int main(){
    ep suhani;
    suhani.eID = 1;
    suhani.favChar = 'c';
    suhani.salary = 10000000;
    cout<<"the value of eID "<<suhani.eID<<endl;
    cout<<"the value of favChar "<<suhani.favChar<<endl;
    cout<<"the value of salary "<<suhani.salary<<endl;
}