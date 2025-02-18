#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stdlib.h>
#include <algorithm>

using std::cout;
using std::cin;
using std::string;
using std::set;
using std::map;

/* 
This program will play Rock, Paper, Scissors, Lizard, Spock with the user  
*/

int main() {
  map<set<string>,string> responseDict;
  responseDict[{"Scissors","Paper"}] = "Scissors cut Paper";
  responseDict[{"Paper","Rock"}] = "Paper covers Rock";
  responseDict[{"Rock","Lizard"}] = "Rock crushes Lizard";
  responseDict[{"Lizard","Spock"}] = "Lizard poisons Spock";
  responseDict[{"Spock","Scissors"}] = "Spock smashes Scissors";
  responseDict[{"Scissors","Lizard"}] = "Scissors decapitate Lizard";
  responseDict[{"Lizard","Paper"}] = "Lizard eats Paper";
  responseDict[{"Paper","Spock"}] = "Paper disproves Spock";
  responseDict[{"Spock","Rock"}] = "Spock vaporizes Rock";
  responseDict[{"Rock","Scissors"}] = "Rock crushes Scissors";

  map<set<string>,string> winnerDict;
  winnerDict[{"Scissors", "Paper"}] = "Scissors";
  winnerDict[{"Paper", "Rock"}] = "Paper";
  winnerDict[{"Rock","Lizard"}] = "Rock";
  winnerDict[{"Lizard","Spock"}] = "Lizard";
  winnerDict[{"Spock", "Scissors"}] = "Spock";
  winnerDict[{"Scissors","Lizard"}] = "Scissors";
  winnerDict[{"Lizard","Paper"}] = "Lizard";
  winnerDict[{"Paper","Spock"}] = "Paper";
  winnerDict[{"Spock","Rock"}] = "Spock";
  winnerDict[{"Rock", "Scissors"}] = "Rock";

  string choices[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};

  cout << "Pick Rock, Paper, Scissors, Lizard, or Spock:\n";
  string user_choice;
  cin >> user_choice;

  bool valid = false;
  while (!valid) {
    for (const string& choice : choices) {
        if (choice == user_choice) {
            valid = true;
            break;
        }
    }

    if (!valid) {
      cout << "Invalid input\n";
      cout << "Pick Rock, Paper, Scissors, Lizard, or Spock:\n";
      cin >> user_choice;
    }
  }

  string computer_choice;
  srand (time(NULL));
  int random_index = rand() % 5;
  computer_choice = choices[random_index];

  set<string> player_choices = {user_choice, computer_choice};

  string response = responseDict[player_choices];
  string winner = winnerDict[player_choices];

  string result;
  if (user_choice == winner) {
    result = "User wins!";
  }
  else {
    result = "Computer wins!";
  }

  cout << "User choice is " << user_choice << "\n"
  << "Computer choice is " << computer_choice << "\n" << response << "\n"
  << result << "\n";

}