// In C++, there are several ways to iterate through a `std::map` and retrieve key-value pairs. Below are some common methods to do this:

// ### 1. **Using a Range-Based For Loop (C++11 and later)**

// You can directly use a range-based for loop to iterate over the map's key-value pairs.

// ```cpp
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Range-based for loop
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // Using iterator
    for (std::map<int, std::string>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    // Using std::for_each and a lambda function
    std::for_each(myMap.begin(), myMap.end(), [](const std::pair<int, std::string>& pair) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    });

    // Using structured bindings (C++17)
    for (const auto& [key, value] : myMap) {
        std::cout << "Key: " << key << ", Value: " << value << std::endl;
    }

    std::map<int, std::string>::iterator it = myMap.find(2);  // Find key 2
    if (it != myMap.end()) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
    return 0;
}
