//Diego Oniarti
#include <iostream>
using namespace std;

//Prende in input in carattere. Se è una lettera minuscola la converte a maiuscola 

void mov(char, bool*);
void int21h(char*);

int main(){
  char carattere;
  cout << "Inserisci un carattere:"<<endl; 
  cin >> carattere;

  bool minuscolo;
  mov(carattere, &minuscolo);
  if (!minuscolo) goto nonMinuscolo;
  int21h(&carattere);
  cout << "Carattere maiuscolo: "<<carattere<<endl;
  goto fineIf;
 nonMinuscolo:
  cout << "Non hai inserito un carattere minuscolo"<<endl;
 fineIf:

  return 0;
}

void mov(char carattere, bool* ret){
  *ret = ('a'<=carattere && carattere<='z');
}
void int21h(char* carattere){
  *carattere = (*carattere)+'A'-'a';
}
