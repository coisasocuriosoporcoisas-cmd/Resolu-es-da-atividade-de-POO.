
/*- Usando o vetor do exercício anterior, calcule e exiba:
    A soma total dos números
    A média aritmética dos valores
*/

#include <iostream>
#
 using namespace std;
int main(){
	
	int numeros[5];
  int soma=0;
  int div;
	
	for(int i=0; i<5; i++){
		cout<<"informe numeros :"<<endl;
		cin >>numeros[i];	
		
	}
for(int i=0;i<5;i++){
  soma+=numeros[i];
  cout<<"soma atual:"<<soma<<endl;

}
	div=soma/5;
	cout<<"sua media aritimetrica é "<< div<<endl;
	return 0;
}
