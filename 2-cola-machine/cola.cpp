#include <iostream>
#include <string>
using namespace std;

int main(){
  cout << "Choose your beverage" << endl;
  cout << "1 - water" << endl;
  cout << "2 - sparkling water" << endl;
  cout << "3 - coke" << endl;
  cout << "4 - tea" << endl;
  cout << "5 - sprite" << endl;
  int choice;
  cin >> choice;
  string beverage;
  switch (choice) {
    case 1: beverage = "water";
    break;
    case 2: beverage = "sparkling water";
    break;
    case 3: beverage = "coke";
    break;
    case 4: beverage = "tea";
    break;
    case 5: beverage = "sprite";
    break;
    default: cout << "whaaaat?" << endl; return 0;
  }
  cout << "Here champ, enjoy your " << beverage << endl;
  return 0;
}
