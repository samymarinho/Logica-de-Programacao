#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");
    int voto, opc, opc2, cod, voto1 = 0, voto2 = 0;
    int num1, num2;
    char cand1[15], cand2[15];

    do {
        printf("\n******************************************\n");
        printf("*            URNA ELETRÔNICA             *\n");
        printf("*[1] - CADASTRO DE CANDIDATOS       	 *\n");
        printf("*[2] - VOTAÇÃO                           *\n");
        printf("*[3] - ENCERRAMENTO DA VOTAÇÃO       	 *\n");
        printf("******************************************\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("DIGITE O NOME DO CANDIDATO 1: \n");
                scanf("%s", &cand1);
                printf("DIGITE O NÚMERO DO CANDIDATO 1: \n");
                scanf("%d", &num1);
                printf("DIGITE O NOME DO CANDIDATO 2: \n");
                scanf("%s", &cand2);
                printf("DIGITE O NÚMERO DO CANDIDATO 2: \n");
                scanf("%d", &num2);
                printf("******** IMPRESSÃO DA ZERÉSIMA ********\n");
                printf("*             CANDIDATO %s          *\n", cand1);
                printf("*            POSSUI 0 VOTOS           *\n");
                printf("*             CANDIDATO %s         *\n", cand2);
                printf("*            POSSUI 0 VOTOS           *\n");
                printf("***************************************\n");
                break;

            case 2:
                printf("\n			INICIAR VOTAÇÃO 		\n");
                printf("\n	DIGITE O NÚMERO DO CANDIDATO: \n");
                scanf("%d", &voto);
                if (voto == num1) {
                    voto1++;
                    printf ("CANDIDATO %s\n", cand1);
                } else if (voto == num2) {
                    voto2++;
                    printf ("CANDIDATO %s\n", cand2);
                } else {
                    printf("ESSE CANDIDATO NÃO EXISTE. TENTE NOVAMENTE!\n");
                }
				if (voto == num1 || voto == num2){
                printf("[1] - CONFIRMA\n");
                printf("[2] - CANCELA\n");
                scanf("%d", &opc2);
                system("cls");

                switch (opc2) {
                    case 1:
                        printf("VOTAÇÃO REALIZADA.\n");
                        break;
                    case 2:
                        printf("VOTAÇÃO CANCELADA.\n");
                        break;
                    default:
                        printf("OPÇÃO INCORRETA!\n");
                }
                break;
            }

            case 3:
                do {
                    printf("\nENCERRAMENTO DA VOTAÇÃO E RESULTADO: \n");
                    printf("\nINSIRA O CÓDIGO PARA O ENCERRAMENTO DA VOTAÇÃO: \n");
                    scanf("%d", &cod);
                    printf("********* RESULTADO *********** \n");
                    printf("	VOTOS	|    CANDIDATO");
                    printf("\n  	  %d	|      %s", voto1, cand1);
                    printf("\n    	  %d	|      %s", voto2, cand2);
                } while (cod != 1981);
                break;

            default:
                printf("OPÇÃO INCORRETA!\n");
        }
    } while (opc != 3);

    return 0;
}
