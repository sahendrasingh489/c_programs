// program showing the concept of passing object in a function and returning object from a function
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Greater{
    private:
        int rno;
        double per;
        char name[50];
    public:
        Greater(int rno,double per,char name[]){
            this->rno = rno;
            this->per = per;
            strcpy(this->name,name); 
            cout<<"Parameterized constructor called"<<endl;
        }
        void display(){            
            cout<<"Roll Number : "<<rno<<endl;
            cout<<"Percentage : "<<per<<endl;
            cout<<"Name : "<<name<<endl;
        }
        Greater(){}
        Greater createCopy(Greater obj){
            Greater newObj;
                newObj.rno = obj.rno;
                newObj.per = obj.per;
                strcpy(newObj.name,obj.name);
            return newObj;
        }
        ~Greater(){
            cout<<"destructor called"<<endl;
        }
};
int main(){
        int rno;
        double per;
        char name[50];

        cout<<"Enter roll number : ";
        cin>>rno;

        cout<<"Enter percentage : ";
        cin>>per;
        getchar();
        cout<<"Enter name : ";
        cin.getline(name,50);

        Greater obj(rno,per,name),obj1;
        obj.display();

        cout<<"\nAfter copying : \n";
        obj1 = obj1.createCopy(obj); 
        obj1.display();
}

