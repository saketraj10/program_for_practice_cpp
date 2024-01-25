#include<iostream>
using namespace std;
class marks{
    int math, sci;
    public:
    marks(){
        cout<<"inside default constructor"<<endl;
        cout<<"C++ object created"<<endl;
    }
    ~marks(){
        cout<<"inside destructor"<<endl;
        cout<<"C++ object destroy"<<endl;
    }
};
int main(){
    marks m1;
    marks m2;
}