#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

int main() {
  using std::cout;
using std::endl;
using std::string;

  int l;

  double laenge{ 100.05 };
   char zeichen;
   l = laenge;
   zeichen = laenge;
   std::cout << laenge << " " << l << " " << zeichen << endl;
 string messlatte { "777.77" };
   //laenge = static_cast<double>(messlatte);  //sorgt für fehler beim compilieren
  return 0;
}
