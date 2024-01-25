#include<iostream>
using namespace std;

class A {
public:
    int a[100], size;

    // Default constructor
    A() {
        size = 0;
    }

    // Parameterized constructor
    A(int x) {
        size = x;
    }

    // Function to set elements of the array
    void set() {
        for (int i = 0; i < size; i++) {
            cin >> a[i];
        }
    }

    // Overloaded ^ operator to find the intersection of two A objects
    A operator^(A &x2) {
        A temp;
        temp.size = 0; // Initialize the size of the temporary array to 0
        bool flag = true;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < x2.size; j++) {
                if (a[i] == x2.a[j]) {
                    // Add the common element to the temporary array
                    for(int k=0; k<temp.size; k++){
                        if(a[i] == temp.a[k]){
                            flag = false;
                        }
                        
                        
                        
                    }
                    if(flag){
                    temp.a[temp.size] = a[i];
                    temp.size++; // Increment the size
                    }
                    flag = true;
                }
            }
        }
        return temp;
    }

    // Function to display elements of the array
    void display() {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    A x1(4), x2(5), x3(4);
    cout << "Enter first array:" << endl;
    x1.set();
    cout << "Enter second array:" << endl;
    x2.set();

    x3 = x1 ^ x2;

    cout << "Intersection of the two arrays: ";
    x3.display();
    
    return 0;
}
