/* Exerc�cio 7: Escreva um programa que leia a idade de uma pessoa
   e imprima se ela � maior ou menor de idade. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especifica��es 
	externas ser�o utilizadas. No caso particular, tais especifica��es se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extens�o .h para indicar que se trata de um "header file") em um diret�rio conhecido pelo compilador. 
	O nome de tal arquivo � delimitado pelos s�mbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fun��o principal iniciada em main(), na linha 17. Na linha 18, a fun��o setlocale refere-se � localidade (pa�s/regi�o e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que � usada para definir algumas ou todas as informa��es 
	de localidade do mesmo. O idioma usado � o Portugu�s padr�o. Na linha 19, a declara��o de tr�s vari�veis do tipo int: idade, maior e menor. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, maior, menor;
	
	/* Solicita��o e atribui��o de valor � vari�vel idade por meio das fun��es printf (que traduz a representa��o interna de vari�veis 
		para a representa��o ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da vari�vel que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicita��o, usa-se o caractere de nova linha (\n), ou seja, 
		a pr�xima sa�da para a tela acontece na linha seguinte. */
	
	printf("\nInforme a sua idade: ");
	scanf("%d", &idade);
	
	/* O comando if � utilizado para especificar um bloco de c�digo a ser executado se uma condi��o for verdadeira. 
		Usamos a vari�vel idade para testar se o valor atribu�do a ela � maior ou igual a 0 e menor que 18. 
		Se a condi��o for verdadeira, imprimimos na tela "Menor de idade.". */
	
	if(idade >= 0 && idade < 18){
		printf("\nMenor de idade.\n\n");
	}
	
	/* Da mesma forma, usamos a vari�vel idade para testar se o valor atribu�do a ela � maior ou igual a 18. 
		Se a condi��o for verdadeira, imprimimos na tela "Maior de idade.". */
	
	if(idade >= 18){
		printf("\nMaior de idade.\n\n");
	}
	
	/* Por fim, usamos a vari�vel idade para testar se o valor atribu�do a ela � menor que 0. 
		Se a condi��o for verdadeira, imprimimos na tela "Idade inv�lida!". */
	
	if(idade < 0){
		printf("\nIdade inv�lida!\n\n");
	}
	
	/* O comando system("pause") � necess�rio no ambiente Windows para pausar a tela. 
		O comando return causa o t�rmino da execu��o do programa. 
		Se o valor retornado for zero, ent�o isto indica que a execu��o terminou em condi��es normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da fun��o principal, significa fim do programa. */
}
