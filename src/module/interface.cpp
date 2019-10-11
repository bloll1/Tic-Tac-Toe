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
  int sector = 1;
  for (int y = 0; y < 60; y++) {
    for (int x = 0; x < 60; x++) {

      //sector 1 x check
      if (x == y && x < 15 && y > 5 && playerX_sector(sector)){
         std::cout << "\\";
         if (x == 6) {
           for (int temp = 0; temp < 8; temp++) {
             std::cout << " ";
           }
           std::cout << "/";
           x+= 9;

        } else if (x == 7) {
           for (int temp = 0; temp < 6; temp++) {
             std::cout << " ";
           }
           std::cout << "/";
           x+= 7;

         } else if (x == 8) {
           for (int temp = 0; temp < 4; temp++) {
             std::cout << " ";
           }
           std::cout << "/";
           x+= 5;

         } else if (x == 9) {
           for (int temp = 0; temp < 2; temp++) {
             std::cout << " ";
           }
           x+= 3;
           std::cout << "/";

         } else if (x == 10) {
           std::cout << "/";
           x+= 1;
         }
      }













      else if (x == 10 && y == 2) {
        std::cout << "1";
      } else if (x == 30 && y == 2) {
        std::cout << "2";
      } else if (x == 50 && y == 2) {
        std::cout << "3";
      } else if (x == 10 && y == 22) {
        std::cout << "4";
      } else if (x == 30 && y == 22) {
        std::cout << "5";
      } else if (x == 50 && y == 22) {
        std::cout << "6";
      } else if (x == 10 && y == 42) {
        std::cout << "7";
      } else if (x == 30 && y == 42) {
        std::cout << "8";
      } else if (x == 50 && y == 42) {
        std::cout << "9";
      }

      else if ((x == 20 && y > 1 && y < 59)
      || (x == 40 &&  y > 1 && y < 59)) {
        std::cout << "|";
      } else {
        std::cout << " ";
      }
      if (x == 59) {
        std::cout << std::endl;
      }
    }
    if (y == 20 || y == 40) {
      for (int h_print = 0; h_print < 60; h_print++) {
        std::cout << "-";
        if (h_print == 59) {
          std::cout << std::endl;
        }
      }
    }
  }
}
