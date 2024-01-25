#include<iostream>
using namespace std;
class Matrix{
    int size;
    int arr[30];
    public:
    Matrix(){
        size = 0;
    }
    Matrix(int s){
        size = s;
    }
    void set(){
        cout<<"Enter the element of array: "<<endl;
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        cout<<endl;
    }
    Matrix operator*(int x){
        Matrix temp(size);
        
        for(int i=0; i<size; i++){
            temp.arr[i] = arr[i] * x;
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
    int x;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;

    Matrix M1(5), M2(5);
    M1.set();

    M2 = M1 * x;
    M2.display();

    return 0;
}