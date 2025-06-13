#include "Game.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

void Game::run() {
    pessoa.setPos(Point(25, 25));

    for (int i = 0; i < 5; ++i) {
        Monster m;
        m.setPos(Point(rand.get(0, 49), rand.get(0, 49)));
        monstros.insert(m);
    }

    char comando;
    do {
        // limpar a tela
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        std::vector<std::string> grid(50, std::string(50, '.'));

        // colocar monstros
        for (const auto& m : monstros.getAll()) {
            if (m.isVisible()) {
                Point mp = m.getPos();
                if (mp.x >= 0 && mp.x < 50 && mp.y >= 0 && mp.y < 50)
                    grid[mp.y][mp.x] = 'M';
            }
        }

        // colocar jogador
        Point pos = pessoa.getPos();
        if (pos.x >= 0 && pos.x < 50 && pos.y >= 0 && pos.y < 50)
            grid[pos.y][pos.x] = '@';

        // imprimir grid
        for (const auto& linha : grid)
            std::cout << linha << std::endl;

        std::cout << "Use w/a/s/d para mover, q para sair." << std::endl;
        comando = keyboard.readKey();

        Point delta;
        switch (comando) {
            case 'w': delta = Point(0, -1); break;
            case 's': delta = Point(0, 1);  break;
            case 'a': delta = Point(-1, 0); break;
            case 'd': delta = Point(1, 0);  break;
            default:  delta = Point(0, 0);  break;
        }

        pessoa.drag(delta);
        if (monstros.detectCollisions(pessoa.getPos())) {
            std::cout << "Colisão com monstro!" << std::endl;
        }

    } while (comando != 'q');
}