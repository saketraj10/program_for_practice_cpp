#include<iostream>
#include<cstring>
using namespace std;
class Time{
    int hour, minute, second;
    char session[2];
    public:
    Time(){
        hour = 12;
        minute = 0;
        second = 0;
        strcpy(session, "am");
    }
    Time(int h){
        hour = h;
        minute = second = 0;
        strcpy(session, "am");
    }
    Time(int h, int m, int s, char se[]){
        hour = h;
        minute = m;
        second = s;
        strcpy(session, se);
    }
    void display(){
        cout<<hour<<" : "<<minute<<" : "<<second<<" "<<session<<endl;
    }
};
int main(){
    Time t1;
    Time t2(5);
    Time t3(3,4,45, "pm");
    t1.display();
    t2.display();
    t3.display();

    return 0;
}