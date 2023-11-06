// program showing the concept of copy constructor (deep copy)
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
        Greater(const Greater &obj){
            rno = obj.rno;
            per = obj.per;
            strcpy(name,obj.name);
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

        Greater obj(rno,per,name),obj1(obj);
        obj.display();

        cout<<"\nAfter copying : \n";
        obj1.display();
}

/*
int a=100;
int &ref=a;

ref=23;
a==>23

a=45;
ref==>45
*/