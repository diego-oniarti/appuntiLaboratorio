//Diego Oniarti
#include <iostream>
using namespace std;

//Dato un carattere minuscolo, stampa il carattere maiuscolo corrispondente
int main(){
  char carattere;

  cout << "Inserire carattere minuscolo: ";
  cin >> carattere;

  cout << "Carattere maiuscolo: " << char(carattere-'a'+'A') << endl;
  
  return 0;
}
