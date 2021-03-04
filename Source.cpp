using namespace std;
#include <iostream>

class Player 
{	
public:
	int xCoordinate = 4;
	int yCoordinate = 4;

	void outputUserDirection(string direction)
	{
		if (direction == "North" || direction == "East" || direction == "South" || direction == "West")
		{
			string movementOutput = "Player moved ";
			cout << movementOutput << direction << ".";
		}
		else
		{
			string incorrectInput = "Movement entered is incorrect, try again.";
			cout << incorrectInput;
		}
	}

	void outputUserPosition()
	{
		cout << "Column " << xCoordinate << ", Row " << yCoordinate << endl;
	}

	void updateUserPosition(string direction)
	{
		if (direction == "North")
		{
			yCoordinate--;
		}
		else if (direction == "East")
		{
			xCoordinate++;
		}
		else if (direction == "South")
		{
			yCoordinate++;
		}
		else if (direction == "West")
		{
			xCoordinate--;
		}
		outputUserPosition();
	}
};

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

	char getCharAt(int x, int y)
	{
		//return map and make player take damage if hits 'T'
		cout << map[y][x] << endl;
	}
};



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