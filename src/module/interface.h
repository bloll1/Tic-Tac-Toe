//@Author: Conor M Golden
//@Email: Goldencm203@potsdam.edu

#ifndef INTERFACE
#define INTERFACE
#include <vector>



int read();
bool player0_sector(int sector);
bool playerX_sector(int sector);
bool usedcheck(int input);
void prompt(int player);
void set_player(int player_choice);
void draw_lines();
void update();
void draw_X(int x, int y);
void draw_O(int x, int y);

extern std::vector<int> playerO;
extern std::vector<int> playerX;

#endif /* interface
\      /       _________
 \    /       |        |
  \  /        |        |
   \/         |        |
   /\         |        |
  /  \        |        |
 /    \       |________|
/      \                              */
