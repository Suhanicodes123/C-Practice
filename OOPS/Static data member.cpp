
#include<iostream>
using namespace std;

class Employee{
    int Id;
    static int  count;
    // static gives the different count to every employee entered
    // by default they are private
    public:
        void setData(void){
            cout<<"enter the Id"<<endl;
            cin>>Id;
            count++;
        }
        void getData(void){
            cout<<"the Id of this employee is "<<Id<<" and this is employee number "<<count<<endl;
            
        }

};
// count is the static data member of class employee
int Employee :: count;
// default value is 0
int main(){
    Employee suhani;
    suhani.setData();
    suhani.getData();
    return 0;
}
