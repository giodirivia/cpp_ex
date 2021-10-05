#include <iostream>
#include <ctime>
#include <random>
using namespace std;
int main(){
  srand(time(NULL));
  for(int x =0; x< 50 ; x++){
cout << rand() % 50 + 50 << endl;
  }

}
