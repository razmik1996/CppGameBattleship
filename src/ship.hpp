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
private:
    Direct m_direct;
    Location m_location;
public:
    Ship();
    Ship(Direct, Location);
    virtual int getSize() const = 0;
    virtual ~Ship();
    virtual bool isDead() = 0;
};

#endif // SHIP_HPP
