#include <fstream>
#include <iostream>
#include <cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");
  int N = 234;
  int zahl;
  double mean_fin = 0;
  double V_fin = 0;
  for (int j = 1; j < 27; j++){
    double mean = 0;
    double V = 0;

    for (int i = 1; i < 10; i++){
      fin >> zahl;
      mean += zahl;
    }
    mean = mean/9;
    mean_fin += mean;

    for (int i = 1; i < 10; i++){
      fin2 >> zahl;
      V += (zahl-mean)*(zahl-mean);
    }
    V = V/9; 
    V_fin += V;

    fout << mean << std::endl;
    fout2 << V << std::endl;
  
  }
  fout.close();
  fout2.close();
  fin.close();

  mean_fin /= 26;
  V_fin /= 26;
  //std::cout << mean_fin << std::endl;
  std::cout << V_fin << std::endl;
}