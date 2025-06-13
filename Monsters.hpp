#ifndef MONSTERS_HPP
#define MONSTERS_HPP

#include "Monster.hpp"
#include <vector>

class Monsters {
private:
    std::vector<Monster> elementos;

public:
    void insert(Monster);
    void show();
    void move(Point);
    bool detectCollisions(Point);
    bool allDead();
    const std::vector<Monster>& getAll() const;
};

#endif