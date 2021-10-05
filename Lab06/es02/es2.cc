#include <iostream>
using namespace std;int main(){int numero;cout<<"Numero? ";cin>>numero;int divisore=2;bool divisibile=false;while(divisore<numero/2 && !divisibile){divisibile=(numero%divisore==0);++divisore;}cout<<(divisibile?"NON ":"")<<"PRIMO"<<endl;return 0;}
