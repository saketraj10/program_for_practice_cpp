#include<iostream>
using namespace std;
class Matrix{
    int rows;
    int cols;
    int arr[30][30];
    public:
    Matrix(){
        rows = 0;
        cols = 0;
    }
    Matrix(int r, int c){
        rows = r;
        cols = c;
    }
    void set(){
        cout<<"Enter the element of 2d array: "<<endl;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cin>>arr[i][j];
            }
            cout<<endl;
        }
    }
    void display(){
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend Matrix operator*(int x, Matrix M1);
};
Matrix operator*(int x, Matrix M1){
    Matrix temp(M1.rows, M1.cols);
    for(int i=0; i<M1.rows; i++){
        for(int j=0; j<M1.cols; j++){
            temp.arr[i][j] = x * M1.arr[i][j];
        }
    }
    return temp;
} 

int main(){
    int r,c,x;
    cout<<"Enter the rows of 2d array: "<<endl;
    cin>>r;
    cout<<"Enter the cols of 2d array: "<<endl;
    cin>>c;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;

    Matrix M1(r,c), M2(r,c);

    M1.set();
    M2 = x * M1;

    cout<<"Display of M1 matrix: "<<endl;
    M1.display();

    cout<<"Display of M2 matrix: "<<endl;
    M2.display();

    return 0;
}