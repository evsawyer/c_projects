#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cctype>
#include "ufo_functions.hpp"
using std::string;
using std::vector;
using std::cout;
using std::cin;


int main() {
    char choice;

    do {
        
        vector<string> codewords = {"jazz","surfing","yoga","iron","running","americano","coffee"};
        // Use random_device and mt19937 for better randomness
        std::random_device rd; 
        std::mt19937 gen(rd()); 
        std::uniform_int_distribution<size_t> dist(0, codewords.size() - 1);

        // Select a random word
        string codeword = codewords[dist(gen)];
        string answer(codeword.length(), '_');
        greet(answer);
        
        char letter;
        int misses = 0;
        vector<char> incorrect;
        bool guess = false;

        // give the player 7 chances to get the right codeword
        while (answer!=codeword && misses<7) {    
            display_misses(misses);
            cout << "Please enter your guess: ";
            cin >> letter;
            letter = std::tolower(letter);
            for (int i = 0 ; i < codeword.length() ; i++) {
                if (letter == codeword[i]) {
                    answer[i] = letter;
                    guess = true;
                }
            }
            if (guess==true) {
                cout << "Correct!\n";
            }
            else {
                cout << "Incorrect! The tractor beam pulls the person in further.\n";
                incorrect.push_back(letter);
                misses++;
            }
            display_status(incorrect, answer);
            bool guess = false;
        }
        end_game(answer, codeword);
        cout << "Would you like to play another game?\n";
        cout << "Enter y/n: \n";
        choice = std::tolower(choice);
        cin >> choice;
    } while (choice == 'y');
    return 0;
}