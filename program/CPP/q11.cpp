#include<iostream>
using namespace std;
class A{
    int size;
    char arr[30];
    public:
    A(){
        size = 0;
    }
    A(int s){
        size = s;
    }
    void set(){
        cout<<"Enter the element of array: "<<endl;
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
    }
    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    A operator|(A a2);
}
A A::operator|(A a2){
    A temp;
    bool flag = true;

    for(int i=0; i<size; i++){
        for(int j=0; j<a2.size; j++){
            if(arr[i] == a2.arr[j]){
                for(int k=0; k<temp.size; k++){
                    if(arr[i] == temp.arr[k]){
                        flag = flag;
                    }
                }
            }
        }
    }
}
int main(){

}