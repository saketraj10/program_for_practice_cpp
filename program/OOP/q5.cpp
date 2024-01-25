#include<iostream>
using namespace std;
class Stu{
    int id;
    char name[20];
    public:
    void getstu(){
        cout<<"Enter stuid, name: "<<endl;
        cin>>id>>name;
    }
    void putstu(){
        cout<<"Id= "<<id<<endl;
        cout<<"Name= "<<name<<endl;
    }
};
class marks: public Stu{
    protected:
    int m1, m2, m3;
    public:
    void getmarks(){
        cout<<"Enter marks in 3 subjects: "<<endl;
        cin>>m1>>m2>>m3;
    }
    void putmarks(){
        cout<<"M1= "<<m1<<endl;
        cout<<"M2= "<<m2<<endl;
        cout<<"M3= "<<m3<<endl;
    }
};
class result: public marks{
    int tot;
    float avg;
    public:
    void show(){
        tot = m1 + m2 + m3;
        avg = tot/3.0;
        cout<<"tot= "<<tot<<endl;
        cout<<"avg= "<<avg<<endl;
    }
};
int main(){
    result r;
    r.getstu();
    r.getmarks();
    r.putstu();
    r.putmarks();
    r.show();
    return 0;
}