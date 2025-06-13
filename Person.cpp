#include "Person.hpp"

Person::Person() : visible(true) {}

void Person::hide() { visible = false; }
void Person::show() { visible = true; }
void Person::setPos(Point p) { pos = p; }
Point Person::getPos() const { return pos; }
void Person::drag(Point delta) {
    pos.x += delta.x;
    pos.y += delta.y;
}
void Person::jump() {
    pos.y -= 1;
}