//Diego Oniarti
#include <iostream>
using namespace std;

//Stampa i primi N numeri della serie di fibonacci
int main(){
  int numeroNumeri;
  int a=0,b=1;
  cout << "Inserire numero numeri: ";
  cin >> numeroNumeri;

  for (int i=1; i<=numeroNumeri; i++){
    cout << i << ": " << a << endl;
    b = a+b;
    a = b-a;
  }
  
  return 0;
}
