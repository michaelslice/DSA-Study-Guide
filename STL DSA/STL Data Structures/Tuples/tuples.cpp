#include <iostream>
#include <utility> 
#include <tuple>   

/**
 *  Tuple: Is a fixed size collection of heterogenuos values, 
 * 
 *  Time Complexity of Operations
 * 
 *  O(n): tuple_cat
 * 
 *  O(1): get, make_pair
 * 
 *  Space Complexity
 * 
 *  O(1): The space complexity is proportional to the amount of elements in the tuple
 * 
 */
using namespace std;
int main() {

    // Creating a tuple
    std::tuple<int, int> my_tuple(12, 10);

    int a = 12;
    int b = 10;

    // Make a pair of two objects
    std::make_pair(a, b);

    // Accessing Elements
    int num1 = std::get<0>(my_tuple);
    int num2 = std::get<1>(my_tuple);

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    
    // Tuple of Strings
    std::tuple<string, string> names("name", "test");

    // Concatenating a string
    auto combined = tuple_cat(my_tuple, names);

    return 0;
}
