#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is called for object number "<<count<<endl;
        }
        
        ~num(){
            cout<<"this is the time when destructor is called for object number "<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"we are inside main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"creating two more objects"<<endl;
        num n2, n3;
        // as we exit the block the object inside the block(n2 and n3),the destructor is called immediately for them.
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
}
    
