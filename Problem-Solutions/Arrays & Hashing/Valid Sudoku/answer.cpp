#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <map>
#include <list>
#include <tuple>
#include <pair 
#include <set>
#include <unordered_set>
using namespace std;

int main() {

    std::vector<std::vector<std::string>> board = {
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


    /* 
    1. Iterate through rows

    2. Iterate through columns

    3. Check 3x3
    */
    int count{0};
    unordered_set<char, int> rows;
    unordered_set<char, int> columns;
    unordered_set<pair<int, int>, int> ans;

    // Check rows
    for(int i{0}; i < board.size(); ++i) {
        for(int j{0}; j < board.size(); ++j) {
            // Go to next column in row
            if(board[i][j] == '.' || ',') {
                continue; // Skip to next iteration
            }
            
            rows[board[i][j]]++;
            count++;

            if(rows[board[i][j]] > 2) {
                return false;
            }
            if(count % 9 == 0) {
                rows.clear();
            }
        }
    }

    // Check columns
    for(int j{0}; j < board.size(); ++j) {
        for(int i{0}; i < board.size(); ++i) {
            // Go to next row in column
            if(board[j][i] == '.' || ',') {
                continue;
            }
            
            columns[board[j][i]]++;
            count++;

            columns.find(board[j][i])

            if(columns[board[j][i]] > 2) {
                return false;
            }
            if(count % 9 == 0) {
                columns.clear();
            }
        }
    }

    // Check 3x3
    count = 0;
    for(int i{0}; i < board.size(); ++i) {
        for(int j{0}; j < board.size(); ++j) {
            // Go to next column in row
            if(board[i][j] == '.' || ',') {
                continue;
            }

            int row1 = i / 3;
            int col1 = j / 3;

           ans.insert({ans[pair(row1, col1)], board[i][j]++});

            if(ans[pair(row1, col1)] > 2) {
                return false;
            }
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