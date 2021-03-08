#include <iostream>

using namespace std;


#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H


class Player
        {
    public:
        int xCoordinate = 7;
        int yCoordinate = 12;

        void outputUserDirection(string direction);
        void outputUserPosition();
        void updateUserPosition(string direction);
};


#endif //GAME_PLAYER_H
