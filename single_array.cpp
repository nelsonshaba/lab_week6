#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Assign a value to the dynamically allocated integer
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Assign a value to the dynamically allocated string
    cout << "Enter a string value: ";
    cin.ignore(); // Ignore the newline character in the input buffer
    getline(cin, *dynamicString);

    // Output the value of the dynamically allocated integer
    cout << "Value of the dynamically allocated integer: " << *dynamicInt << endl;

    // Output the value of the dynamically allocated string
    cout << "Value of the dynamically allocated string: " << *dynamicString << endl;

    // Free dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
