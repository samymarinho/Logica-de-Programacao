#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
// SEQU�NCIA

int main (){
	setlocale (LC_ALL,"");
	int n,i, opc, var, x;
	int aux1 = 1, aux2 = 1;
	do{
			
	printf ("\nDIGITE O N�MERO QUE DESEJA REALIZAR A SEQU�NCIA: \n");
	scanf("\n%d", &n);
	system ("cls");
	
	printf ("\n-------- ESCOLHA A OPERA��O QUE DESEJA:----------\n");
	printf ("1. Sequ�ncia de n�meros pares\n");
	printf("2. Sequ�ncia de n�meros �mpares\n");
	printf ("3. Sequ�ncia de n�meros primos\n");
	printf ("4. Sequ�ncia de n�meros Fibonacci\n");
	printf ("5 - SAIR.\n");
	printf ("Escolha uma op��o: ");
	scanf ("%d", &opc);

	switch (opc){
		
		case 1: 
		for (i=0; i<=n; i++){
		if (i % 2 == 0){
		printf ("%d \n", i);	
		}
		}
		break;
		
		case 2:
		for (i=0; i<=n; i++){
		if (i % 2 != 0){
		printf ("%d ", i);	
		}
		}
		break;
		
		case 3:
	    for (i=2; i<=n;i++) {
        var=1; 
        for (x=2; x*x<=i; x++) {
            if (i % x == 0) {
                var = 0;
                break;
            }
        }
        if (var) printf("%d ", i);
    }
		break;
		
		case 4:
  		for (var = 0; var <= n;var = aux1 + aux2){
        printf("%d ", var);
        aux1 = aux2; 
        aux2 = var;
    }
		break;
		
		case 5:
		printf ("SAIR");
		break;
		
		default:
		printf ("Op��o inv�lda!");
		break;	

}
	
}while (opc != 5);
return 0;
}

