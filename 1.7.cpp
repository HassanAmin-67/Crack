#include <iostream>
using namespace std;

int main() {
    // Example matrix: 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Reversed matrix:" << endl;
    for (int i = 2; i >= 0; i--) {
        for (int j = 2; j >= 0; j--) { 
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
