#ifndef SHIP_HPP
#define SHIP_HPP

#include "location.hpp"

/**
@file ship.hpp
@author XCOM
@brief Battleship game ships class
*/


enum Direct {
    HORIZONTAL,
    VERTICAL
};

/**
@class Ship
*/

class Ship {
private:///members
    Direct m_direct;
    Location m_location;
public:///constructors and destructor
    /**
    @brief default constructor
    */
    Ship();

    /**
    @brief constructor
    @param direct - direction of ship
    @param lication - start location of ship
    */
    Ship(Direct, Location);

    /**
    @brief virtual destructor for ship
    */
    virtual ~Ship();
public:///Memeber functions
    /**
    @brief get ship size clean virtual function
    */
    virtual int getSize() const = 0;

    /**
    @brief return true if the ship drowned else false clean virtual function
    */
    virtual bool isDead() = 0;
};

#endif // SHIP_HPP
