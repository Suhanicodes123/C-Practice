#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using function with two arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using function with three aruments"<<endl;
    return a+b+c;
}
int volume(int l, int b, int h){
    return (l * b * h);
}
int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3, 8 and 9 is "<<sum(3, 8, 9)<<endl;
    cout<<"the volume of rectangle of sides 5, 6, 7 is "<<volume(5, 6, 7)<<endl;
    return 0;

}