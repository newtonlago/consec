#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int contaFrequencia(int a[], int t);
int main() {
int array[] = {30,30,40,40,40,40,40,40,30,30,30};
int t = 10;
contaFrequencia(array, t);
return 0;
}
int contaFrequencia(int a[], int t) {
	int i = 0, j = 0, f = 0, maximaFrequencia = 0, n = 0;
		for (i = 0; i < t; i++) {
 		for (j = 0; j < t; j++) {
  			if (a[j] == a[i]) {
   			f++;
  			} 
		else
   		f = 0;
  		if (f > maximaFrequencia) {
   		n = a[i];
   		maximaFrequencia = f;
  }
 }
}
printf("%d", maximaFrequencia);
getch();
return 0;
}
 
