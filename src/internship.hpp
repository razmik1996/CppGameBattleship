#ifndef INTERNSHIP_HPP
#define INTERNSHIP_HPP

#include "ship.hpp"

class Internship : public Ship {
private: ///members
    int m_size;
public: ///constructors and destructor
    /**
    @brief Internship constructor
    @param direct - direction of ship
    @param location - location of ship
    */
    Internship(Direct direct, Location location);

    /**
    @brief Destructor
    */
    ~Internship();
public: ///public methods
    /**
    @brief get size of internship
    */
    int getSize() const;

    /**
    @brief return true if the ship drowned else false
    */
    bool isDead();
};

#endif //INTERNSHIP_HPP