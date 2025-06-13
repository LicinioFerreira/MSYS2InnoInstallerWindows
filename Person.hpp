#ifndef PERSON_HPP
#define PERSON_HPP

#include "Point.hpp"

class Person {
private:
    Point pos;
    bool visible;

public:
    Person();
    void hide();
    void show();
    void setPos(Point);
    Point getPos() const;
    void drag(Point);
    void jump();
};

#endif