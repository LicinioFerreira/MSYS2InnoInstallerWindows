#include "Random.hpp"
#include <cstdlib>

int Random::get(int min, int max) {
    return rand() % (max - min + 1) + min;
}