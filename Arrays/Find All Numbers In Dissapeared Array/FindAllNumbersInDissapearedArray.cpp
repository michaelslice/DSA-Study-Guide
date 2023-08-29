class Solution {
public:
    int countSeniors(vector<string>& details) {
    
    int count{0}; // create a variable to store the count 

    for(auto const& num : details) // iterate through the vectors 
    {
        int data = (num[11] - '0') * 10 + (num[12] - '0'); // takes the persons name from the string and converts it to   its coresponding integer value
            if (data > 60) 
            {
              count++; // if data is over 60 returns the integer of people older than 60  
            }
    }

return count;

    }
};