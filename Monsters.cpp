#include "Monsters.hpp"

void Monsters::insert(Monster m) {
    elementos.push_back(m);
}

void Monsters::show() {
    for (auto &m : elementos) m.show();
}

void Monsters::move(Point delta) {
    for (auto &m : elementos) m.translate(delta);
}

bool Monsters::detectCollisions(Point p) {
    for (auto &m : elementos) {
        Point mp = m.getPos();
        if (mp.x == p.x && mp.y == p.y && m.isVisible())
            return true;
    }
    return false;
}

bool Monsters::allDead() {
    for (auto &m : elementos)
        if (m.isVisible())
            return false;
    return true;
}

const std::vector<Monster>& Monsters::getAll() const {
    return elementos;
}