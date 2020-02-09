#ifndef INTERNSHIP_HPP
#define INTERNSHIP_HPP

#include "ship.hpp"

class Internship : public Ship {
private: ///members
    int m_size;
public: ///constructors and destructor
    Internship(Direct direct, Location location);
    ~Internship();
public: ///public methods
    int getSize() const;
    bool isDead();
};

#endif //INTERNSHIP_HPP