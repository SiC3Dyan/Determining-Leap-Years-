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
  } else if (year % 100 == 0) {
    isLeap = false;
  } else if (year % 4 == 0)
    isLeap = true;
}

if (isleap) {
  cout <<  year << " is a leap year." << endl;
} else {
  cout << year <<
  
    
}
