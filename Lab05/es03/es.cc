//Diego Oniarti
#include <iostream>
using namespace std;

//Dato in unput un numero da 1 a 7, scrive il nome del giorno della settimana corrispondente
int main(){
  int N;
  cout << "Inserire numero settimana: "; 
  cin >> N;

  /*switch (N){
  case 1:
    cout << "Lunedi";
    break;
  case 2:
    cout << "Martedi";
    break;
  case 3:
    cout << "Mercoledi";
    break;
  case 4:
    cout << "Giovedi";
    break;
  case 5:
    cout << "Venderdi";
    break;
  case 6:
    cout << "Sabato";
    break;
  case 7:
    cout << "Domenica";
    break;
  }
  cout << endl;*/

  cout << ((N==1)?"Lunedi":((N==2)?"Martedi":((N==3)?"Mercoledi":((N==4)?"Giovedi":((N==5)?"Venerdi":((N==6)?"Sabato":((N==7)?"Domenica":"Numero non ammesso"))))))) << endl;
  
  return 0;
}
