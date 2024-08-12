#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;
int main() {
    
    vector<int> vec = {1, 2, 2, 43, 1 ,4, 4};

    int count1 = count(vec.begin(), vec.end(), 4);

    cout << count1 << '\n';
    
    
    return 0;
}
