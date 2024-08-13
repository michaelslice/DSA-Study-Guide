#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    
    factorial(10);
    
    return 0;
}

// Calculate Factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        cout << n << '\n';
        return n * factorial(n - 1);
    }
}

// Sum of Elements in Vector
int sumVector(const vector<int>& vec, int index) {
    if(index == vec.size()) {
        return 0;
    }
    return vec[index] + sumVector(vec, index + 1);
}

// Finding the Maximum Element in a Vector
int findMax(const vector<int>& vec, int index) {
    if (index == vec.size()) {
        return 0;
    }
    int maxInRest = findMax(vec, index + 1);
    return max(vec[index], maxInRest);
}

// Reverse a Vector
void reverseVector(vector<int>& vec, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(vec[start], vec[end]);
    
    reverseVector(vec, start + 1, end  - 1);
}