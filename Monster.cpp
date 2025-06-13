#include "Monster.hpp"

Monster::Monster() : visible(true) {}

void Monster::hide() { visible = false; }
void Monster::show() { visible = true; }
void Monster::setPos(Point p) { pos = p; }
Point Monster::getPos() const { return pos; }
void Monster::translate(Point delta) {
    pos.x += delta.x;
    pos.y += delta.y;
}
bool Monster::isVisible() const { return visible; }