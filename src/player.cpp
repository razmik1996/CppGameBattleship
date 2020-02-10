#include "player.hpp"

Player::Player(std::string name):
m_name(name)
{
    m_board.initializeBoard();
}

Player::Player(const Player& other)
{

}

Player::~Player()
{

}

void Player::setName(std::string name)
{
    m_name = name;
}

std::string Player::getName() const
{
    return m_name;
}

void Player::printEachTime()
{
    std::cout << "\" \" - clean field" << std::endl;
    std::cout << "\"*\" - ship" << std::endl;
    std::cout << "\"X\" - damaged ship" << std::endl;
    setShip();
    m_board.printBoardForPlayer();
    std::cout << std::endl;
}

void Player::printForEnemy() 
{
    m_board.printBoardForEnemy();
}

void Player::setShip()
{
    Location location(5, 5);
    Internship ship(HORIZONTAL, location);
    Ship *ptr = &ship;
    m_board.setShipOnBoard(ptr, location, HORIZONTAL);
}