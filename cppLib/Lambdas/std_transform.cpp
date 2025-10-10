#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values{10, 20, 30, 40};

    std::cout << "Starting vector: ";
    for (int v : values) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    auto divideByTwo = [](int x) { return x / 2; };

    // std::transform(values.begin(), values.end(), values.begin(), divideByTwo);
    std::transform(values.begin(), values.end(), values.begin(), [](int x) { return x * 2; });

    std::cout << "After transform: ";
    for (int v : values) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
numbers.begin() and numbers.end() return iterators: 
begin()
Preview: Docs Loading link description
 points to the first element of the vector; end() points to the last element. std::transform goes over that iterator range, 
 applies the lambda to each element, and writes the result to the location starting at numbers.begin(). Because the input 
 and output ranges overlap intentionally here, the transformation happens in place, overwriting the original vector.
*/