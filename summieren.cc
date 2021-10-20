#include <fstream>
#include <iostream>


int main() {
  std::ifstream fin("daten.txt");
  int zahl, zahl2;
  fin >> zahl >> zahl2;
  fin.close();
  //std::cout << zahl << " " << zahl2 << std::endl;

  fin.open("daten.txt");
  std::ofstream fout("datensumme.txt");
  for(int i = 1; i < 235; i++) {
    fin >> zahl >> zahl2;
    //std::cout << zahl << " " << zahl2 << std::endl;
    fout << zahl + zahl2 << std::endl;
    }
  fin.close();
  fout.close();
}