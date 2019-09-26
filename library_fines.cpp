// Vincent Phillip Rodriguez CPSC120-19

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
  //Sets fine to two decimal places
  cout << fixed << setprecision(2);

  // TODO: extract the number of days late from argv, which comes in as a
  // string. Turn it into an int to represent the number of late days using the
  // hints in the lab assignment.
  string LateDaysString = argv[1];
  int NumberOfLateDays = std::stoi(LateDaysString);
  float fine = .25 * (float) NumberOfLateDays;

  // TODO: Determine the type of late message that is printed and the fine that
  // is owed using an if, else if, and else. HINT: The order of if, else if, and
  // can be done in numerous ways, each manipulating the logic differently to
  // achieve the same result. With what we've learned in class so far, try
  // starting with checking the longest overdue period branch first and working
  // your way down for the most clear and concise code.
  if (NumberOfLateDays >= 90) {
    //Bill for replacement
    cout << "Your book is assumed lost.\n";
    cout << "This is a bill for replacement.\n";
    cout << "The fine you owe is $90.\n";
  } else if (NumberOfLateDays < 90 && NumberOfLateDays >= 60) {
    //Third overdue notice
    cout << "Your book is overdue!\n";
    cout << "This is your third overdue notice.\n";
    cout << "The fine you owe is $" << fine << ".\n";
  } else if (NumberOfLateDays < 60 && NumberOfLateDays >= 30) {
    //Second overdue notice
    cout << "Your book is overdue!\n";
    cout << "This is your second overdue notice.\n";
    cout << "The fine you owe is $" << fine << ".\n";
  } else if (NumberOfLateDays < 30 && NumberOfLateDays >= 1) {
    //First overdue notice
    cout << "Your book is overdue!\n";
    cout << "This is your first overdue notice.\n";
    cout << "The fine you owe is $" << fine << ".\n";
  } else {
    //Returned on time. No fine.
    cout << "Your book was returned on time!\n";
    cout << "No fine.\n";
  }
  return 0;
}
