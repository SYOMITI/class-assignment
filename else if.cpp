#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please Enter the age: ";
    cin >> age;

    if (age >= 7) {
        cout << "Admit to Grade School";
    }
    else if (age >= 5) {
        cout << "Admit to Kindergarten";
    }
    else if (age >= 3) {
        cout << "Admit to Pre-School";
    }
    else if (age >= 1) {
        cout << "Admit to Play Group";
    }
    else {
        cout << "Reject. Invalid Age";
    }

    return 0;
}
