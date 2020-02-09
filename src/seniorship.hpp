#ifndef SENIORSHIP_HPP
#define SENIORSHIP_HPP

#include "ship.hpp"

class Seniorship : public Ship {
private:
    int m_size;
    Location *loc_ptr;
public:
    Seniorship(Direct direct, Location location);
    ~Seniorship();
    int getSize() const;
    bool isDead();
};

#endif //SENIORSHIP_HPP