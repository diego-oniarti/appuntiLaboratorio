//Diego Oniarti
#include <iostream>
using namespace std;

//Dati due numeri in input A e B, stampa il valore di |A-B|
int main(){
  float a,b;

  cout << "Inserire A e B: ";
  cin >> a >> b;

  //vedi: IEEE754. In particolare il significato del MostSignificantBit
  float dif = a-b;
  int tmp;
  tmp = *(int*) &dif;
  tmp = tmp & 0b01111111111111111111111111111111;
  dif = *(float*) &tmp;
  
  //cout << "|A-B| = " << ((dif<0)?(-dif):dif)  << endl;
  cout << "|A-B| = " << dif  << endl;
  
  return 0;
}
