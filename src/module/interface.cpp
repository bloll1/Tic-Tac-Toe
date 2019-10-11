#include <iostream>
#include "interface.h"


void set_player(int player_choice) {
  if (player_choice) {


  }
}

void update() {
  draw_lines();
  draw_playerX();
  draw_playerO();

}




void draw_X(int x, int y) {

}

void draw_O(int x, int y) {

}












void draw_lines() {
  for (int y = 0; y < 60; y++) {
    for (int x = 0; x < 60; x++) {
      if (x == 10 && y == 2) {
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
