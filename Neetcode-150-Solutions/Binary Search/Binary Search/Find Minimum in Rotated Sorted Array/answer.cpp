class Solution {
public:
    int findMin(vector<int>& nums) {
       sort(nums.begin(), nums.end());

        int ans{nums[0]};
        for(int i{0}; i < nums.size(); ++i){
            ans = min(ans, nums[i]);
        }
        return ans;
    }
};