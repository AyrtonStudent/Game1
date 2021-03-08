using namespace std;
#include <iostream>
#include "Player.h"
#include "Map.h"

int main()
{
	Player player;
	Map map;

	while (true)
	{
		string playerInstruction = "Input player movement.";
		cout << playerInstruction << endl;
		string input;
		cin >> input;
		player.outputUserDirection(input);
		player.updateUserPosition(input);
		map.getCharAt(player.xCoordinate, player.yCoordinate);
	}

	// I've cloned your repo - Joe
}