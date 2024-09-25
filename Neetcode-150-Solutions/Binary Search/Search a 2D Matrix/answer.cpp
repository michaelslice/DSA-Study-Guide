class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        vector<int> ans;
        int left{0};

        // Flatten the matrix into 1D
        for(int i{0}; i < matrix.size(); ++i){
            for(int j{0}; j < matrix[i].size(); ++j){
                ans.push_back(matrix[i][j]);
            }
        }

        int right = ans.size() - 1;

        while(left <= right){
            int mid = (left + right) / 2;
            // If mid == target return target
            if(ans[mid] == target){
                return true;
            } 
            // If the middle element is less than target
            else if(ans[mid] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};