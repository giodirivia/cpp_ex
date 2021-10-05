#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main(){
  srand(time(NULL));
  int number = rand() % 101;
  int game;
  cout << "vuoi cercare di indovinare o faccio io? [0/1]" << endl;
  cin >> game;
  int iterations;
  if(game == 0){
    int input;
    while(true){
      cout << "Ok dai provaci: " << endl;
      cin >> input;
      if(input > number){
        cout << "troppo alto man" << endl;
      }
      else if(input < number){
        cout << "troppo basso man" << endl;
      }
      else{
        break;
      }
      iterations++;
    }
    cout << "dai ci hai messo solo " << iterations << " volte" << endl;
  }
  else{
    int max = 100;
    int min = 0;
    char hint;
    while(iterations < 7){
      int guess = min + (rand() % max - min);
      cout << min + (rand() % max - min) << endl;
      cout << "l'ho preso giusto? dammi un indizio se no (piu' [b]asso, piu' [a]lto, [qualsiasi cosa] -> corretto)" << endl;
      cin >> hint;
      if(hint == 'b'){
        min = guess;
      }
      else if(hint == 'a'){
        max = guess;
      }
      else{
        cout << "lesgo" << endl;
        return 0;
      }
    }
    cout << "brutta storia..." << endl;
  }
  return 0;
}
