#include <iostream>

using namespace std;


#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H


class Player
        {
    public:
        int xCoordinate = 4;
        int yCoordinate = 4;
        int health = 100;

        void outputUserDirection(string direction);
        void outputUserPosition();
        void updateUserPosition(string direction);
        void takeDamage(int damage);
        void handleActionFromMap (char mapChar);

};




#endif //GAME_PLAYER_H
