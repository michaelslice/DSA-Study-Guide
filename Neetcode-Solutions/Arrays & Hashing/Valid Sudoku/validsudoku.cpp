#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <map>
#include <list>
#include <tuple>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
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

    return true;
    }
};

