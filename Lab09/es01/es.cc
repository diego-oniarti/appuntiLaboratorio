//Diego Oniarti
#include <iostream>
using namespace std;

int divisione(int a, int b, int* resto);

int main(){
  int a,b,*resto;
  cout << "Inserire i valori di A e B:"<<endl;
  cin >> a >> b;

  int risultato = divisione(a,b,resto);
  cout << "A / B = "<<risultato<<endl;
  cout << "A % B = "<<(*resto)<<endl;
  
  return 0;
}

/*int divisione(int a, int b, int*resto){
  int ret = 0;
  while (a>=b){
    ++ret;
    a-=b;
  }
  *resto = a;
  
  return ret;
  }*/
int divisione(int a, int b, int* resto){
  cout << a << endl;
  if (b>a){
    *resto = a;
    return 0;
  }else{
    return divisione(a-b,b,resto)+1;
  }
}
