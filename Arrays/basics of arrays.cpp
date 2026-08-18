
#include<iostream>
using namespace std;

int main(){
    int marks[] = {23,89,40,90};
    int mathmarks[4];
    mathmarks[0] = 100;
    mathmarks[1] = 80;
    mathmarks[2] = 70;
    mathmarks[3] = 160;
    
    cout<<"These are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
 // We can also change the value of array
    marks[2] = 39;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
 // using loops in arrays
    for(int i = 0; i<4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    return 0;
}


