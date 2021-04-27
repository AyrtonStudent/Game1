#include "Player.h"

void Player::outputUserDirection(string direction)
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

void Player::outputUserPosition()
{
    cout << "Column " << xCoordinate << ", Row " << yCoordinate << endl;
}

void Player::updateUserPosition(string direction)
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

void Player::takeDamage(int damage)
{
    health -= damage;
    cout << "Damage taken " << damage << "." << endl;
    cout << "Current health " << health << "." << endl;
}

void Player::handleActionFromMap(char mapChar)
{
    if (mapChar == 'T')
    {
        cout << "You've stepped on a trap." << endl;
        takeDamage(10);
    }
}