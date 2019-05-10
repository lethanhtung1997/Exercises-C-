#include <iostream>
#include <string>
using namespace std;

enum Gender {
    male = 1,
    female = 2,
    other = 3
};

struct HocSinh {
    string name;
    float mark;
    int gender;
};

void input(HocSinh array[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Name: ";
        cin>>array[i].name;
        cout<<"Mark: ";
        cin>>array[i].mark;
        cout<<"Gender(1: Male, 2: Female, 3: Other): ";
        cin>>array[i].gender;
    }
}

void output(HocSinh array[], int n) {
    for (int i = 0; i < n; i++) {
        if ((array[i].mark < 4.0 && array[i].gender == male) || (array[i].mark >= 9 && array[i].gender == female)) {
            cout<<"Name: "<<array[i].name<<endl;
            cout<<"Mark: "<<array[i].mark<<endl;
            cout<<"Gender: "<<array[i].gender<<endl;
        }
    }
}

int main() {
    HocSinh* hocsinh;
    int totalStudent;
    cout<<"Number of student: ";
    cin>>totalStudent;
    hocsinh = new HocSinh[totalStudent];
    input(hocsinh, totalStudent);
    output(hocsinh, totalStudent);
    
    return 1;
}
