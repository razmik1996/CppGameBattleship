#ifndef BOARD_HPP
#define BOARD_HPP
#include "location.hpp"
#include "internship.hpp"
#include "juniorship.hpp"
#include "middleship.hpp"
#include "seniorship.hpp"
#include <iostream>

static const int g_maximumInternships = 4;
static const int g_maximumJuniorships = 3;
static const int g_maximumMidleships = 2;
static const int g_maximumSeniorships = 1;

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

    /** 
    @brief get size of board
    */
    static int getSize();

    /**
    @brief initializeBoard
    */
    void initializeBoard();

    /**
    @brief set ship on location by using start location and direction
    @param *ptr - parent pointer to an object
    @param startLoc - start location
    @param direction - direction Horizontal or vertical
    */
    void setShipOnBoard(Ship* ptr, Location startLoc, Direct direction);

    /**
    @brief set ship on board by using two locations
    @param startLoc - start location
    @param endLoc = end location
    */
    void setShipOnBoard(Location startLoc, Location endLoc);

    /**
    @brief set random location for ships
    */
    void randShipOnBoard();

    /**
    @brief check locations for inserting
    @param size - size of ship
    @param location - start loc of ship
    @param direction - direction of ship
    */
    bool checkLocation(int size, Location location, Direct direction);

    /**
    @brief check near locations for inserting
    @param size - size of ship
    @param location - start loc of ship
    @param direction - direction of ship
    */
    bool checkNearLocation(int size, Location location, Direct direction);

    /**
    @brief print board for us
    */
    void printBoardForPlayer();

    /**
    @brief print board for enemy
    */
    void printBoardForEnemy();
};

#endif //BOARD_HPP