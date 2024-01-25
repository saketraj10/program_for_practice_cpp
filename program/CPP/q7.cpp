#include<iostream>
using namespace std;
void lowestswitch(double x[], double y[], int size);

int main(){
    int size = 50;
    double x[size];
    double y[size];

    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    cout<<"Enter the element in x array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>x[i];
    }

    cout<<"Enter the element in y array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>y[i];
    }

    lowestswitch(x, y, size);

    cout<<"Display the element in x array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

    cout<<"Display the element in y array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<y[i] <<" ";
    }

    return 0;
}
void lowestswitch(double x[], double y[], int size){
    int xmin = 0;
    for(int i=0; i<size; i++){
        if(x[i] < x[xmin]){
            xmin = i;
        }
    }

    int ymin = 0;
    for(int i=0; i<size; i++){
        if(y[i] < y[ymin]){
            ymin = i;
        }
    }

    double temp = x[xmin];
    x[xmin] = y[ymin];
    y[ymin] = temp;
}