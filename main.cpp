#include "Game.hpp"
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));
    Game jogo;
    jogo.run();
    return 0;
}