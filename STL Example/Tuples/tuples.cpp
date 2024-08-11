#include <iostream>
#include <utility>  // For std::pair
#include <tuple>    // For std::tuple

int main() {
    // Example with std::pair
    std::pair<int, std::string> person;  // Define a pair with an int and a string
    person = std::make_pair(1, "Alice"); // Initialize the pair with values

    std::cout << "Person ID: " << person.first << std::endl;
    std::cout << "Person Name: " << person.second << std::endl;

    // Example with std::tuple
    std::tuple<int, std::string, double> student;  // Define a tuple with an int, a string, and a double
    student = std::make_tuple(1, "Bob", 3.75);    // Initialize the tuple with values

    // Accessing tuple elements using std::get
    std::cout << "Student ID: " << std::get<0>(student) << std::endl;
    std::cout << "Student Name: " << std::get<1>(student) << std::endl;
    std::cout << "Student GPA: " << std::get<2>(student) << std::endl;

    // Using structured bindings (C++17 and later)
    auto [id, name, gpa] = student;
    std::cout << "Student ID (structured binding): " << id << std::endl;
    std::cout << "Student Name (structured binding): " << name << std::endl;
    std::cout << "Student GPA (structured binding): " << gpa << std::endl;

    // Creating a tuple with different types of elements
    auto mixedTuple = std::make_tuple(42, "Hello", 3.14, 'A');
    std::cout << "Mixed Tuple: " << std::get<0>(mixedTuple) << ", "
              << std::get<1>(mixedTuple) << ", "
              << std::get<2>(mixedTuple) << ", "
              << std::get<3>(mixedTuple) << std::endl;

    return 0;
}
