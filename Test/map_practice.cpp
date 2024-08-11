#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main() {

    vector<int> vec = {1, 10, 21, 20, 100, 2000, 1400, 1, 20, 40};
    // unordered_map<int, int> map;
    unordered_map<int, int> map;

    for(auto num: vec) {
        auto total = count(vec.begin(), vec.end(), num);

        map.insert({num, total});
    }

    for(auto num: map) {
        cout << "Key " << num.first << " Value " << num.second << '\n';
    }


    return 0;
}