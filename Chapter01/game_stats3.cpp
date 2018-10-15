// Game Stats 3.0
// Demostrates constants
#include <iostream>
using namespace std;
int main()
{
  const int ALIEN_POINTS = 150;
  int alienKilled = 10;
  int score = alienKilled * ALIEN_POINTS;
  cout << "score: " << score << endl;
  enum difficulity {NOVICE,EASY,NORMAL,HARD,UNBEATABLE};
  difficulity myDifficulty = EASY;
  enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CURISER_COST = 50};
  shipCost myShipCost =BOMBER_COST;
  cout << "\nTo upgrade my ship to a Cruiser will cost "
       << (CURISER_COST-myShipCost) << " Resource Points. \n";

  return 0;
}
