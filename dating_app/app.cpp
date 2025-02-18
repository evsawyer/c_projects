#include "profile.hpp"

int main() {
  Profile prof("Evan",27,"San Diego","US");
  prof.add_hobby("Surfing");
  prof.view();
}