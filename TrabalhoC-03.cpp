#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_soma(int* mat_A, int* mat_B, int* mat_C) {
	int i, j;
	int mt_c;
	for (i = 0; i < 4; i++) { // i é o indice da linha da matriz
		for (j = 0; j < 4; j++) { // j é o indice da coluna da matriz
			mt_c = *mat_A + *mat_B; // Soma dos indices i, j com ponteiros
			*mat_C = mt_c;
		}
	}
}
int main(void) {
	setlocale(LC_ALL, "Portuguese"); // Deixa em Português BR
	// Ponteiros
	int mat_A[4][4], * ptr_A;
	int mat_B[4][4], * ptr_B;
	int mat_C[4][4], * ptr_C;
	int i, j, c;
	int mt_c;

	ptr_A = &mat_A;
	ptr_B = &mat_B;
	ptr_C = &mat_C;
	printf("Matricula do Aluno: 3415162\n");
	// Leitura da Matriz A
	printf("Digite os valores para primeira Matriz:\n\n");
	for (i = 0; i < 4; i++) { // i é o indice da linha da matriz
		for (j = 0; j < 4; j++) // j é o indice da coluna da matriz
		{
			printf("[%d][%d]: ", i, j); // Imprime na tela os dados digitados da matriz A
			scanf_s("\t%d", &mat_A[i][j]); // Usuario digita os dados da matriz A
			if (mat_A[i][j] < 0) { // Caso o usuario digite um número negattivo o programa se encerra
				printf("Você digitou um número negativo, Encerrando o programa...\n");
				break;
			}
			while ((c = getchar()) != '\n' && c != EOF) {} // Limpa o buffer de teclado
		}
	}
	//Leitura da Matriz B
	printf("\nDigite os valores para segunda Matriz:\n");
	for (i = 0; i < 4; i++) { // i é o indice da linha da matriz
		for (j = 0; j < 4; j++) // j é o indice da coluna da matriz
		{
			printf("[%d][%d]: ", i, j); // Imprime na tela os dados digitados na matriz
			scanf_s("%d", &mat_B[i][j]); // Usuario digita os dados da matriz B
			if (mat_B[i][j] < 0) { // Caso o usuario digite um número negattivo o programa se encerra
				printf("Você digitou um número negativo, Encerrando o programa...\n");
				break;
			}
			while ((c = getchar()) != '\n' && c != EOF) {} // limpa o buffer de teclado
		}
	}
	// Soma das Matrizes
	printf("\nA soma de todas as Matrizes é:\n\n ");
	for (i = 0; i < 4; i++) { // i é o indice da linha da matriz
		for (j = 0; j < 4; j++) // j é o indice da coluna da matriz
		{
			mat_C[i][j] = mat_A[i][j] + mat_B[i][j]; // Soma das matrizes A e B
		}
	}
	// Imprime na tela a Matriz C
	for (i = 0; i < 4; i++) { // i é o indice da linha da matriz
		for (j = 0; j < 4; j++) // j é o indice da coluna da matriz
		{
			printf("\t%d", mat_C[i][j]); // Imprime o resultado da soma das matrizes
			printf("\n");
		}
	}
	system("pause");
	return 0;
}