class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    std::unordered_map<int, int> hashmap;

    for(int i{0}; i < nums.size(); ++i)
    {
        int ans = target - nums[i];

        if(hashmap.find(ans) !=hashmap.end())
        {
            return {hashmap[ans], static_cast<int>(i)};
        }
        hashmap[nums[i]] = static_cast<int>(i);
    }

return {(-1, -1)};
    }
};