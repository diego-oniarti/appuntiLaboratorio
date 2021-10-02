//Diego Oniarti
#include <iostream>
using namespace std;

//Dati un prezzo ed un'IVA, calcola il prezzo con IVA mediante la  formula (prezzo+prezzo*iva/100)
int main(){
  float iva, prezzo;

  cout << "Inserire prezzo: ";
  cin >> prezzo;

  cout << "Inserire iva: ";
  cin >> iva;

  cout.precision(2);
  cout << fixed;
  
  cout << "Prezzo con iva: " << prezzo+((prezzo*iva)/100) << endl;
  
  return 0;
}
