#include<iostream>
using namespace std;
int main(){
    int found = 0, count = 5;
    if(!found || --count == 0)
        cout<<"danger"<<endl;
    cout<<"count= "<<count<<endl;

    return 0;
}