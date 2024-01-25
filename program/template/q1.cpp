#include<iostream>
using namespace std;
template<class t>
class vector{
    public:
    t *arr;
    int size;
    vector(int m){
        size = m;
        arr = new t[size];
    }
    t dotproduct(vector &v){
        t d = 0;
        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    vector <float>v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 3.1; 
    v1.arr[2] = 1.4; 

    vector <float>v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 0.6;
    v2.arr[2] = 1.7;

    float a = v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}