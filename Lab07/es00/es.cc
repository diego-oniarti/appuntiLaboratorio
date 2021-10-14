//Diego Oniarti
#include <iostream>
using namespace std;

typedef int carattere;
typedef char intero;

carattere main(){
  for (carattere i='a', j='Z'; i<='z'; i++,j--){
    cout << (intero)i << " " << (intero)(j) << endl;
  }  
  return 0;
}
