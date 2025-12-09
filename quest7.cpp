/*- - Crie um vetor com 10 números digitados pelo usuário.
    Depois peça um número X e informe:
    Se X está no vetor
    Em qual posição ele aparece pela primeira vez
*/


#include <iostream>






 using namespace std;
int main(){
	
	int numeros[10];
	int pos,x;
   
		
    for(int i=0;i<10;i++){
    	cout<<"digite um número"<<endl;
		cin>> numeros[i];
	}
	
	
        cout << "Digite o valor x "<< ": ";
        cin >> x;
	
	for(int i=0;i<10;i++){
		cout<<"número atual:"<<numeros[i]<<endl;
		if (numeros[i]==x){
			pos=i;//passo a posição a pos!!!
			cout<<"o número foi encontrado!!!!"<<endl;
			cout<<"a posição do número x é "<< pos <<endl;
			break;
		}
		else{
		   cout<<"o número não foi encontrado no vetor!"<<endl;
		}
	}
	
	
	
	

	
	return 0;
}
