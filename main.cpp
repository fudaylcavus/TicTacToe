#include <iostream>
#include <vector>
#include "fns.hpp"


int main() {
  char p1;
  char p2;
  std::vector<char> grid = {'1','2','3','4','5','6','7','8','9'};
  bool game = true;
  int durum = 0;
  great();

//brain of the game
gridPrint(grid);

while(game && durum != 8) {
  
  std::cout << "\nX : ";
  std::cin >> p1;
  for(int i = 0; i < grid.size(); i++) {
    if(grid[i]==p1) {
      grid[i] = 'X';
      durum++;
      std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      gridPrint(grid);
      game = endGame(grid, game);
        
    } 
  }
  if(!game) {break;}
  std::cout << "\nO: ";
  std::cin >> p2;
  for(int i = 0; i < grid.size(); i++) {
    if(grid[i]==p2) {
      grid[i] = 'O';
      durum++;
      std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      gridPrint(grid);
      game = endGame(grid, game);

    } 
  }

}


} //end of the main

