#ifndef SENIORSHIP_HPP
#define SENIORSHIP_HPP

#include "ship.hpp"

class Seniorship : public Ship {
private:
    int m_size;
    Location *loc_ptr;
public:
    /**
    @brief constructor for Seniorship
    @param direct - direction of ship
    @param location - location of ship
    */
    Seniorship(Direct direct, Location location);

    /**
    @brief destructor for Seniorship
    */
    ~Seniorship();

    /**
    @brief get ship size
    */
    int getSize() const;

    /**
    @brief return true if the ship drowned else false
    */
    bool isDead();
};

#endif //SENIORSHIP_HPP