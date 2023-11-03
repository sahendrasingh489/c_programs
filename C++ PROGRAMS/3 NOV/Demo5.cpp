// program showing the concept of class

#include<iostream>
using namespace std;

class Demo{
    private:
    void display(){
        cout<<"display method called"<<endl;
    }
    public:
    void showData(){
        cout<<"show data method called"<<endl;
        display();
    }
};

int main(){
    Demo obj;
    obj.showData();
}