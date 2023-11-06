// program showing the concept of constructor
#include<iostream>
using namespace std;
class Greater{
    public:
        Greater(){
            int rno = 123;
            double per = 45.56;
            char name[]="Andrew Anderson"; 
            cout<<"Default constructor called"<<endl;
            
            cout<<"Roll Number : "<<rno<<endl;
            cout<<"Percentage : "<<per<<endl;
            cout<<"Name : "<<name<<endl;
        }
};
int main(){
    Greater obj;
}