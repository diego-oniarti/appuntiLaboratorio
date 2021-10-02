//Diego Oniarti
#include <iostream>
#include <cmath>
using namespace std;

//Dati tre valori A, B e C; calcola i risultati dell'equazione AX^2 + BX + C = 0
//Se il delta risulta negativo, vengono chiesti dei nuovi valori per A, B e C
int main(){
  float a,b,c;

 inizio:
  cout << "Inserire A, B e C:"<<endl;
  cin >> a >> b >> c;

  float delta = (b*b) - (4*a*c);
  if (delta < 0) goto errore;

  float radice = sqrt(delta);
  float x1 = (-b+radice)/(2*a);
  float x2 = (-b-radice)/(2*a);

  cout << "X1: " << x1 << endl
       << "X2: " << x2 << endl;
  goto fine;

 errore:
  cout << "Delta negativo"<<endl;
  goto inizio;

 fine:
  return 0;
}
