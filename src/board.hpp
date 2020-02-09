#ifndef BOARD_HPP
#define BOARD_HPP
#include "location.hpp"
#include "internship.hpp"
#include "juniorship.hpp"
#include "middleship.hpp"
#include "seniorship.hpp"

static const int maximumInternships = 4;
static const int maximumJuniorships = 3;
static const int maximumMidleships = 2;
static const int maximumSeniorships = 1;

class Board {
private: //private members
    static const int m_size;
    int **m_ptr;
    int m_internshipCount;
    int m_juniorshipCount;
    int m_middleshipCount;
    int m_seniorshipCount;
    Ship **m_ships;
public: //constructors and destructor
    Board();
    ~Board();
public: //public methods
    /**
    @brief get count of small ships
    */
    int getInternshipCount() const;

    /**
    @brief get count of 2 sized ships
    */
    int getJuniorshipCount() const;

    /**
    @brief get count of 3 sized ships
    */
    int getMiddleshipCount() const;

    /**
    @brief get count of 4 sized ships
    */
    int getSeniorshipCount() const;

    static int getSize();
    void setShipOnBoard(Ship* ptr, Location startLoc, Direct direction);
    void randShipOnBoard();
    bool checkLocation(int size, Location location, Direct direction);
    bool checkNearLocation(int size, Location location, Direct direction);
    void printBoardForPlayer();
    void printBoardForEnemy();
};

#endif //BOARD_HPP