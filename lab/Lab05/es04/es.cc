#include <iostream>
using namespace std;

int main(){char input;cout << "Inserire un carattere: ";cin >> input;if ('A'<=input && input<='Z')input -= 'A'-'a';switch(input){case 'a':case 'e':case 'i':case 'o':case 'u':cout << "VOCALE" << endl;break;default:cout << "CONSONANTE" << endl;}return 0;}