#include <iostream>
#include <fstream>
using namespace std;

int main () {
  
  ofstream myfile;
  
  myfile.open ("mortySmith.txt");
  
  myfile << "Oh Jeez Rick\n";
  
  myfile.close();
  
  return 0;
}
