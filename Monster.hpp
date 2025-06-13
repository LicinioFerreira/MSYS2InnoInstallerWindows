#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "Point.hpp"

class Monster {
private:
    Point pos;
    bool visible;

public:
    Monster();
    void hide();
    void show();
    void setPos(Point);
    Point getPos() const;
    void translate(Point);
    bool isVisible() const;
};

#endif