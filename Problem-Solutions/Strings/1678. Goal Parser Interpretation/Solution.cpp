class Solution {
public:
    string interpret(string command) {

    std::string answer = "";


    for(int i{0}; i < command.size(); ++i)
    {
        if(command[i] == 'G')
        {
            answer = answer + "G";
        }
        else if(command[i] == '(' && command[i + 1] == ')' && i +1< command.size())
        {
            answer = answer + "o";
            ++i;
        }
        else if(command[i] == '(' && command[i + 1] == 'a' && i + 3 < command.size())
        {
            answer = answer + "al";
            i = i + 3;
        }

    }

return answer;

    }
};