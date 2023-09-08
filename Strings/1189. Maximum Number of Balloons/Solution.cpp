class Solution {
public:
    int maxNumberOfBalloons(string text) {

    int b_count{0};
    int a_count{0};
    int l_count{0};
    int o_count{0};
    int n_count{0};

    for(char c: text)
    {
        if ( c == 'b')
        {
            ++b_count;
        }
        else if (c == 'a')
        {
           ++a_count;
        }
        else if (c == 'l')
        {
           ++l_count;
        }
        else if (c == 'o')
        {
           ++o_count;
        }
        else if (c == 'n')
        {
           ++n_count;
        }
    }

int min_occurance = std::min({b_count, a_count, l_count / 2, o_count / 2, n_count});

return min_occurance;
    }
};