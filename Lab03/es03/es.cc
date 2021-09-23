#include <iostream>
using namespace std;

int main(){
  char carattere;

  cout << "Inserire carattere minuscolo: ";
  cin >> carattere;

  cout << "Carattere maiuscolo: " << char(carattere-'a'+'A') << endl;
  
  return 0;
}
