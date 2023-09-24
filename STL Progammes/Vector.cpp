#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Declaration
    vector<int> nums;

    // Declaration and Initialization
    vector<int> numbers = {1, 2, 3};
    vector<int> valuesToAdd = {4, 5, 6};

    // Insert elements at the end of vector

    // Add two vectors
    numbers.insert(numbers.end(), valuesToAdd.begin(), valuesToAdd.end());

    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;


    return 0;
}