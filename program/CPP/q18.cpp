#include<iostream>
using namespace std;
int *p;
class A{
    int i;
    public;
    void putdata(){
        cin>>i;
    }
    *p = i;
    void display(){
        cout<<i;
    }
};
int main(){
    A a1;
    a1.putdata();
    *p = 5;
    a1.display();
    return 0;
}