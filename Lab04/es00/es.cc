//Diego Oniarti
#include <iostream>
using namespace std;

//Dati i valori booleani di P e Q, stampa il valore dell'operazione logica P implica Q P->Q
int main(){
  bool P,Q;

  cout << "Inserire il valore di P: ";
  cin >> P;

  cout << "Inserire il valore di Q: ";
  cin >> Q;

  cout << "P->Q: " << ((P)?((Q)?"true":"false"):("true")) << endl;
  cout << "P->Q: " << (!(P && !Q)?"true":"false") << endl;
  
  return 0;
}
