#include<iostream>
using namespace std;
int main(){
    int a[]={10,2};
    int b[]={1,7};
    int temp;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(a[i]<b[j]){
                temp = a[i];
                a[i]= b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0; i<2; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<2; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}