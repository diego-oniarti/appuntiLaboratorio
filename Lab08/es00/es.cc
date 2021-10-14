//Diego Oniarti
#include <iostream>
using namespace std;

//Prende in input in carattere. Se è una lettera minuscola la converte a maiuscola 

bool isMinuscolo(char);
char toUpperCase(char);

int main(){
  char carattere;
  cout << "Inserisci un carattere:"<<endl; 
  cin >> carattere;

  if (isMinuscolo(carattere)){
    cout << "Carattere maiuscolo: "<<toUpperCase(carattere)<<endl;
  }else{
    cout << "Non hai inserito un carattere minuscolo"<<endl;
  }

  return 0;
}

bool isMinuscolo(char carattere){
  return ('a'<=carattere && carattere<='z');
}
char toUpperCase(char carattere){
  return carattere+'A'-'a';
}
