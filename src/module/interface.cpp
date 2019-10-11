#include <iostream>
#include "interface.h"
#include <vector>
#include <algorithm>    // std::sort


std::vector<int> playerX;
std::vector<int> playerO;
void set_player(int player_choice) {
  if (player_choice) {


  }
}

void update() {
  system("clear");
  draw_lines();
}




void add_X(int position) {
    playerX.push_back(position);
    std::sort(playerX.begin(), playerX.end());
}

void add_O(int position) {
    playerO.push_back(position);
    std::sort(playerO.begin(), playerO.end());
}




void prompt(int player) {
  int square_choice;
  if (player) {
    std::cout << "Player 1's choice: " << '\n';
    square_choice = read();
    add_X(square_choice);
  } else {
    std::cout << "Player 2's choice: " << '\n';
    square_choice = read();
    add_O(square_choice);
  }
update();

}

int read() {
  int input;
  std::cin >> input;
  while (input > 9 || input <= 0 || usedcheck(input) == false) {
    std::cout << "\nPlease pick a square unused between 1-9: " << '\n';
    std::cin >> input;
  }
  return input;
}

bool usedcheck(int input) {
  for (auto i = playerO.begin(); i != playerO.end(); ++i) {
        if (*i == input) {
          return false;
        }
      }
  for (auto t = playerX.begin(); t != playerX.end(); ++t) {
        if (*t == input) {
          return false;
        }
      }
return true;
}

bool player0_sector(int sector) {
  for (auto i = playerO.begin(); i != playerO.end(); ++i) {
        if (*i == sector) {
          return true;
        }
      }
  return false;
}

bool playerX_sector(int sector) {
  for (auto t = playerX.begin(); t != playerX.end(); ++t) {
        if (*t == sector) {
          return true;
        }
      }
  return false;
}

void draw_lines() {
  std::cout << '\n';
  //int sector;
  for (int y = 1; y < 9; y++) {
    for (int x = 0; x < 11; x++){


     if (x % 3 == 0 && x != 0 && x != 9) {
        std::cout << "|";
      } else if (y % 3 == 0 && y != 0 && y != 9 ) {
        std::cout << "-";
      } else {
        std::cout << " ";
      }
      if (x == 9) {
        std::cout  << std::endl;
      }
    }
  }
  std::cout << '\n';
}
