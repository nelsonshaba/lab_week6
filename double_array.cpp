#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Prompt the user for dimensions
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum number of rows exceeded. Setting rows to 3." << endl;
        rows = 3;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Maximum number of columns exceeded. Setting columns to 3." << endl;
        cols = 3;
    }

    // Dynamically allocate the 2D array
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    // Input values for each element of the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
