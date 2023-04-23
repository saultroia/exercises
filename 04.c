/* Exerc�cio 4: Escreva um programa que calcule e imprima
   a m�dia aritm�tica de tr�s n�meros. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especifica��es 
	externas ser�o utilizadas. No caso particular, tais especifica��es se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extens�o .h para indicar que se trata de um "header file") em um diret�rio conhecido pelo compilador. 
	O nome de tal arquivo � delimitado pelos s�mbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fun��o principal iniciada em main(), na linha 17. Na linha 18, a fun��o setlocale refere-se � localidade (pa�s/regi�o e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que � usada para definir algumas ou todas as informa��es 
	de localidade do mesmo. O idioma usado � o Portugu�s padr�o. Na linha 19, a declara��o de quatro vari�veis do tipo float: num1, num2, num3 e media. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, media;
	
	/* Solicita��o e atribui��o de valor � vari�vel r por meio das fun��es printf (que traduz a representa��o interna de vari�veis 
		para a representa��o ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da vari�vel que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicita��o, usa-se o caractere de nova linha (\n), ou seja, 
		a pr�xima sa�da para a tela acontece na linha seguinte. */
	
	printf("\nDigite o primeiro n�mero: ");
  	scanf("%f", &num1);
  
  	printf("\nDigite o segundo n�mero: ");
  	scanf("%f", &num2);
	  
	printf("\nDigite o terceiro n�mero: ");
  	scanf("%f", &num3);  
  	
  	/* Opera��o na qual o valor da vari�vel media � igual ao valor da soma das vari�veis num1, num2 e num3 dividido por 3.
	  	� importante lembrar que sempre � calculado primeiro o que est� em par�nteses. */
	
	media = (num1 + num2 + num3) / 3;
	
	/* Apresenta��o do resultado por meio da fun��o printf, que imprime na tela o valor da vari�vel media.
		� importante lembrar que %.1f delimita o campo de impress�o em uma casa decimal. */
	
	printf("\nA m�dia � %.1f.\n\n", media);
  	
  	/* O comando system("pause") � necess�rio no ambiente Windows para pausar a tela. 
		O comando return causa o t�rmino da execu��o do programa. 
		Se o valor retornado for zero, ent�o isto indica que a execu��o terminou em condi��es normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da fun��o principal, significa fim do programa. */
}
