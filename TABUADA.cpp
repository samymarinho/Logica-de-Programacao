#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
// TABUADA

int main (){
	setlocale (LC_ALL,"");
	int n,i, opc;
	do{
	printf ("\nDIGITE O NÚMERO QUE DESEJA REALIZAR A TABUADA: \n");
	scanf("\n%d", &n);
	
	printf ("-------- ESCOLHA A OPERAÇÃO QUE DESEJA:----------\n");
	printf ("1 - ADIÇÃO\n");
	printf("2 - SUBTRAÇÃO\n");
	printf ("3 - MULTIPLICAÇÃO\n");
	printf ("4 - DIVISÃO\n");
	printf ("5 - SAIR.\n");
	printf ("Escolha uma opção: ");
	scanf ("%d", &opc);

	
	switch (opc){
		case 1:
			printf ("\nTABUADA DE ADIÇÃO:");
			for (i= 1; i <=10; i++){
			printf ("\n%d + %d = %d ", n, i, n+i);}
			break;
		case 2:
			printf ("\nTABUADA DE SUBTRAÇÃO:");
			printf("\n%d - %d = %d", n, n, n-n);
			for (i=1; i <=10;i++){
			printf("\n%d - %d = %d", n+i, n, ((n+i)-n));}
			break;
		case 3: 
			printf ("\nTABUADA DE MULTIPLICAÇÃO: ");
			for (i=1; i<=10; i++){
			printf ("\n%d * %d = %d", n, i, n*i);}
			break; 
		case 4:
			printf("\nTABUADA DE DIVISÃO: ");
			for (i = 1; i<=10; i++){
			printf("\n%d / %d = %d", n*i, n, (n*i/n));}
			break;	
		case 5:
			printf ("\nSAIR.");
			break;
		default:
			printf ("Opção inválida!Tente novamente.\n");	
			break;						
	}
}while (opc != 5);
	
	return 0;
}
