#include<iostream>
using namespace std;
class Stu{
    private:
    int id;
    char name[25];
    public:
    void getstu(){
        cout<<"Enter stuid, name"<<endl;
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
        cout<<"Ener stu height and weight: "<<endl;
        cin>>h>>w;
    }
    void putphy(){
        cout<<"Height= "<<h<<endl;
        cout<<"Weight= "<<w<<endl;
    }
};
int main(){
    phy p;
    p.getstu();
    p.getphy();
    p.putstu();
    p.putphy();
    return 0;
    
}