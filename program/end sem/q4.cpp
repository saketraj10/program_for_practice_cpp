#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    char filename[] = "Test.txt";
    char s[]= "one two  three";
    char ch;
    int i=0, pos;
    fstream file;
    file.open(filename, ios::out);
    while(s[i]!='\0'){
        file.put(s[i]);
        i++;
    }
    int len = file.tellp();
    cout<<"length of file= "<<len<<endl;
    file.close();
    file.open(filename, ios::in);
    file.seekg(0);
    while(1){
        pos = file.tellg();
        cout<<pos;
        ch = file.get();
        if(file.eof()){
            break;
        }
        cout<<"\t"<<ch<<endl;
    }
    return 0;
}