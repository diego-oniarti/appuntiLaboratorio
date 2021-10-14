//Diego Oniarti
#include <iostream>
using namespace std;

//inverte un numero

void inverti(int);
void inverti(int*);

int main(){
  int numero;
  cout << "Inserire un numero: ";
  cin >> numero;

  //inverti(numero);
  inverti(&numero);
  cout << "Numero invertito: "<< numero << endl;
  return 0;
}

void inverti(int numero){
  while (numero>0){
    cout << numero%10;
    numero/=10;
  }
  return;
}

void inverti(int* numero){
  int ret=0;
  while (*numero>0){
    ret*=10;
    ret+=(*numero)%10;
    *numero/=10;
  }
  *numero=ret;
}
