#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* caixa eletr�nico
 O programa deve exibir um menu de op��es para o usu�rio escolher. O
menu deve conter as seguintes op��es:
1. Verificar saldo
2. Depositar dinheiro
3. Sacar dinheiro
4. Sair */
 int main (){
 	
 	setlocale (LC_ALL, "");
 	float x, valor, saque;
 	int opc;
 	do{

 	printf ("------- CAIXA ELETR�NICO -------- \n");
 	printf ("1. Verificar saldo\n");
 	printf ("2. Depositar dinheiro \n");
 	printf ("3. Sacar dinheiro\n");
 	printf ("4. Sair\n");
 	printf ("Escolha uma op��o: ");
 	scanf ("%d", &opc);

 	
 	switch (opc){
 		
 		case 1: 
 		printf ("Seu saldo atual: R$ %.2f\n", x);
 		break;
 		
 		case 2:
 		printf ("Valor a ser depositado: R$ \n");
 		scanf ("%f", &valor); 		
		 x = x + valor;
 		printf ("Dep�sito realizado com sucesso\n");

 		break;
 		case 3:
 		printf ("Valor a ser sacado: R$");
 		scanf ("%f", &saque);
 		if (saque < x) {
 		x = x - saque;
 		printf ("Saque realizado com sucesso!");
		}
		else {
			printf ("Saldo insuficiente!");
			printf ("Saldo atual: R$ %.2f", &x);
		}
		break;
		
		case 4:
			printf ("Obrigado por utilizar o Caixa Eletr�nico!");
			break;
			
		default:
			printf ("Op��o inv�lida!");
			break;
	 	}
 	
	
} while (opc!=4);
return 0;
 }

