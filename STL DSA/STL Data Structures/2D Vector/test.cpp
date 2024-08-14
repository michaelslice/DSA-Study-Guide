#include <iostream>
#include <vector>
using namespace std;

/**
 * 2D Vector: Is a vector of vectors, it can be used to create a grid or matrix
 * 
 * 
 */
int main() {
    
    std::vector<std::vector<std::string>> matrix = {
        {"5", "3", ".", ".", "7", ".", ".", ".", "."},
        {"6", ".", ".", "1", "9", "5", ".", ".", "."},
        {".", "9", "8", ".", ".", ".", ".", "6", "."},
        {"8", ".", ".", ".", "6", ".", ".", ".", "3"},
        {"4", ".", ".", "8", ".", "3", ".", ".", "1"},
        {"7", ".", ".", ".", "2", ".", ".", ".", "6"},
        {".", "6", ".", ".", ".", ".", "2", "8", "."},
        {".", ".", ".", "4", "1", "9", ".", ".", "5"},
        {".", ".", ".", ".", "8", ".", ".", "7", "9"}
    };

    int count{0};
    // Row-Wise Iteration
    // Iterate through the matrix row by row, and print by the order they appear
    cout << "Row-Wise Iteration" << '\n';
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << matrix[i][j];
            ++count;
            if(count % 9 == 0) {
                cout << '\n';
            }
        }
    }

    cout << '\n';
    count = {0};
    cout << "Column-Wise Iteration" << '\n';
    // Column-Wise Iteration
    // Iterate through the matrix column, by column, and print in transposed order
    for(int j{0}; j < matrix.size(); ++j) {
        for(int i{0}; i < matrix.size(); ++i) {
            cout << matrix[i][j];
            count++;
            if(count % 9 == 0) {
                cout << '\n';
            }
        }
    }


    return 0;
}