#include<iostream>
#include<cstring>
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
        cout<<"Enter character array: "<<endl;
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
    }
    A operator^(A& a2){
        A temp;
        bool flag = true;
        for(int i=0; i<size; i++){
            for(int j=0; j<a2.size; j++){
                if(arr[i] == a2.arr[j]){
                    for(int k=0; k<temp.size; k++){
                        if(arr[i] == temp.arr[k]){
                            flag = false;
                        }
                    }
                    if(flag){
                        temp.arr[temp.size] = arr[i];
                        temp.size++;
                    }
                    flag = true;
                }
            }
        }
        return temp;
    }
    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int x,y;
    cout<<"Enter the size of 1st array: "<<endl;
    cin>>x;
    cout<<"Enter the size of 2nd array: "<<endl;
    cin>>y;

    A a1(x), a2(y), a3;
    a1.set();
    a2.set();

    a3 = a1 ^ a2;

    cout<<"Display a1: "<<endl;
    a1.display();
    cout<<"Display a2: "<<endl;
    a2.display();
    cout<<"Display a3: "<<endl;
    a3.display();

    return 0;
}