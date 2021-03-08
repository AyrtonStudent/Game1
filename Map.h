//
// Created by ayrto on 08/03/2021.
//

#ifndef GAME_MAP_H
#define GAME_MAP_H


class Map
{
public:
    char map[10][10] =
            {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', 'T', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
             {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};
    char getCharAt(int x, int y);
}

#endif //GAME_MAP_H
