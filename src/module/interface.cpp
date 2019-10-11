#include <iostream>
#include "interface.h"


void set_player(int player_choice) {
  if (player_choice) {


  }
}

void update() {
  draw_lines();
}

void draw_lines() {
  for (int y = 0; y < 60; y++) {
    for (int x = 0; x < 60; x++) {

      if (x == 20 || x == 40 && y != 20 && y != 40) {
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
      }
    }
  }
}


void draw_X(int x, int y) {

}

void draw_O(int x, int y) {

}
