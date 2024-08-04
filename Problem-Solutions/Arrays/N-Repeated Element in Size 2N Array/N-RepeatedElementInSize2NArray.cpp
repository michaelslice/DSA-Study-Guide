class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
    std::unordered_map<int, int> hashmap;

    for(int num: nums)
    {
        hashmap[num]++; // this line increments the count associated with the current number num in the hashmap
    }
    
    int most_frequent_element = 0; // declare a variable to store the most frequent element
    int max_frequency = 0; // declare a variable to store the frequency
    for(const auto& max: hashmap) // use a range based for loop to iterate through the hashmap
    {
        if (max.second > max_frequency) {
            most_frequent_element = max.first; // first is the key, set the most_frequent_element to the currenet element (key)
            max_frequency = max.second; // second is the value, set the max_frequency to the current frequency (value)
        }
    }
    // After iterating through the hashmap, you'll have identified the element with the highest frequency.
    
return most_frequent_element;

    }
};