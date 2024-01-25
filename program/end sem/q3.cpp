#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream op_file("test.txt");
    op_file<<"hii I am Saket "<<endl;
    op_file<<"where are you "<<endl;
    op_file.close();
    ifstream ip_file("test.txt");
    
    while(1){
        ch = ip_file.get();
        if(ip_file.eof())
            break;
        cout<<ch;
    }
    ip_file.close();
    return 0;
}