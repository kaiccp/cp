#include <iostream>
using namespace std;

int main()
{
  int var;
  cout<<"Digite o valor 1";
  cin>>var;
  
  switch(var)
  {
    case 10:
      cout<<"Valor é 10";
      break;
    case 15:
      cout<<"Valor é 11";
      break;
    default:
      cout<<"Não reconhecido";
  }
  return 0;
}
