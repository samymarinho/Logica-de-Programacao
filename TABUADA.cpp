#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
// TABUADA

int main (){
	setlocale (LC_ALL,"");
	int n,i, opc;
	do{
	printf ("\nDIGITE O N�MERO QUE DESEJA REALIZAR A TABUADA: \n");
	scanf("\n%d", &n);
	
	printf ("-------- ESCOLHA A OPERA��O QUE DESEJA:----------\n");
	printf ("1 - ADI��O\n");
	printf("2 - SUBTRA��O\n");
	printf ("3 - MULTIPLICA��O\n");
	printf ("4 - DIVIS�O\n");
	printf ("5 - SAIR.\n");
	printf ("Escolha uma op��o: ");
	scanf ("%d", &opc);

	
	switch (opc){
		case 1:
			printf ("\nTABUADA DE ADI��O:");
			for (i= 1; i <=10; i++){
			printf ("\n%d + %d = %d ", n, i, n+i);}
			break;
		case 2:
			printf ("\nTABUADA DE SUBTRA��O:");
			printf("\n%d - %d = %d", n, n, n-n);
			for (i=1; i <=10;i++){
			printf("\n%d - %d = %d", n+i, n, ((n+i)-n));}
			break;
		case 3: 
			printf ("\nTABUADA DE MULTIPLICA��O: ");
			for (i=1; i<=10; i++){
			printf ("\n%d * %d = %d", n, i, n*i);}
			break; 
		case 4:
			printf("\nTABUADA DE DIVIS�O: ");
			for (i = 1; i<=10; i++){
			printf("\n%d / %d = %d", n*i, n, (n*i/n));}
			break;	
		case 5:
			printf ("\nSAIR.");
			break;
		default:
			printf ("Op��o inv�lida!Tente novamente.\n");	
			break;						
	}
}while (opc != 5);
	
	return 0;
}
