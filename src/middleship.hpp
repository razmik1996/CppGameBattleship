#ifndef MIDDLESHIP_HPP
#define MIDDLESHIP_HPP

#include "ship.hpp"

class Midleship : public Ship {
private:
    int m_size;
    Location *loc_ptr;
public:
    /**
    @brief constructor for Midleship
    @param direct - direction of ship
    @param location - location of ship
    */
    Midleship(Direct direct, Location location);

    /**
    @brief destructor for Midleship
    */
    ~Midleship();

    /**
    @brief get ship size
    */
    int getSize() const;

    /**
    @brief return true if the ship drowned else false
    */
    bool isDead();
};

#endif //MIDDLESHIP_HPP