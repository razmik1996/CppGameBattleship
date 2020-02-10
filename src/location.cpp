#include "location.hpp"

Location::Location():
    m_x(0),
    m_y(0)
{
    
}

Location::Location(int x, int y):
    m_x(x),
    m_y(y)
{

}

void Location::setX(int x) 
{
    m_x = x;
}

void Location::setY(int y) 
{
    m_y = y;
}

int Location::getX() const 
{
    return m_x;
}

int Location::getY() const
{
    return m_y;
}

int Location::addX(int val) {
    return (m_x + val);
}

int Location::addY(int val) {
    return (m_y + val);
}