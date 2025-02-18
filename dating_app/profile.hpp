#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

class Profile {
private:
  string name;
  int age;
  string city;
  string country;
  string pronouns;
  vector<string> hobbies;
public:
  Profile(string n, int a, string ci, string co, string p = "They/Them", vector<string> h = vector<string>());
  void add_hobby(string hobby);
  void view();
};