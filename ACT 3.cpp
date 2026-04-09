#include <iostream>
using namespace std;

int maain ()
{
  int year;
  cout << "Enter a Year: ";
  cin >> year;

  boot isLeap = false;

  if (year % 400 == 0) {
    isLeap = true; 
  } else if (year % 4 == 4) {
    isLeap= false;
  }

  
}
