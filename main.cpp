#include <iostream>
#include <string>
#include "FindPermutation.hpp"

int main() {
  try {
    std::string text, str;
    std::cout << "Input text:\n";
    std::getline(std::cin, text);
    std::cout << "Input string:\n";
    std::getline(std::cin, str);
    int pos = FindPermutation(text, str);
    std::cout << "First position is " << pos << std::endl;
    return 0;
  }
  catch (const std::exception& e) {
    std::cerr << e.what();
    return 1;
  }
}