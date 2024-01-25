#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Enter the number of rows and column : "<<endl;
    cin >>r>>c;

    int arr[r][c];
    cout << "Enter the elements of matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}