#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myfile("message.txt");
    string str;
    if(!myfile){
        cout<<"cannot open this file"<<endl;
        exit(0);
    }
    while(1){
        myfile>>str;
        if(myfile.eof()){
            break;
        }
        cout<<str;
    }
    myfile.close();
}