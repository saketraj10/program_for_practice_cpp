#include<iostream>
using namespace std;
class A{
    int rows;
    int cols;
    int arr[30];
    public:
    A(){
        rows = 0;
        cols = 0;
    }
    A(int r, int c){
        rows = r;
        cols = c;
    }
    void set(){
        cout<<"Enter the 2d array element: "<<endl;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cin>>arr[i][j];
            }
            cout<<endl;
        }
    }
    void display(){
        cout<<"Enter the 2d array element: "<<endl;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend A operator>=(A a1, A a2);
    friend A operator<(A a1, A a2);
};
A operator>=(A a1, A a2){
    A temp;
    bool flag = true;
    for(int i=0; i<a1.rows; i++){
        for(int j=0 j<a1.cols; j++){
            for(int p=0; p<a2.rows; p++){
                for(int q=0; q<a2.cols; q++){
                    if(a1.arr[i][j]>=a2.arr[p][q]){
                        for(int k=0; k<temp.rows; k++){
                            for(int l=0; l<temp.cols; l++){
                                if(temp.arr[k][l]==a1.arr[i][j]){
                                    flag = false
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}