#include <iostream>
#include <string>
#include <limits>

using std::cout;
using std::cin;
using std::string;


void firstBranch(int first_user_input) {
  string outcomes[3] = {"You begin searching through stacks of dusty old books. After hours of combing through volumes of ancient texts, you find a hidden compartment behind a false bookshelf. Inside, you discover the key to the locked room, along with a note from your uncle warning that opening the room will reveal not just treasure, but a terrible secret. You decide to face the consequences and unlock the room.\n Do you open the locked room immediately, or do you investigate further?\n 1.	Open the Locked Room - The key is in your hand, and the treasure is calling to you. You cant resist.\n 2.	Investigate the Journal Further - Your uncles warning haunts you. You decide to read through the journal one more time to see if you missed anything important.\n",

  "You descend into the cold, dark basement. Its filled with old furniture and broken tools. After much searching, you stumble across a set of strange markings on the floor. They lead to a hidden trapdoor. You open it and find an ancient chest containing the key, along with a map. The map points to a remote island, suggesting the treasure your uncle sought might be much more than a monetary prize.\n Do you follow the map immediately, or do you explore more of the mansion? \n 1.	Follow the Map - The treasure is calling to you. You decide to sail to the island and claim your inheritance. \n 2.	Explore More of the Mansion - There may be more secrets hidden in the mansion. You want to be sure youve uncovered everything.\n",

  "You head outside and explore the old, overgrown shed. Inside, you discover a chest buried beneath vines and flowers. Its locked, but theres a strange inscription that reads: “The truth lies in natures embrace.” You ponder the message for a moment before realizing that the key is hidden beneath the roots of a massive oak tree just outside the shed. You dig beneath the tree and find the key, unlocking the chest to reveal a strange journal. The journal details your uncles obsession with an artifact that was lost to time. It seems that the treasure he sought was not wealth, but knowledge—the preservation of nature.\n Second Branch Point: Do you leave the mansion with the journal, or do you dig deeper in the garden?\n 1.	Leave with the Journal - You decide to leave the mansion behind and dedicate yourself to the cause your uncle started.\n 2.	Dig Deeper - You feel there is more to uncover in the garden, and you decide to explore further before leaving.\n"};

  cout << outcomes[first_user_input];
}

void secondBranch(int first_user_input, int second_user_input) {
  string outcomes[3][2] = {
    {"Ending 1: Open the Locked Room.\n You open the door to find a vault of gold and jewels, but also an ancient artifact — a cursed relic. The moment you touch it, you feel a chill rush through your body. The mansion begins to shake as if it were alive. You realize too late that your uncles warning was not just a figure of speech. The curse is now upon you, and youre trapped in the mansion as it crumbles, the curse taking hold of you forever.\n Outcome: The mansion falls apart around you, and you succumb to the curse, becoming part of the mansions twisted history.\n",

    "Ending 2: Investigate the Journal Further\n You reexamine the journal and discover that your uncle had once tried to open the locked room, but he was forced to seal it again when the curse activated. Theres a note indicating that the key is tied to the artifacts power, and it must not be used unless youre prepared for its consequences. You decide to ignore the temptation and seal the key away once more, deciding to leave the mansion behind and go on your own path.\n Outcome: You leave the mansion behind, and the key is buried deep within the houses walls, hidden forever. You live your life without ever knowing the true treasure.\n"},

    {"Ending 3: Follow the Map\n You embark on a journey to the remote island and uncover the treasure, which is hidden in a secret temple. Inside, you find a powerful artifact that allows you to control time itself. With great power in your hands, you must now decide how to use it. Will you rewrite history or allow time to unfold naturally? The possibilities are endless, but youll always carry the weight of the power you wield.\n Outcome: You become the master of time, forever shaping the past, present, and future, but always haunted by the choices you make.\n",
    
    "Ending 4: Explore More of the Mansion \n You continue exploring the mansion, eventually uncovering a hidden library beneath the basement. There, you find a diary from your uncle detailing the true purpose of the key—its not for treasure but to unlock a lost civilizations knowledge. The key is not a tool for personal gain but a means of preserving the wisdom of a forgotten age. You decide not to follow the map but instead study the contents of the hidden library, preserving the knowledge your uncle sought to protect.\n Outcome: You dedicate your life to studying the lost knowledge and sharing it with the world, becoming a renowned scholar with a deep connection to the mysteries of the past.\n"},

    {"Ending 5: Leave with the Journal\n You take the journal and leave the mansion, becoming a renowned environmentalist. Using your uncles teachings, you lead movements to preserve natural habitats and protect endangered species. The treasure was not gold, but a cause worth living for.\n Outcome: Your uncles legacy lives on through you, and you make a lasting impact on the world.\n",
    
    "Ending 6: Dig Deeper \n You dig further in the garden and uncover a hidden shrine to an ancient civilization. Inside, you find the true artifact your uncle was seeking—a rare plant that could save the worlds dying ecosystems. With the knowledge your uncle left behind, you vow to protect the plant and use it to heal the Earth. \n Outcome: You become a guardian of nature, preserving the Earths biodiversity and ensuring future generations inherit a thriving planet.\n"}
  };

  cout << outcomes[first_user_input][second_user_input];
}

int main() {
  cout << "Beginning: \n You are a young adventurer named Arin, who has just inherited an old mansion from your mysterious late uncle. Your uncle was known for his eccentricity and obsession with rare artifacts. When you first step into the mansion, you notice strange symbols carved into the walls and a heavy sense of unease in the air. Theres a locked room on the top floor of the mansion that no one has been able to open, and its said to contain a priceless treasure. Your uncles will mentioned a key—the key to a hidden fortune—but its nowhere to be found. \n You find an old journal that hints the key might be hidden somewhere in the mansion. You decide to explore further to unlock the room.\n";

  cout << "Where do you search first?\n"
  << "1.	The Library - Your uncle was a bookworm. You think there might be hidden clues in his personal collection.\n"
	<< "2.	The Basement - The mansions basement looks eerie and damp. You suspect there might be hidden compartments.\n"
	<< "3.	The Garden - The lush garden outside holds a small shed that seems to have been abandoned for years. Maybe your uncle left something behind there.\n"
  << "Enter number 1, 2, or 3:\n";

  int first_user_input;
  bool validInput = false;
  while (!validInput) {
    if (cin >> first_user_input) {
      if (first_user_input <= 3 && 
      first_user_input>=1) {
        --first_user_input;
        validInput = true;
      }
      else {
        cout << "Please enter either 1, 2, or 3.\n";
      }
      
    }
    else {
      // Input is not a valid integer
      cout << "Invalid input! Please enter a valid integer.\n";

      // Clear the error state of std::cin
      cin.clear();

      // Discard invalid input from the input buffer
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  firstBranch(first_user_input);


  int second_user_input;
  validInput = false;
  while (!validInput) {
    if (cin >> second_user_input) {
      if (second_user_input <= 2 && 
      second_user_input>=1) {
        --second_user_input;
        validInput = true;
      }
      else {
        cout << "Please enter either 1 or 2.\n";
      }
      
    }
    else {
      // Input is not a valid integer
      cout << "Invalid input! Please enter a valid integer.\n";

      // Clear the error state of std::cin
      cin.clear();

      // Discard invalid input from the input buffer
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  secondBranch(first_user_input,second_user_input);


}