#ifndef LOCATION_HPP
#define LOCATION_HPP

/**
@file location.hpp
@author XCOM
@brief class location
*/

/**
@class Location
@brief x, y locations for ships
*/

class Location {
///private members
private:
    int m_x;
    int m_y;
///constructor
public:
    /**
    @brief Location default constructor 
    */
    Location();
    /**
    @brief Location constructor
    */
    Location(int x, int y);
///public methods
public:
    /**
    @brief seter for x coordinate
    */
    void setX(int x);
    /**
    @brief geter for x coordinate
    */
    int getX() const;
    /**
    @brief seter for y coordinate
    */
    void setY(int y);
    /**
    @brief geter for y coordinate
    */
    int getY() const;
    /**
    @brief return x + val
    */
    int addX(int val);
    /**
    @brief return y + val
    */
    int addY(int val);
};

#endif ///LOCATION_HPP