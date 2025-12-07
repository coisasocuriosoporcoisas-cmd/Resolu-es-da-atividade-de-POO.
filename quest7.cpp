/*- - Crie um vetor com 10 números digitados pelo usuário.
    Depois peça um número X e informe:
    Se X está no vetor
    Em qual posição ele aparece pela primeira vez
*/


#include <iostream>






 using namespace std;
int main(){
	
	int numeros[10];
   
	
	//int maior = numeros[0];//
    //int menor = numeros[0];//<-declara as variaveis aqui só quando o meu array já estive com seus valores definidos.
	
	
	 for (int i = 0; i < 10; i++) {
        cout << "Digite o valor para a posicao " << i+1 << ": ";
        cin >> numeros[i];
    }
	
	int maior = numeros[0];//elas estão aqui para evitar erros lógicos, pois se inicializamos elas antes de passamos os respectivais valores, ocorrera erros.
    int menor = numeros[0];//
	int indicemaior = 0;
    int indicemenor = 0;
	for(int i=0;i<10;i++){
		
		
     if (numeros[i]> maior ){
		maior = numeros[i];//[i] para atribuir o maior valor a cada rodada, é compara caso não seja é menor, se não é maior, até finaliza a lista e as posições serem preechidas., ele compara com o anteriror.
		indicemaior=i;	  		}/*
					  
		for(int i=0;i<5;i++){
			lista do array{1,2,7,9,0,8};
			
			
			if (numeros[i]< maior(0 até agora.){
				
				maior= numero[i];
				maior =1
				
				
				

			}
           else
	  	  	  {
		   		menor = numeros[i];
				}
						
		}			  
					  
					  */
	 if ( numeros[i] < menor) //aqui segue o mesmo esquema, em vez de ter um else para caso contrário, o que quebraria a lógica, já que ambos os valores precisam ser chegados individualmente, o if verficar se o anterior e menor que o atual, e assim sucecivamente.
	 		  
	 {
		menor = numeros[i];//
		 indicemenor=i;
	 }
		
	
	}
	
	
	
	cout<<"O maior e:"<< maior<< "\tSEU INDICE E:"<<indicemaior <<endl;//
    cout<<"O menor e:"<<menor<< "\tSEU INDICE E:"<<indicemenor<<endl;//
	
	return 0;
}
