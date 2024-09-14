#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::string word;
    std::unordered_map<char, int> letterCount;

    // Ask for user input
    std::cout << "Enter a word: ";
    std::cin >> word;

    // Count the letters
    for (char c : word) {
        letterCount[c]++;
    }

    // Display the letter counts
    for (const auto& pair : letterCount) {
        std::cout << pair.first << " = " << pair.second << std::endl;
    }

    // Display total number of letters
    std::cout << "Total number of letters = " << word.length() << std::endl;

    return 0;
}
