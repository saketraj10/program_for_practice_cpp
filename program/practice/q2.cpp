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

        int record[2][row];
        int l=0;
        for(int i=0; i<row; i++){
                int o_count = 0;
                int k=0;
                for(int j=0; j<col; j++){
                        if(matrix[i][j] == 1){
                                o_count++;
                        }
                }
                record[k][l] = o_count;
                record[k+1][l] = i;
                l++;
        }
	for(int i=0; i<2; i++){
                for(int j=0; j<row; j++){
                        cout<<record[i][j]<<" ";
                }
                cout<<endl;
        }
        cout<<endl;

        bool flag = true;
        for(int i=0; i<row-1; i++){
                for(int j=0; j<row-i-1; j++){
                        if(record[0][j] < record[0][j+1]){
                                swap(record[0][j],record[0][j+1]);
                                swap(record[1][j],record[1][j+1]);
                                flag = false;
                        }
                }
                if(flag)
                        break;
        }

        //sort(record[0].begin(), record[0].end());

        for(int i=0; i<2; i++){
                for(int j=0; j<row; j++){
                        cout<<record[i][j]<<" ";
                }
                cout<<endl;
        }
	
        int matrix1[row][col];

        for(int i=0; i<row; i++){
                int value = record[1][i];
                for(int j=0; j<col; j++){
                        matrix1[i][j] = matrix[value][j];
                }
        }

        cout<<"after sort each row "<<endl;
        for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                        cout<<matrix1[i][j]<<" ";
                }
                cout<<endl;
        }
        cout<<endl;
        return 0;
}