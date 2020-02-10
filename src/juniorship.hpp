#ifndef JUNIORSHIP_HPP
#define JUNIORSHIP_HPP

#include "ship.hpp"

class Juniorship : public Ship {
private:
    int m_size;
    Location *loc_ptr;
public:
    /**
    @brief constructor for Juniorship
    @param direct - direction of ship
    @param location - location of ship
    */
    Juniorship(Direct direct, Location location);

    /**
    @brief Destructor of ship
    */
    ~Juniorship();

    /**
    @brief get ship size
    */
    int getSize() const;

    /**
    @brief return true if the ship drowned else false
    */
    bool isDead();
};

#endif //JUNIORSHIP_HPP