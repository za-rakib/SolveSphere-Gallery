
#include <iostream>
#include <string>

bool isDangerous(const std::string& situation) {
    int consecutiveCount = 1;

    for (size_t i = 1; i < situation.length(); ++i) {
        if (situation[i] == situation[i - 1]) {
            consecutiveCount++;
        } else {
            consecutiveCount = 1;
        }

        if (consecutiveCount >= 7) {
            return true; // Situation is dangerous
        }
    }

    return false; // Situation is not dangerous
}

int main() {
    std::string situation;
    
    // Input the current situation
    std::cout << "Enter the current situation (a string of 0s and 1s): ";
    std::cin >> situation;

    // Check if the situation is dangerous
    if (isDangerous(situation)) {
        std::cout << "The situation is dangerous." << std::endl;
    } else {
        std::cout << "The situation is not dangerous." << std::endl;
    }

    return 0;
}
