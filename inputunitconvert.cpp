// 35 lines of less cancer
#include <iostream>
using namespace std;
int main()
{
  float input,output;
  int mode;
  string outunit;
  cout << "Pick what you want to convert to." << endl;
  cout << "1. Inches\n";
  cout << "2. Meters\n";
  cout << "3. Kilometers\n";
  cin>>mode;
  cout << "Input the starting value in feet." << endl;
  cin >> input;
  switch(mode)
  {
      case 1:
      output = input*12;
      outunit = "inches";
      break;
      case 2:
      output = input*0.3048;
      outunit = "meters";
      break;
      case 3:
      output=input*0.0003048;
      outunit = "kilometers";
      break;
      default:
      cout << "MONORAIL" << endl;
      break;
  }
  cout << "Conversion: Your input is equal to " << output << " " << outunit << endl;
}
