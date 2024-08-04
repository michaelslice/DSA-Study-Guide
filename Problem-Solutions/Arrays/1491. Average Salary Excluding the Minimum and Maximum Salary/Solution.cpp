class Solution {
public:
    double average(vector<int>& salary) {

    int min =* std::min_element(salary.begin(), salary.end());
    int max =* std::max_element(salary.begin(), salary.end());
    int total = salary.size();
    double sum = {0};
    
    for(int i {0}; i < total; ++i)
    {
        sum+=salary[i];
    }

    sum -= min;
    sum -= max;

  return sum / (total-2);
    }
};