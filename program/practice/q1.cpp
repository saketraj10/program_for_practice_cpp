#include<iostream>
using namespace std;

int main() {
    int digits[] = {1, 2, 3};
    int n = 3;
    int num = 0;

    for(int i = 0; i < n; i++) {
        num *= 10;        // Multiply the current value of num by 10 before adding the new digit
        num += digits[i]; // Add the current digit to num
    }

    cout << num << endl;
    num += 1;
    cout << num << endl;

    return 0; // Added for completeness
}
