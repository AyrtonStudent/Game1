using namespace std;
#include <iostream>

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

void outputUserPosition(int xcoordinate, int ycoordinate)
{
	cout << xcoordinate << "," << ycoordinate << endl;
}

void updateUserPosition(string direction, int &xcoordinate, int &ycoordinate)
{
	if (direction == "North")
	{
		ycoordinate++;
	}
	else if (direction == "East")
	{
		xcoordinate++;
	}
	else if (direction == "South")
	{
		ycoordinate--;
	}
	else if (direction == "West")
	{
		xcoordinate--;
	}
	outputUserPosition(xcoordinate, ycoordinate);
}

int main()
{
	int xCoordinate = 0;
	int yCoordinate = 0;

	while (true)
	{
		string playerInstruction = "Input player movement.";
		cout << playerInstruction << endl;
		string input;
		cin >> input;
		outputUserDirection(input);
		updateUserPosition(input, xCoordinate, yCoordinate);
	}
}