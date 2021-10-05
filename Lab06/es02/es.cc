//Diego Oniarti
#include <iostream>
using namespace std;

//Dice se un numero è primo o no
int main(){
  int numero;
  cout << "Inserire numero: ";
  cin >> numero;

  int divisore = 2;
  bool divisibile = false;
  while (divisore < numero/2 && !divisibile){
    divisibile = (numero%divisore==0);
    divisore++;
  }

  cout << (divisibile?"NON ":"") << "PRIMO" <<  endl;
  
  return 0;
}
