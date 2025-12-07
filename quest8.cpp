
/*

  - Crie um vetor de 6 nomes (strings).
    O programa deve:
    Ler os nomes
    Perguntar um nome a ser buscado
    Informar se ele existe no veto
  
  
  
  */

#include <iostream>
#include <string>
using namespace  std;

int main()
{
  string nomes[6];

  for(int i=0;i<6;i+=1)
  {

    cout<<"Informe um nome:\n\t";
    getline(cin,nomes[i]);//função para auxiliar caso o usuario ponha um espeaço entre os nomes.
   
  }
  for(int i=0;i<6;i+=1)
  {
    cout<<"\nNome:"<< nomes[i]<<"\t Posição"<< i <<endl;
  
  }






  return 0;
}
