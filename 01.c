/* Exerc�cio 1: Fa�a um programa que leia dois
   n�meros inteiros e imprima a soma. */

/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especifica��es 
	externas ser�o utilizadas. No caso particular, tais especifica��es se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extens�o .h para indicar que se trata de um "header file") em um diret�rio conhecido pelo compilador. 
	O nome de tal arquivo � delimitado pelos s�mbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fun��o principal iniciada em main(), na linha 17. Na linha 18, a fun��o setlocale refere-se � localidade (pa�s/regi�o e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que � usada para definir algumas ou todas as informa��es 
	de localidade do mesmo. O idioma usado � o Portugu�s padr�o. Na linha 19, a declara��o de tr�s vari�veis do tipo inteiro: a, b e soma. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma;
	
	/* Solicita��o e atribui��o de valores �s vari�veis a e b por meio das fun��es printf (que traduz a representa��o interna de vari�veis 
		para a representa��o ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome das vari�veis que devem receber os valores 
		convertidos a partir dos caracteres do fluxo de entrada. Antes de cada solicita��o, usa-se o caractere de nova linha (\n), ou seja, 
		a pr�xima sa�da para a tela acontece na linha seguinte. */
	
	printf("\nInforme um n�mero: ");
	scanf("%d", &a);
	printf("\nInforme outro n�mero: ");
	scanf("%d", &b);
	
	/* Opera��o de adi��o entre os valores atrubu�dos �s vari�veis a e b. O resultado � atribu�do � vari�vel soma. */

	soma = a + b;
	
	/* Apresenta��o do resultado por meio da fun��o printf, que imprime na tela os valores atribu�dos �s vari�veis a e b, 
		bem como o resultado da soma entre as mesmas. */
	
	printf("\nA soma entre %d e %d � %d.\n\n", a, b, soma);
	
	/* O comando system("pause") � necess�rio no ambiente Windows para pausar a tela. 
		O comando return causa o t�rmino da execu��o do programa. 
		Se o valor retornado for zero, ent�o isto indica que a execu��o terminou em condi��es normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da fun��o principal, significa fim do programa. */
} 
