#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Course {
private:
    string name;
    int registrationNumber;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter registration number: ";
        cin >> registrationNumber;
    }

    void showData()  {
        cout << "Name: " << name << "\nRegistration Number: " << registrationNumber << endl;
    }
};

class RegularCourse : public Course {
private:
    int marks[5]; // assuming 5 subjects

public:
    void getData()  {
        Course::getData(); // Call base class function
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cout<<"enter marks "<<i<<" : ";
            cin >> marks[i];
        }
    }

    void showData()   {
        Course::showData(); // Call base class function
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    // Function to calculate average marks
    double calculateAvg()  {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return (total/5.0);
    }
};

class OnlineCourse : public Course {
private:
    int marks[5]; // assuming 5 subjects

public:
    void getData()  {
        Course::getData(); // Call base class function
        cout << "Enter online course marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cout<<"enter marks "<<i<<" : ";
            cin >> marks[i];
        }
    }

    void showData()   {
        Course::showData(); // Call base class function
        cout << "Online Course Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    // Function to calculate average marks
    double calculateAvg()  {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return (total/5.0);
    }
};

int main() {
    OnlineCourse o;
    RegularCourse r;
    cout<<"enter data for online course : "<<endl;
    o.getData();
    cout<<endl;
    
    
    cout<<"enter data for regular course : "<<endl;
    r.getData();
    cout<<endl;

    ofstream outputForOnlineCourse("online.txt",ios::out);
    ofstream outputForRegularCourse("regular.txt",ios::out);
    
    outputForOnlineCourse.write((char *)&o,sizeof(o));
    outputForRegularCourse.write((char *)&r,sizeof(r));

    outputForOnlineCourse.close();
    outputForRegularCourse.close();


    ifstream inputForOnlineCourse("online.txt",ios::in);
    ifstream inputForRegularCourse("regular.txt",ios::in);

    
    OnlineCourse o1;
    RegularCourse r1;

    inputForOnlineCourse.read((char *)&o1,sizeof(o1));
    inputForRegularCourse.read((char *)&r1,sizeof(r1));

    cout<<endl<<"output from txt"<<endl;

    cout<<endl<<"Online course"<<endl;
    o1.showData();
    cout<<"avg : "<<o1.calculateAvg();

    cout<<endl<<endl<<endl;

    cout<<endl<<"Regular course"<<endl;
    r1.showData();
    cout<<"avg : "<<r1.calculateAvg();

    inputForOnlineCourse.close();
    inputForRegularCourse.close();
    return 0;
}