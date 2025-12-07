/*- Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está
*/


#include <iostream>




/*- Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está
*/

 using namespace std;
int main(){
	
	int numeros[5];
	
	//int maior = numeros[0];//
    //int menor = numeros[0];//<-declara as variaveis aqui só quando o meu array já estive com seus valores definidos.
	
	
	 for (int i = 0; i < 5; i++) {
        cout << "Digite o valor para a posicao " << i+1 << ": ";
        cin >> numeros[i];
    }
	
	int maior = numeros[0];//elas estão aqui para evitar erros lógicos, pois se inicializamos elas antes de passamos os respectivais valores, ocorrera erros.
    int menor = numeros[0];//
	
	for(int i=0;i<5;i++){
		
		
     if (numeros[i]> maior ){
		maior = numeros[i];//[i] para atribuir o maior valor a cada rodada, é compara caso não seja é menor, se não é maior, até finaliza a lista e as posições serem preechidas., ele compara com o anteriror.
			  		}/*
					  
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
	 if ( numeros[i] < menor)//aqui segue o mesmo esquema, em vez de ter um else para caso contrário, o que quebraria a lógica, já que ambos os valores precisam ser chegados individualmente, o if verficar se o anterior e menor que o atual, e assim sucecivamente.
	 {
		menor = numeros[i];//
	 }
		
	
	}
	
	
	
	cout<<"maior:"<< maior <<endl;//
    cout<<"menor:"<<menor<<endl;//
	
	return 0;
}




