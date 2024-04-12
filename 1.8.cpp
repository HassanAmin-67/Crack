//1.8 Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.
#include <iostream>
using namespace std;

void perform(int matrix[3][3], int row, int col) {
    // Set entire row to zero
    for (int i = 0; i < 3; i++) {
        matrix[i][col] = 0;
    }

    // Set entire column to zero
    for (int j = 0; j < 3; j++) {
        matrix[row][j] = 0;
    }
}

int main() {
    // Example matrix: 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 0},
        {7, 8, 9}
    };

    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(matrix[i][j] == 0){
                perform(matrix, i, j);
            }
        }
    }

    cout << "After Zero Matrix algorithm:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
