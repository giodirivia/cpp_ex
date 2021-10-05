#include <iostream>

using namespace std;

struct guys{
  int guy;
  int num;
};

int main(){
  int people[10];
  for(int x = 0; x < 10; x++){
    cout << "Quanti pancake hai mangiato, persona numero " << x+1 << "?\n";
    cin >> people[x];
  }

  guys min;
  guys max;

  for(int x =0 ; x < 10; x++){
    if(people[x] > max.num){
      max.num = people[x];
      max.guy = x+1;
    }
    else if(people[x] < min.num){
      min.num = people[x];
      min.guy = x+1;
    }
  }
  cout << "Chi ne ha mangiati di piu' e' la persona numero " << max.guy << " che ne ha mangiati " << max.num << endl;
  cout << "Chi ne ha mangiati di piu' e' la persona numero " << min.guy << " che ne ha mangiati " << min.num << endl;
  return 0;
}
