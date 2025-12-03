
/*

- Crie um programa que:
    Possua um vetor de 5 números inteiros
    Peça ao usuário para digitar os valores
    Exiba todos os valores digitados






*/







#include <iostream>
using namespace std;

int main(){
	
	int numeros[6];
	
	
	int i=0;
	
	while (i<6){
		
		
		
		i+=1;
		cout<<"insira um número"<<endl;
		cin>> numeros[i];
		
	}
	int l=0;
	while(l<6) {
		
		cout<<"dados armazenados atraves do loop while\nproduto"<<l+1<<numeros[i]<<endl;
		l+=1;
		
		
	}
	
	
	
	
	
	
	return 0;
}
