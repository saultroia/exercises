/* Exerc�cio 10: Escreva um programa que leia o nome e a idade
   	de uma pessoa e imprima uma mensagem de sauda��o. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especifica��es 
	externas ser�o utilizadas. No caso particular, tais especifica��es se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extens�o .h para indicar que se trata de um "header file") em um diret�rio conhecido pelo compilador. 
	O nome de tal arquivo � delimitado pelos s�mbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fun��o principal iniciada em main(), na linha 18. Na linha 19, a fun��o setlocale refere-se � localidade (pa�s/regi�o e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que � usada para definir algumas ou todas as informa��es 
	de localidade do mesmo. O idioma usado � o Portugu�s padr�o. Na linha 20, a declara��o de uma vari�vel do tipo char: nome (com capacidade de armazenamento de 50 caracteres). 
	Na linha 21, a declara��o de uma vari�vel do tipo int: idade. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	int idade;
	
	/* Solicita��o e atribui��o de valores �s vari�veis nome e idade por meio das fun��es printf (que traduz a representa��o interna de vari�veis 
		para a representa��o ASCII para que possa ser apresentada na tela), scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos), com o caractere "E comercial" (&) antes do nome da vari�vel que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada e a fun��o gets (que l� uma linha de stdin, a armazena na string apontada 
		e para quando o caractere de nova linha � lido ou quando o fim do arquivo � atingido, o que ocorrer primeiro). */
	
	printf("\nDigite seu nome: ");
	gets(nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
		/* Sauda��o impressa na tela ao t�rmino do fluxo de entrada. */
	
	printf("\nOl� %s! Parab�ns pelos seus %d anos!\nObrigado pela colabora��o!\n\n", nome, idade);
	
	/* O comando system("pause") � necess�rio no ambiente Windows para pausar a tela. 
		O comando return causa o t�rmino da execu��o do programa. 
		Se o valor retornado for zero, ent�o isto indica que a execu��o terminou em condi��es normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da fun��o principal, significa fim do programa. */
}

