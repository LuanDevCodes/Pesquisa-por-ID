#include <stdlib.h>
#include <stdio.h>

void main (){
	
	int x, id_pesquisado, confirmado=0, id[8];
	char nome[8][55];
	float salario[8];
	
	for (x=0; x<8; x++){
		printf("\nInforme o ID do funcionario: ");
		scanf("%i", &id[x]);
		fflush(stdin);		
		printf("\nInforme o NOME do funcionario: ");
		scanf("%s", nome[x]); //como é uma string, não precisa do E comercial
		fflush(stdin);	
		printf("\nInforme o SALARIO do funcionario: ");
		scanf("%f", &salario[x]);
		fflush(stdin);
		printf("\n");
	}
	
	printf("\n\n*Informe o ID do funcionario pesquisado: ");
	scanf("%i", &id_pesquisado);
	
	for (x=0; x<8; x++){
		if (id[x] == id_pesquisado){
            printf("\n-----------------------------");
			printf("\nFuncionario Localizado");
			printf("\nNome: %s", nome[x]);
			printf("\nSalario: %.2f", salario[x]);
            printf("\n-----------------------------\n\n");
			confirmado = 1;
			system("pause");
			break;
		}
	}
	
	if (!confirmado){
        printf("\n-------------------------------------------------");
		printf("\nFuncionario nao encontrado com o ID informado");
        printf("\n-------------------------------------------------\n\n");
		system("pause");
	}
	
  getchar();
}
