#include "Keyboard.hpp"
#include <iostream>

char Keyboard::readKey() {
    char c;
    std::cin >> c;
    return c;
}