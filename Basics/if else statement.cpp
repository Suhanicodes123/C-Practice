#include<iostream>

using namespace std;

int main(){
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

//  Selection control structure: If else-if else ladder
    if((age<18)&& (age>0)){
        cout<<"You can not vote"<<endl;
    }
    else if(age==18){
        cout<<"You may vote"<<endl;
    }
    
    else{
        cout<<"You can vote"<<endl;
    }