#include<iostream>
using namespace std;
class demo{
    int m, n;
    public:
    demo(int x,int y){
        m=x;
        n=y;
        cout<<"Parametrised constructor"<<endl;
    }

    demo(demo &x){
        m = x.m;
        n = x.n;
        cout<<"Copy constructor"<<endl;
    }
    void display(){
        cout<<"m: "<<m<<endl;
        cout<<"n: "<<n<<endl;
    }
};
int main(){
    demo obj1(5,9);
    demo obj2(obj1);
    demo obj3 = obj2;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}