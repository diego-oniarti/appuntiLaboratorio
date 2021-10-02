//Diego Oniarti
#include <iostream>
using namespace std;


float potenza(float base, int esponente){
  float risultato = 1;
  for (int i=0; i<esponente; i++){
    risultato*=base;
  }
  return risultato;
}

//Dato un raggio scelto dall'utente, calcola e visualizza l'area e la circonferenza
int main(){
  const float PI = 3.14;
  float raggio,area,circonferenza;

  //TODO: aggiungere controllo input
  cout << "Indicare il raggio: ";
  cin >> raggio;
    
  area = PI*potenza(raggio,2);
  circonferenza = 2*raggio*PI;

  cout << "Area: " << area << endl;
  cout << "Circonferenza: " << circonferenza << endl;

  return 0;
}
