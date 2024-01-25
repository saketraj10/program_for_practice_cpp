#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile("message.txt");
    if(!myfile){
        cout<<"cannot open this file"<<endl;
        return 1;
    }
    myfile<<"hello saket"<<endl;
    myfile<<"how are you"<<endl;
    myfile.close();
    return 0;
}