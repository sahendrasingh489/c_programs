// program showing the concept of class
#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(int a,int b){
            int res = a>b?a:b;
            cout<<"Greater number : "<<res<<endl;
        }
        Demo(double a,double b){
            double res = a>b?a:b;
            cout<<"Greater number : "<<res<<endl;
        }
};
int main(){
    Demo obj(34,45),obj1(12.23,4.3);
}