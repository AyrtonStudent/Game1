using namespace std;
#include <iostream>

class Player 
{	
public:
	int xCoordinate = 0;
	int yCoordinate = 0;

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
		cout << xCoordinate << "," << yCoordinate << endl;
	}

	void updateUserPosition(string direction)
	{
		if (direction == "North")
		{
			yCoordinate++;
		}
		else if (direction == "East")
		{
			xCoordinate++;
		}
		else if (direction == "South")
		{
			yCoordinate--;
		}
		else if (direction == "West")
		{
			xCoordinate--;
		}
		outputUserPosition();
	}
};

int main()
{
	Player player;
	

	while (true)
	{
		string playerInstruction = "Input player movement.";
		cout << playerInstruction << endl;
		string input;
		cin >> input;
		player.outputUserDirection(input);
		player.updateUserPosition(input);
	}
}