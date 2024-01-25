#include<iostream>
using namespace std;
class Stu{
    int id;
    char name[25];
    public:
    friend void operator>>(istream &in, Stu &s){
        cout<<"Enter stu id, name:"<<endl;
        in>>s.id>>s.name;
    }
    friend void operator<<(ostream &out, Stu &s){
        out<<"Id= "<<s.id<<endl;
        out<<"Name= "<<s.name<<endl;
    }
};
int main(){
    Stu s;
    cin>>s;
    cout<<s;
    return 0;
}