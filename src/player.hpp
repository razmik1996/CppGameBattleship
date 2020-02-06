#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "board.hpp"

class Player {
private: //private members
    std::string name;
    Board board;

public: //constructors, destructor
    Player(std::string name);
    Player(const Player& other);
    ~Player();
};

#endif //PLAYER_HPP