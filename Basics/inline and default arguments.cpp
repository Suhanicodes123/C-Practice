#include <iostream>
using namespace std;

inline int product(int a, int b){
    // static int c=0;
    // this will execute only one time
    // c = c+1;
    // when the function is run next time, the value of c will be retained
    return a*b;
}
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
    // compulsory argument should be on left and default argument should be on right side
}
int main() {
    int a, b;
    cout<<"Enter value of a and b "<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a, b)<<endl;
    int money = 100;
    cout<<"if you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<< " Rs after one year";
    return 0;

}


