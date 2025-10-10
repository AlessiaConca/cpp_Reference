/*
All three output stream classes Preview: Docs Loading link description
 we discussed, standard output (cout), file streams (ofstream), and string stream (stringstream), 
 are subclasses of ostream, allowing us to use them interchangeably in some situations.
*/

#include <iostream>
#include <fstream>

using namespace std;

void reportSpeed(ostream& os, double speed) {
  os.setf(ios::floatfield, ios::scientific);
  os.precision(3);
  os << "Speed: " << speed << endl;
}

int main() {
  const int speedOfLight = 299792458;
  ofstream outFile("output.txt");
  reportSpeed(cout, speedOfLight);
  reportSpeed(outFile, speedOfLight);
  return 0;
}