#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "board.hpp"

class Player {
private: //private members
    std::string m_name;
    Board m_board;
public: //constructors, destructor
    Player(std::string name);
    Player(const Player& other);
    ~Player();
public: //public methods
    void setName(std::string name);
    std::string getName() const;
    void printEachTime();
    void printForEnemy();
    void setShip();
};

#endif //PLAYER_HPP