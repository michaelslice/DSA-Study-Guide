#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <string>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
    
    /* 
    Calculation
    width(i - j): Distance between two line indices
    Height: The height of the shorter line
    */

    int left{0};
    int right = height.size() - 1;

    int area{0};
    int max_area{0};

    while(left < right){
        
        int min_height = min(height[left] ,height[right]);
        int width = right - left;
        area = width * min_height;

        max_area = max(area, max_area);

        if(height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }
    return max_area;
    }
};

// Time Complexity: O(n)
// Space Complexity: (1)