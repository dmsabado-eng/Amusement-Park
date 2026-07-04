#include <iostream>
using namespace std;

int main() {
    int age;
    int height;

    cout << "Welcome to the amusement park ride checker!" << endl;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in inches: ";
    cin >> height;

    if (age >= 12 && height >= 48) {
        cout << "You are eligible to ride!" << endl;
    } 
    else if (age < 12 && height < 48) {
        cout << "Sorry, you are too young and not tall enough to ride." << endl;
    } 
    else if (age < 12) {
        cout << "Sorry, you are too young to ride." << endl;
    } 
    else {
        cout << "Sorry, you are not tall enough to ride." << endl;
    }

    return 0;
}
