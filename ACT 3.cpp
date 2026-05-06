#include <iostream>
using namespace std;

int main () {
  
  int year;

  cout << "Enter a Year: ";
  cin >> year;

  boot isLeap = false;

  if (year % 400 == 0) {
    isLeap = true;
  } else if (year % 100 == 0) {
    isLeap = false;
  } else if (year & 4 == 0) {
    isLeap = true;
  }

  if (isLeap) {
    cout << year << "Is a Leap Year." << endl;
    
  }
}
