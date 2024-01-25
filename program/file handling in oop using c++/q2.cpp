#include<iostream>
#include<fstream>
using namespace std;
class stu{
    int id;
    char name[20];
    public:
    void putstu(){
        cout<<id<<"\t"<<name<<endl;
    }
};
int main(){
    stu s;
    ifstream file("stu.dat");
    file.read((char*)&s, sizeof(s));
    cout<<"Id\tName"<<endl;
    while(!file.eof()){
        s.putstu();
        file.read((char*)&s, sizeof(s));
    }
    file.close();
    return 0;
}