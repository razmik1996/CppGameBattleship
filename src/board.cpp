#include "board.hpp"

const int Board::m_size = 10;

Board::Board():
m_internshipCount(4), m_juniorshipCount(3), 
m_middleshipCount(2), m_seniorshipCount(1) 
{
    m_ptr = new int*[m_size];
    for(int i = 0; i < m_size; i++) {
        m_ptr[i] = new int[m_size];
    }
    int shipsCount = m_internshipCount + m_juniorshipCount + 
    m_middleshipCount + m_seniorshipCount;
    m_ships = new Ship*[shipsCount];
}

int Board::getInternshipCount() const 
{
    return m_internshipCount;
}

int Board::getJuniorshipCount() const 
{
    return m_juniorshipCount;
}

int Board::getMiddleshipCount() const 
{
    return m_middleshipCount;
}

int Board::getSeniorshipCount() const 
{
    return m_seniorshipCount;
}

int Board::getSize() 
{
    return m_size;
}

void Board::setShipOnBoard(Ship* ptr, Location startLoc, Direct direction) 
{
    
}

void Board::randShipOnBoard() 
{

}

bool Board::checkLocation(int size, Location location, Direct direction) 
{

}

bool Board::checkNearLocation(int size, Location location, Direct direction) 
{

}

void Board::printBoardForPlayer() 
{

}

void Board::printBoardForEnemy() 
{

}