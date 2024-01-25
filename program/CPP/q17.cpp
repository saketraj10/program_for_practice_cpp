#include <iostream>
using namespace std;
int main() {
    int num,rem;
    int rev=0;
    cout<<"Enter any number: "<<endl;
    cin>>num;
    while(num>0){
        rem = num % 10;
        num = num / 10;
        rev = (rev*10) + rem;
    }
    cout<<rev;

    return 0;
}