//Diego Oniarti
#include <iostream>
using namespace std;

//Dati un carattere minuscolo ed un offset, stampa il carattere shiftato di offset posizioni 
int main(){
  char carattere;
  int offset;

  cout << "Inserire carattere: ";
  cin >> carattere;

  cout << "Inserire offset: ";
  cin >> offset;

  cout << "Carattere shiftato: " << (char)( ((carattere-'a'+offset)%('z'-'a'+1))+'a' ) << endl;
  
  return 0;
}
