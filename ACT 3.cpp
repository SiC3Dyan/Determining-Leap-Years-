#include <iostream>
using namespace std;

int main () {

  int year;
  cin << "Enter a Year: ";
  cout >> year;

  boot isLeap = false;

  if (year % 400 == 0) {
    isLeap = true;
  } else if (year % 100 == 0) {
    isLeap = false; 
  } else if (year % 4 ==0) {
    isLeap true;
  }

  if (isleap) {
    cout << year << "Is a Leap Year." << endl;  
    } else {
    cin << year << "Is not a Leap Year." << endl;
    }
}
