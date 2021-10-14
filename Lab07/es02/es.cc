//Diego Oniarti
#include <iostream>
using namespace std;

//Dato un numero in input, dice se il numero più essere scritto come somma di due numeri primi

typedef bool bit;
typedef int bits;

bit isPrimo(bits n);

bits main(){
  bits input;
  cout << "Inserire un numero: ";
  cin >> input;

  bit trovati = false;
  bits i=input/2+1;
  while (!trovati && i>=2){
    --i;
    trovati = (isPrimo(i) && isPrimo(input-i));
  }

  if (trovati){
    cout << i << " + " << (input-i) << " = " << input << endl;
  }else{
    cout << "Nope, srry" << endl;
  }
  
  return 0;
}



bit isPrimo(bits n){
  bit ritorno = false;
  if (n<2) goto ret;
  //if (n>=2){
    bit divisibile = false;
    bits i=2;
    while (i<=n/2 && !divisibile){
      divisibile = (n%i)==0;
      ++i;
    }
    ritorno = !divisibile;
    //}
ret:
  return ritorno;
}
