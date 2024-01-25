#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        int row, col;
        cout<<"enter the row of matrix: ";
        cin>>row;
        cout<<"enter the col of matrix: ";
        cin>>col;

        int matrix[row][col];
        cout<<"enter the element of matrix: "<<endl;
        for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                        cin>>matrix[i][j];
                }
        }
        cout<<endl;

        for(int k=0; k<row; k++){
            for(int i=0; i<row; i++){
                int count=0;
                int count1=0;
                for(int j=0; j<col; j++){
                    if(matrix[i][j]==1){
                        count++;
                    }
                    if(matrix[i+1][j]==1){
                        count1++;
                    }
                }
                if(count1 > count){
                    for(int j=0; j<col; j++){
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[i+1][j];
                        matrix[i+1][j] = temp;
                    }
                }
            }
        }

        for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                        cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
        }
        return 0;
}