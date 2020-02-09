#ifndef MIDDLESHIP_HPP
#define MIDDLESHIP_HPP

#include "ship.hpp"

class Midleship : public Ship {
private:
    int m_size;
    Location *loc_ptr;
public:
    Midleship(Direct direct, Location location);
    ~Midleship();
    int getSize() const;
    bool isDead();
};

#endif //MIDDLESHIP_HPP