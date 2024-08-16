#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <map>
#include <list>
#include <tuple>
#include <set>
#include <unordered_set>

using namespace std;

int main() {

    std::vector<std::vector<std::string>> board = {
        {".", ".", "4", ".", ".", ".", "6", "3", "."},
        {".", ".", ".", ".", ".", ".", ".", ".", "."},
        {"5", ".", ".", ".", ".", ".", ".", "9", "."},
        {".", ".", ".", "5", "6", ".", ".", ".", "."},
        {"4", ".", "3", ".", ".", ".", ".", ".", "1"},
        {".", ".", ".", "7", ".", ".", ".", ".", "."},
        {".", ".", ".", "5", ".", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", ".", ".", ".", "."}
    };

    /* 
    1. Iterate through rows

    2. Iterate through columns

    3. Check 3x3
    */
    unordered_set<char> rows;
    unordered_set<char> columns;
    map<pair<int, int>, unordered_set<char>> ans;

    // Check rows
    for(int i{0}; i < board.size(); ++i) {
        rows.clear();
        for(int j{0}; j < board.size(); ++j) {
            // Go to next column in row
            if(board[i][j] == '.' || board[i][j] == ',') {
                continue; // Skip to next iteration
            }

            if(rows.find(board[i][j]) !=rows.end()) {
                return false;
            }            
            rows.insert(board[i][j]);
        }
    }

    // Check columns
    for(int j{0}; j < board.size(); ++j) {
        columns.clear();
        for(int i{0}; i < board.size(); ++i) {
            // Go to next row in column
            if(board[i][j] == '.' || board[i][j] == ',') {
                continue; // Skip to next iteration
            }
           
            if(columns.find(board[i][j]) !=columns.end()) {
                return false;
            }            
            columns.insert(board[i][j]);
        }
    }

    // Check 3x3
    for(int i{0}; i < board.size(); ++i) {
        for(int j{0}; j < board.size(); ++j) {
            // Go to next column in row
            if(board[i][j] == '.' || board[i][j] == ',') {
                continue; // Skip to next iteration
            }

            int row1 = i / 3;
            int col1 = j / 3;

            if(ans[make_pair(row1, col1)].count(board[i][j])) {
                return false;
            }   

            ans[make_pair(row1, col1)].insert(board[i][j]);
        }
    }

    return 0;
}

/* 
         0     1     2
      |0 1 2|3 4 5|6 7 8|
     0
   0 1
     2

     3
   1 4
     5

     6
   2 7
     8 

    row / 3 = index
    col / 3 = index

    By dividing the row and col by 3 we get the quadrant location for the 

*/