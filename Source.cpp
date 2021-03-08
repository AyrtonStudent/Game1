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
		int damage = 13;
		player.outputUserDirection(input);
		player.updateUserPosition(input);
		player.takeDamage(damage);
		map.getCharAt(player.xCoordinate, player.yCoordinate);
	}
}