#include <fstream>
#include <iostream>
#include <cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  int N = 234;
  double mean = 0;
  int zahl;
  for (int i = 1; i < N+1; i++){
    fin >> zahl;
    mean += zahl;
  }
  fin.close();
  mean = mean/N; 
  //std::cout << mean << std::endl;

  double V = 0;
  fin.open("datensumme.txt");
  for (int i = 1; i < N+1; i++){
    fin >> zahl;
    V += (zahl-mean)*(zahl-mean);
  }
  V = V/N;
  //std::cout << V << std::endl;

  double sig = sqrt(V);
  std::cout << sig << std::endl;
}