#include<iostream>
using namespace std;
class Stu{
    int id;
    char name[30];
    public:
    void getstu(){
        cout<<"Enter stu id, name"<<endl;
        cin>>id>>name;
    }
    void putstu(){
        cout<<"Id= "<<id<<endl;
        cout<<"Name= "<<name<<endl;
    }
};
class phy: public Stu{
    float h,w;
    public:
    void getphy(){
        getstu();
        cout<<"Enter stu height and weight: "<<endl;
        cin>>h>>w;
    }
    void putphy(){
        putstu();
        cout<<"Height= "<<h<<endl;
        cout<<"Weight= "<<w<<endl;
    }
};
int main(){
    phy p;
    p.getphy();
    p.putphy();
}