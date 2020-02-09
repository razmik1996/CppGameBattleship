#ifndef JUNIORSHIP_HPP
#define JUNIORSHIP_HPP

#include "ship.hpp"

class Juniorship : public Ship {
private:
    int m_size;
    Location *loc_ptr;
public:
    Juniorship(Direct direct, Location location);
    ~Juniorship();
    int getSize() const;
    bool isDead();
};

#endif //JUNIORSHIP_HPP