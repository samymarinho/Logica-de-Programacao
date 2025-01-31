#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// AGENCIA DE VIAGEM

int main (){
	setlocale (LC_ALL, "portuguese");
	int opc, km, quant, auton;
	float comb, hosp, alim, guia, porce;
	float total, alug, gasto, totalacresc, totaltotal, porcepessoa;
do {
	printf ("Bem-vindo! \n");
	printf ("-------- SISTEMA DE AGÊNCIA DE VIAGEM --------- \n");
	printf ("[1]. Entrada dos Dados\n");
	printf ("[2]. Porcentagem de ganhos\n");
	printf ("[3]. Valor da viagem por pessoa \n");
	printf ("[4]. SAIR \n");
	printf ("Escolha uma opção: ");
	scanf ("%d", &opc);
	
	switch (opc){
		case 1: 
		printf ("Quantidade de pessoas: \n");
		scanf ("%d", &quant);
		printf ("Total de KM²: \n");
		scanf ("%d", &km);
		printf ("Autonomia do veículo: \n");
		scanf ("%d", &auton);
		printf ("Valor do combustível R$: \n");
		scanf ("%f", &comb);
		printf ("Valor do aluguel do veículo R$: \n");
		scanf ("%f", &alug);
		printf ("Valor da hospedagem R$: \n");
		scanf ("%f", &hosp);
		printf ("Valor da alimentação R$: \n");
		scanf ("%f", &alim);
		printf ("Valor do guia de viagem R$: \n");
		scanf ("%f", &guia);
		printf ("\n \n Pressione Enter para voltar ao Menu anterior!");
		
		km = km * 2;
		km = km / auton;
		gasto = km * comb;
		
		total = comb + hosp + alug + alim + guia + gasto;
		break;
		
		
		case 2:
			printf ("------- PORCENTAGEM DE GANHO --------\n");
			printf ("Custo de viagem: %f \n", total);
			printf ("Porcentagem de ganho de empresa: \n");
			scanf ("%f", &porce);
			porce = porce / 100;
			totalacresc = total * porce;
			totaltotal = totalacresc + total;
			printf ("Porcentagem de ganho da empresa R$: %0.2f\n", totalacresc);
			printf ("Valor total com acréscimo da porcentagem: %0.2f\n", totaltotal);
			printf ("\n \n Pressione Enter para voltar ao Menu anterior!");
			break;
			
		case 3:
			porcepessoa = totaltotal / quant;
			printf (" -------- VALOR DA VIAGEM POR PESSOA -------- \n");
			printf ("Valor da viagem por pessoa R$: %f", porcepessoa);
		
			printf ("\n \n Pressione Enter para voltar ao Menu anterior!");
		
		case 4: 
		printf ("Finalizando o programa..... \n");
		printf ("\n \n Pressione Enter para voltar ao Menu anterior!");
		default:
		printf ("n \n Pressione Enter para voltar ao Menu anterior!");
	}
}while (opc!=4);
return 0;
}
