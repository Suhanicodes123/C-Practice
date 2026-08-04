#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
    
};

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice; 
    // returns garbage value as we can only use one at a time as memory is shared among all three
}    


#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast, lunch, dinner};
    // enum use as data type assign numbers
    Meal m1 = lunch;
    cout<<(m1==1);
}
