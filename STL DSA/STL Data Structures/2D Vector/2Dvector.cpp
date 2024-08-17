#include <iostream>
#include <vector>
using namespace std;

/**
 * 2D Vector: Is a vector of vectors, it can be used to create a grid or matrix
 * 
 * 
 * 
 */
int main() {
    
    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    
    cout << "Matrix index" << '\n';
    
    // Row index is i
    for(int i{0}; i < vec.size(); ++i) {
        
        // Column index is j
        for(int j{0}; j < vec.size(); ++j) {
            cout << "vec[" << i << "][" << j << "]"<< '\n';
        }
    }

    cout << '\n';
    cout << "Matrix i and j index" << '\n';
    cout << '\n';
    for(int i{0}; i < vec.size(); ++i) {
        for(int j{0}; j < vec.size(); ++j) {
            cout << "Row " << i << " Column " << j << '\n';
        }
    }

    int count {0};
    for(int i{0}; i < vec.size(); ++i) {   
        for(int j{0}; j < vec.size(); ++j) {
            if(count % 3 == 0) {
                cout << '\n';
            }
            count++;
            cout << vec[i][j];
        }
    }

    return 0;
}