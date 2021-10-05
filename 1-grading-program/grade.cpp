#include <iostream>
using namespace std;

int main(){
  int score;
  cout << "How much did you score in your programming class?" << endl;
  cin >> score;
  if(score < 0 || score > 100){
    cout << "Error." << endl;
    return 1;
  }
  else{
    char grade;
    if(score == 100){
      cout << "You got a perfect score!" << endl;
    }
    else if(score >= 90){
      grade = 'A';
    }
    else if(score >=80){
      grade = 'B';
    }
    else if(score >=70){
      grade = 'C';
    }
    else if(score >=60){
      grade = 'D';
    }
    else{
      grade = 'F';
    }
    if(score != 100){
      cout << "You scored a " << grade << "!" << endl;
    }
  }
  return 0;
}
