//Diego Oniarti
#include <iostream>
using namespace std;

//Dato un oraroi in formato "ore minuti secondi", stampa il numero di secondi passati da mezzanotte
int main(){
  int ore,minuti,secondi;

  cout << "Inserire orario: ";
  cin >> ore >> minuti >> secondi;

  cout << "Minuti a mezzanotte: " << ((ore*60)+minuti)*60+secondi<<endl;
  
  return 0;
}
