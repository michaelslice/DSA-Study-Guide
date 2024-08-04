class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
    std::unordered_map<int, int> hashmap;
    std::vector<std::pair<int, int>> vec;

    for(auto entry: nums)
    {
        hashmap[entry]++;
    }

    for(auto entry: hashmap)
    {
        vec.push_back({entry.first, entry.second});
    }

    std::sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int> b)
    {
        return a.second > b.second;
    });

    vector<int> result;

    for(int i{0}; i < k; ++i)
    {
        result.push_back(vec[i].first);
    }

return result;
    }
};