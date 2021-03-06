//Diego Oniarti
#include <iostream>
using namespace std;

int divisione(int a, int b, int* resto);
void sistema(int* ore, int* minuti, int*secondi);

int main(){
  int ore,minuti,secondi;
  cout << "Inserire ore, minuti, e secondi:"<<endl;
  cin >> ore >> minuti >> secondi;

  sistema(&ore,&minuti,&secondi);
  cout << "Ore: "<<ore<<endl<<"Minuti: "<<minuti<<endl<<"Secondi: "<<secondi<<endl;
  
  return 0;
}


void sistema(int *ore, int* minuti, int* secondi){
  *ore += divisione(*minuti+( divisione(*secondi,60,secondi) ),60,minuti);
  return;
}

int divisione(int a, int b, int* resto){
  int ret = 0;
  while (a>=b){
    ++ret;
    a-=b;
  }
  *resto = a;
  return ret;
}
