class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    
    /*
    We neet to find the minimum eating speed for Koko 
    to eat all the bananas in h hours
    */ 

    int left = 0;
    int right = piles.size();

    // The min and max eating speeds
    int low = 1;
    int high{0};
    
    // Calculate the largest pile of bananas
    for(int i{0}; i < piles.size(); ++i){
        high = max(high, piles[i]);
    }

    // We need to recalculate the maximum eating speed
    int result = high;

    // We need to find the smallest possible 
    // eating speed k, that allows koko to eat all
    // the bananas in h hours
    while(low <= high){
        // Calculate the midpoint
        int k = low + (high - low) / 2;
        
        // Number of hours koko needs to 
        // finish all bananas at speed k
        long int hours{0}; 
        
        // Calculate the number of hours it 
        // would take koko to eat 
        for(int i{0}; i < piles.size(); ++i){
            hours += ceil((double) piles[i] / k);
        }

        // If koko can finish the bananas 
        // within h hours then this speed is valid
        if(hours <= h){
            result = min(result, k);
            // attempt to find an even better
            // value by reducing the upper bound
            high = k - 1;
        } else {
            // If the hours is not accepted 
            // then it is to small so increase 
            // the lower bound
            low = k + 1;
        }
    }
    return result;
    }
};