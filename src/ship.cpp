#include "ship.hpp"

Ship::Ship()
{
    m_direct = HORIZONTAL;
}

Ship::Ship(Direct direct, Location location):
    m_direct(direct),
    m_location(location)
{

}

Ship::~Ship()
{

}