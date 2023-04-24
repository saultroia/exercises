/* Exercício 1: Faça um programa que leia dois
   números inteiros e imprima a soma. */

/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file" em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de três variáveis do tipo inteiro: a, b e soma. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma;
	
	/* Solicitação e atribuição de valores às variáveis a e b por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome das variáveis que devem receber os valores 
		convertidos a partir dos caracteres do fluxo de entrada. Antes de cada solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
	
	printf("\nInforme um número: ");
	scanf("%d", &a);
	printf("\nInforme outro número: ");
	scanf("%d", &b);
	
	/* Operação de adição entre os valores atrubuídos às variáveis a e b. O resultado é atribuído à variável soma. */

	soma = a + b;
	
	/* Apresentação do resultado por meio da função printf, que imprime na tela os valores atribuídos às variáveis a e b, 
		bem como o resultado da soma entre as mesmas. */
	
	printf("\nA soma entre %d e %d é %d.\n\n", a, b, soma);
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
} 
