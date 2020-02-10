#include "board.hpp"
#include <iomanip>

const int Board::m_size = 10;

Board::Board():
m_internshipCount(0), m_juniorshipCount(0), 
m_middleshipCount(0), m_seniorshipCount(0) 
{
    m_ptr = new int*[m_size];
    for(int i = 0; i < m_size; i++) {
        m_ptr[i] = new int[m_size];
    }
    int shipsCount = m_internshipCount + m_juniorshipCount + 
    m_middleshipCount + m_seniorshipCount;
    m_ships = new Ship*[shipsCount];
    initializeBoard();
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

void Board::initializeBoard() {
    for(int i = 0; i < m_size; ++i) {
        m_ptr[i][i] = 0;
    }
}

void Board::setShipOnBoard(Ship* ptr, Location startLoc, Direct direction) 
{
    if (1 == ptr->getSize()) {
        if (m_internshipCount < g_maximumInternships) {
            m_ptr[startLoc.getX()][startLoc.getY()] = 1;
            ++m_internshipCount;
        } else {
            return;
        }
    }
}

void Board::setShipOnBoard(Location startLoc, Location endLoc) {

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
    std::cout << "   A B C D E F G H I J" << std::endl;
    for(int i = 0; i < m_size; ++i) {
        std::cout << std::setw(2) << i << "|";
        for(int j = 0; j < m_size; ++j) {
            if(0 == m_ptr[i][j]) {
                std::cout << " " << "|";
            } else if(1 == m_ptr[i][j]) {
                std::cout << "*" << "|";
            } else if(2 == m_ptr[i][j]) {
                std::cout << "X" << "|";
            } else if(3 == m_ptr[i][j]) {
                std::cout << "#" << "|";
            }
        }
        std::cout << std::endl;
    }
}

void Board::printBoardForEnemy() 
{
    std::cout << "   A B C D E F G H I J" << std::endl;
    for(int i = 0; i < m_size; ++i) {
        std::cout << std::setw(2) << i << "|";
        for(int j = 0; j < m_size; ++j) {
            if(0 == m_ptr[i][j] || 1 == m_ptr[i][j]) {
                std::cout << " " << "|";
            } else if(2 == m_ptr[i][j]) {
                std::cout << "X" << "|";
            } else if(3 == m_ptr[i][j]) {
                std::cout << "#" << "|";
            }
        }
        std::cout << std::endl;
    }
}

Board::~Board() {
    for(int i = 0; i < m_size; ++i) {
        delete[] m_ptr[i];
    }
    delete[] m_ptr;
    delete[] m_ships;
}