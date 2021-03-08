#include <iostream>

using namespace std;


#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H


class Player
        {
    public:
        int xCoordinate = 7;
        int yCoordinate = 12;
        int health = 100;

        void outputUserDirection(string direction);
        void outputUserPosition();
        void updateUserPosition(string direction);
        void takeDamage(int damage);

};



#endif //GAME_PLAYER_H
