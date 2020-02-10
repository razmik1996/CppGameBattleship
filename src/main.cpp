#include "player.hpp"
#include <iostream>

int main() 
{
    Player player("Raz");
    player.printEachTime();
    Player computer("PC1");
    computer.printForEnemy();
    return 0;
}