// program showing the concept of constructor
#include<iostream>
#include<string.h>
using namespace std;
class Greater{
    private:
        int rno;
        double per;
        char name[50];
    public:
        Greater(){
            rno = 123;
            per = 45.56;
            strcpy(name,"Andrew Anderson"); 
            cout<<"Default constructor called"<<endl;
        }
        void display(){            
            cout<<"Roll Number : "<<rno<<endl;
            cout<<"Percentage : "<<per<<endl;
            cout<<"Name : "<<name<<endl;
        }
};
int main(){
    Greater obj;
    obj.display();
}