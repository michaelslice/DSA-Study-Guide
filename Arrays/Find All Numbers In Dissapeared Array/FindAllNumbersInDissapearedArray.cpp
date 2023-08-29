#include <iostream>

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

    int n = nums.size(); // returns the size of the vector  
    std::vector<int> freq(n+1, 0); // initializes the array to zero, and indexes from 1 to n 
    std::vector<int>res{}; // push back integers that are missing in the vector 

    for(auto num: nums)
    {
        freq[num]++; // count the occurance ofeach element in the array
    }

    for(int i{1}; i <=n; ++i)
    {
        if (!freq[i] ) { // if the i is not in the freq push it back to a new vector 
            res.push_back(i);
        }
    }
return res;
    }
};