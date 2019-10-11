//@Author: Conor M Golden
//@Email: Goldencm203@potsdam.edu

#include "interface.h"
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  int player_choice  = atoi(argv[1]);

  if (argc == 1 || argc > 2 || player_choice >  2) {
    std::cerr << "\n\nusage: tic_tac_toe " << " [<n>] <2 Player or Computer>" <<
     std::endl << "         <2 Player or Computer> - <0> for AI and <1> for 2 Player" <<
     std::endl;
         return 1;
  }
  std::string bla;
  int choice;
  bool player_check = true;
  while (player_check) {

    std::cout << "Who goes first Player <1> or Player <2>?" << '\n';
    std::cin >> bla;
    std::stringstream s(bla);

    s >> choice;
    if (choice <= 0 || choice > 2) {
      std::cout << "1 for Player <1> | 2 for Player <2>" << '\n';
    } else {
      player_check = false;
    }
  }
  draw_lines();
  if (choice == 1) {
    player_check = true;
  }



    if (player_check) {
      prompt(1);
    } else {
      prompt(0);
    }


  

  //set_player(player_choice);

  return 0;
}
