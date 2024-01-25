#include<iostream>
#include<fstream>
using namespace std;
class stu{
    int id;
    char name[20];
    public:
    void getstu(){
        cout<<"Enter stuid, name: "<<endl;
        cin>>id>>name;
    }
};
int main(){
    stu s;
    ofstream file;
    file.open("stu.dat");
    char op;
    do{
        s.getstu();
        file.write((char *)&s, sizeof(s));
        cout<<"one row created"<<endl;
        cout<<"Any more student[y/n]"<<endl;
        cin>>op;
    }while(op=='Y'||op=='y');
    file.close();
    return 0;
}