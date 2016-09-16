#include <stdio.h>
#include <stdlib.h>

int contaFrequencia(int a[], int t);

int main() {
	
	int t; //quantidade de numeros
	scanf("%i", &t);
	
	
		int array[t];
		int i = 0;
		for (; i<t; i++) {	
			scanf("%d", &array[i]); //usando o for para digitar valor de numeros dentro do array
		}
		int res = contaFrequencia(array, t)	;
			
	return 0;
}

int contaFrequencia(int a[], int t) {
	int i = 0, j = 0, f = 0, maximaFrequencia = 0, n = 0; //cria o "i" e o "J" para usar o for, f=quantidade de numeros
		for (i = 0; i <= t; i++) {
			for (j = 0; j <= t; j++) {
				
				if (a[j] == a[i]) { //se o valor de "j" e "i" forem iguais adiciona mais 1 ao F(quantidade de numeros)
					f++;
 				}	 
				else{
					f = 0;
				}
   					
  				if (f > maximaFrequencia) { //define qual o valor final que mais se repete
   					n = a[i];
   					maximaFrequencia = f;
  				}
 			}
		}
		printf("%d\n", maximaFrequencia); //mostra o resultado final
	return maximaFrequencia;

}
