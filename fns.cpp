#include <iostream>
#include <vector>

bool endGame(std::vector<char> grid,bool game) {
  if(grid[0] == grid[1] && grid[0] == grid[2]) {
    game = false;
    std::cout << grid[1] << " won.";
  } else if (grid[3] == grid[4] && grid[3] == grid[5]) {
    game = false;
    std::cout << grid[3] << " won.";
  } else if (grid[6] == grid[7] && grid[6] == grid[8]) {
    game = false;
    std::cout << grid[6] << " won.";
  } else if (grid[0] == grid[4] && grid[0] == grid[8]) {
    game = false;
    std::cout << grid[0] << " won.";
  } else if (grid[2] == grid[4] && grid[2] == grid[6]) {
    game = false;
    std::cout << grid[2] << " won.";
  } else if (grid[0] == grid[3] && grid[0] == grid[6]) {
    game = false;
    std::cout << grid[0] << " won.";
  } else if (grid[1] == grid[4] && grid[1] == grid[7]) {
    game = false;
    std::cout << grid[1] << " won.";
  } else if (grid[2] == grid[5] && grid[2] == grid[8]) {
    game = false;
    std::cout << grid[2] << " won.";
  } 
  
  
  return game;
}

void great() {
  std::cout << "\n\n";
  std::cout << "===================\n";
  std::cout << "   Welcome to the  \n";
  std::cout << "      TicTacToe    \n";
  std::cout << "Developed by Fudayl\n";
  std::cout << "===================\n";
  std::cout << "Instruction: type the number that you want to write x/o\n";
}

void gridPrint(std::vector<char> grid) {
  
  std::cout << grid[0] << " | " << grid[1] << " | " << grid[2];
  std::cout << "\n-- -- --\n";
  std::cout << grid[3] << " | " << grid[4] << " | " << grid[5];
  std::cout << "\n-- -- --\n";
  std::cout << grid[6] << " | " << grid[7] << " | " << grid[8] << "\n\n";
  

}
