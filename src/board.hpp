#ifndef BOARD_HPP
#define BOARD_HPP
#include "internship.hpp"
#include "juniorship.hpp"
#include "middleship.hpp"
#include "seniorship.hpp"

class Board {
private: //private members
    static const int m_size;
    int **m_ptr;
    int m_internshipCount;
    int m_juniorshipCount;
    int m_middleshipCount;
    int m_seniorshipCount;
public: //public methods
    Board();
    int getInternshipCount() const;
    int getJuniorshipCount() const;
    int getMiddleshipCount() const;
    int getSeniorshipCount() const;
    static int getSize() const;
    void setShipOnBoard(Ship* ptr, Location startLoc, Direct direction);
    void randShipOnBoard();
    bool checkLocation(int size, Location location, Direct direction);
    bool checkNearLocation(int size, Location location, Direct direction);
    void printBoardForPlayer();
    void printBoardForEnemy();
};

#endif //BOARD_HPP