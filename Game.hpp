#ifndef GAME_HPP
#define GAME_HPP

#include "Person.hpp"
#include "Monsters.hpp"
#include "Keyboard.hpp"
#include "Random.hpp"
#include "Display.hpp"

class Game {
private:
    Person pessoa;
    Monsters monstros;
    Display display;
    Random rand;
    Keyboard keyboard;

public:
    void run();
};

#endif