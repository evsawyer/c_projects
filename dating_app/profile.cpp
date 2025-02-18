#include "profile.hpp"

Profile::Profile(string n, int a, string ci, string co, string p, vector<string> h) {
  name = n;
  age = a;
  city = ci;
  country = co;
  pronouns = p;
  hobbies = h;
};

void Profile::add_hobby(string hobby) {
  hobbies.push_back(hobby);
};

void Profile::view() {
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "City: " << city << "\n";
  cout << "Country: " << country << "\n";
  cout << "Pronouns: " << pronouns << "\n";
  for (string &hobby : hobbies) {
    cout << "Hobby: " << hobby << "\n";
  }
};