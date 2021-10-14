//Diego Oniarti
#include <iostream>
using namespace std;

void scambia(double*, double*);

int main(){
  double a,b;
  cout << "Inserire valori di A e B:"<<endl;
  cin >> a >> b;

  scambia(&a,&b);
  cout << "A: "<<a<<endl<<"B: "<<b<<endl;
  
  return 0;
}

void scambia(double* a, double* b){
  double c = *a;
  *a = *b;
  *b = c;
  return;
}
