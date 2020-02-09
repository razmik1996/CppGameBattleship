#include "location.hpp"

Location::Location(int x = 0, int y = 0):
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