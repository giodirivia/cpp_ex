#include <iostream>

int main(){
  int iterations = 0;
  int num;
  while(true){
    std::cout << "\nPlease enter a number! (you better not choose " << iterations << "...)" << std::endl;
    std::cin >> num;
    if(num == iterations){
      std::cout << "Hey! you weren't supposed to enter " << iterations << std::endl;
      break;
    }
    if(iterations > 9){
      std::cout << "ok hai vinto" << std::endl;
      break;
    }
    iterations++;
  }
  return 0;
}
