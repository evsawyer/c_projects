#include <iostream>

using std::cout;
using std::cin;

int main() {
  double pesos, reals, soles, dollars;


  cout << "Enter number of Colombian Pesos:";
  cin >> pesos;

  cout << "Enter number of Brazilian Reals:";
  cin >> reals;

  cout << "Enter number of Perucian Soles:";
  cin >> soles;
  
  dollars = 0.00024227*pesos + 0.1727*reals + 
  0.27056*soles;

  cout << "US Dollars = $" << dollars << "\n";
  
}