//Diego Oniarti
#include <iostream>
using namespace std;

//Dati 3 valori in input, indica il minore
//questa programmazione è best practice e questo codice non può essere migliorato
int main(){
  float a,b,c;

  cout << "Inserire A, B e C:"<<endl;
  cin >> a >> b >> c;

  cout << "Numero minore: ";
  if (a>b) goto escludiA;
  if (a>c) goto C;
  goto A;
 escludiA:
  if (b>c) goto C;
  cout << b;
  goto fine;
 A:
  cout << a;
  goto fine;
 C:
  cout << c;
 fine:
  cout << endl;
  return 0;
}
