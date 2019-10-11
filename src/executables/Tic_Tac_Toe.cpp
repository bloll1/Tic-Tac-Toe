//@Author: Conor M Golden
//@Email: Goldencm203@potsdam.edu

#include "interface.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  int player_choice  = atoi(argv[1]);

  if (argc == 1 || argc > 2 || player_choice >  2) {
    std::cerr << "\n\nusage: tic_tac_toe " << " [<n>] <2 Player or Computer>" <<
     std::endl << "         <2 Player or Computer> - <0> for AI and <1> for 2 Player" <<
     std::endl;
         return 1;
  }
  
  update();
  //set_player(player_choice);

  return 0;
}
