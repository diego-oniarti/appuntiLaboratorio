#include <iostream>
using namespace std;

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
