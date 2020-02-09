#include "internship.hpp"

extern int maximumInternships;

/*
location_ptr = new Location[size];
    location_ptr[0] = location;
    if(size > 1) {
        if(direct = HORIZONTAL) {
            for(int i = 1; i < size; i++) {
                location_ptr[i].setX(location.addX(i));
                location_ptr[i].setY(location.getY());
            }
        } 
        else {
            for(int i = 1; i < size; i++) {
                location_ptr[i].setX(location.getX());
                location_ptr[i].setY(location.addY(i));
            }
        }
    }
*/
Internship::Internship(Direct direct, Location location):Ship(direct, location) 
{
    m_size = 1;
}
    
Internship::~Internship() 
{

}

int Internship::getSize() const 
{
    return m_size;
}
    
bool Internship::isDead() 
{
    if(0 == m_size) {
        this->~Internship();
        return true;
    } else {
        return false;
    }
}