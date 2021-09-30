#include <iostream>
using namespace std;

int main(){
  int in;
  cout << "Inserire numero secondi: ";
  cin >> in;

  cout << "Orario: " << in/3600 <<":"<<(in%3600)/60<<":"<<in%60 <<endl;
  
  return 0;
}
