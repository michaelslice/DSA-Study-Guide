class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    
    std::unordered_map<int, int> hashmap;
    std::vector<int> vec;


    for(const auto& num: nums)
    {
        hashmap[num]++;
    }

    for(const auto& ans: hashmap)
    {
        if(ans.second > 1)
        {
            vec.push_back(ans.first);
        }
    }
return vec.front();
    }
};