#include<iostream>
#include<iomanip>

int main(){
    int a =3, b=4;
    int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
// Operator precedence helps us to solve an expression
// When two or more operators have the same precedence, the operator associativity helps us to decide that we should solve the expression from "left-to-right" or from "right-to-left".
}
