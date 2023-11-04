// program showing the concept of class
#include<iostream>
using namespace std;
class Demo{
    public:
        void greater(int a,int b){
            int res = a>b?a:b;
            cout<<"Greater number : "<<res<<endl;
        }
        void greater(double a,double b){
            double res = a>b?a:b;
            cout<<"Greater number : "<<res<<endl;
        }
};
int main(){
    Demo obj;
        obj.greater(34,45);
        obj.greater(12.23,4.3);
}