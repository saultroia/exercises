/* Exerc�cio 9: Crie um programa que leia um n�mero inteiro 
   e imprima a tabuada desse n�mero. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especifica��es 
	externas ser�o utilizadas. No caso particular, tais especifica��es se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extens�o .h para indicar que se trata de um "header file") em um diret�rio conhecido pelo compilador. 
	O nome de tal arquivo � delimitado pelos s�mbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fun��o principal iniciada em main(), na linha 17. Na linha 18, a fun��o setlocale refere-se � localidade (pa�s/regi�o e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que � usada para definir algumas ou todas as informa��es 
	de localidade do mesmo. O idioma usado � o Portugu�s padr�o. Na linha 19, a declara��o de duas vari�veis do tipo int: tabuada (com valor inicial igual a 0) e i. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tabuada = 0, i;
	
	/* Solicita��o e atribui��o de valor � vari�vel tabuada por meio das fun��es printf (que traduz a representa��o interna de vari�veis 
		para a representa��o ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da vari�vel que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicita��o, usa-se o caractere de nova linha (\n), ou seja, 
		a pr�xima sa�da para a tela acontece na linha seguinte. */
		
	printf("\nDigite um n�mero para imprimir a tabuada: ");
	scanf("%d", &tabuada);
	
	/* No comando de repeti��o for a instru��o de inicializa��o � executada apenas uma vez. Em seguida, a express�o de teste � avaliada. 
		Se a express�o de teste for avaliada como falsa, o loop for ser� finalizado. No entanto, se a express�o de teste for avaliada como verdadeira, 
		as instru��es dentro do corpo do loop for ser�o executadas e a express�o de atualiza��o ser� atualizada. 
		Novamente a express�o de teste � avaliada. O processo continua at� que a express�o de teste seja falsa. 
		Quando a express�o de teste � falsa, o loop termina. 
		
		Neste caso, temos a vari�vel i, a qual recebe o valor 1. 
		Deste modo, enquanto i for menor ou igual a 10 (base-dez), o seu valor ser� incrementado na pr�xima linha at� que a express�o seja avaliada como falsa. 
		O resultado � apresentado por meio da fun��o printf, que imprime na tela a tabela matem�tica de multiplica��o para um sistema alg�brico. */
	
	for(i = 1; i <= 10; ++i){
		printf("%dx%d = %d\n", i, tabuada, i * tabuada);
	}
	
	/* O comando system("pause") � necess�rio no ambiente Windows para pausar a tela. 
		O comando return causa o t�rmino da execu��o do programa. 
		Se o valor retornado for zero, ent�o isto indica que a execu��o terminou em condi��es normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da fun��o principal, significa fim do programa. */
}
