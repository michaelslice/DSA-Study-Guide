#include <iostream>
#include <algorithm> // For std::min, std::max, std::minmax
#include <vector>    // For std::vector

int main() {
    // Example values
    int a = 10, b = 20;
    
    // Using std::min and std::max
    int minimum = std::min(a, b);
    int maximum = std::max(a, b);

    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;

    // Example with std::vector
    std::vector<int> numbers = {3, 5, 7, 2, 8, 6};

    // Using std::min_element and std::max_element
    auto min_elem = std::min_element(numbers.begin(), numbers.end());
    auto max_elem = std::max_element(numbers.begin(), numbers.end());

    std::cout << "Minimum element in vector: " << *min_elem << std::endl;
    std::cout << "Maximum element in vector: " << *max_elem << std::endl;

    // Using std::minmax
    auto result = std::minmax({3, 5, 7, 2, 8, 6});

    std::cout << "Minmax result - Minimum: " << result.first << std::endl;
    std::cout << "Minmax result - Maximum: " << result.second << std::endl;

    return 0;
}
