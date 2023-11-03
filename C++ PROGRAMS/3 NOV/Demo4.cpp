// program showing the concept of structure

#include<iostream>
using namespace std;

struct Student{
    // data members
    int rno;
    double per;
    char name[50];

    // member functions
    void setData(){
        cout<<"Enter Name : ";
        cin.getline(name,50);

        cout<<"Enter roll number : ";
        cin>>rno;

        cout<<"Enter percentage : ";
        cin>>per;
    }
    void getData(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rno<<endl;
        cout<<"Percentage : "<<per<<endl;
    }
}s;
int main(){
   s.setData();
   s.getData(); 
}