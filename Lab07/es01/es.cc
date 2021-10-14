//Diego Oniarti
#include <iostream>
using namespace std;

bool isMinuscolo(char c);
bool isMaiuscolo(char c);

int main(){
  char a,b;
  cout << "Inserire A e B:" << endl;
  cin >> a >> b;

  //if (b>a && ((isMinuscolo(a)&&isMinuscolo(b))||(isMaiuscolo(a)&&isMaiuscolo(b)))){
  if (b>a && a>0 && b>0){
    for (int i=a; i<=b; i++){
      cout << (char)i << " ";x
    }
    cout << endl;
  }else{
    cout << "Intervallo non valido"<<endl;
  }
  
  return 0;
}


bool isMinuscolo(char c){
  return ('a'<=c && c<='z');
}
bool isMaiuscolo(char c){
  return ('A'<=c && c<='Z');
}
