/* Exerc�cio 5: Fa�a um programa que leia um n�mero inteiro
	e imprima seu antecessor e sucessor. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especifica��es 
	externas ser�o utilizadas. No caso particular, tais especifica��es se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extens�o .h para indicar que se trata de um "header file") em um diret�rio conhecido pelo compilador. 
	O nome de tal arquivo � delimitado pelos s�mbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fun��o principal iniciada em main(), na linha 17. Na linha 18, a fun��o setlocale refere-se � localidade (pa�s/regi�o e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que � usada para definir algumas ou todas as informa��es 
	de localidade do mesmo. O idioma usado � o Portugu�s padr�o. Na linha 19, a declara��o de tr�s vari�veis do tipo int: num, a e s. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, a, s;
	
	/* Solicita��o e atribui��o de valor � vari�vel num por meio das fun��es printf (que traduz a representa��o interna de vari�veis 
		para a representa��o ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da vari�vel que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicita��o, usa-se o caractere de nova linha (\n), ou seja, 
		a pr�xima sa�da para a tela acontece na linha seguinte. */
	
	printf("\nDigite qualquer n�mero: ");
	scanf("%d", &num);
	
	/* Na linha 33, uma opera��o na qual o valor da vari�vel a � igual ao valor obtido no fluxo de entrada (vari�vel num) subtra�do por 1.
	  	Na linha 34, uma opera��o na qual o valor da vari�vel s � igual ao valor obtido no fluxo de entrada (vari�vel num) somado a 1. */
	
	a = num - 1;
	s = num + 1;
	
	/* Apresenta��o dos resultados por meio da fun��o printf, que imprime na tela o n�mero antecessor e o n�mero sucessor do valor obtido no fluxo de entrada. */
	
	printf("\nO antecessor de %d � %d.\n", num, a);
	printf("\nO sucessor de %d � %d.\n\n", num, s);
	
	/* O comando system("pause") � necess�rio no ambiente Windows para pausar a tela. 
		O comando return causa o t�rmino da execu��o do programa. 
		Se o valor retornado for zero, ent�o isto indica que a execu��o terminou em condi��es normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da fun��o principal, significa fim do programa. */
}
