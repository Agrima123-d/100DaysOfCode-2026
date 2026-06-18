#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;


    vector<vector<int>> matrix(rows, vector<int>(cols));


    cout << "Enter matrix elements:" << endl;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }


    vector<vector<int>> result(cols, vector<int>(rows));


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {

            result[j][i] = matrix[i][j];

        }
    }


    cout << "Transpose Matrix:" << endl;

    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {

            cout << result[i][j] << " ";

        }
        cout << endl;
    }


    return 0;
}