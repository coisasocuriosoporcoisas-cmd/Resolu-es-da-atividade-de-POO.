/*- Crie um programa que:
    Possua um vetor de 5 números inteiros
    Peça ao usuário para digitar os valores
    Exiba todos os valores digitados
-usando apena o loop for
*/


#include <iostream>
using namespace std;

int main(){
	
	int numeros[5];
	
	for(int i=0; i<6; i++){
		cout<<"informe numeros :"<<endl;
		cin >>numeros[i];	
		
	}
	for(int i=0;i<5;i++){
		cout<<"numero: "<< numeros[i]<<endl;
	}
	cout<<numeros[4]<<endl;
	
	
	
	
	
	
	
	return 0;
}
