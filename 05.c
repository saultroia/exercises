/* Exercício 5: Faça um programa que leia um número inteiro
	e imprima seu antecessor e sucessor. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file") em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de três variáveis do tipo int: num, a e s. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, a, s;
	
	/* Solicitação e atribuição de valor à variável num por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
	
	printf("\nDigite qualquer número: ");
	scanf("%d", &num);
	
	/* Na linha 33, uma operação na qual o valor da variável a é igual ao valor obtido no fluxo de entrada (variável num) subtraído por 1.
	  	Na linha 34, uma operação na qual o valor da variável s é igual ao valor obtido no fluxo de entrada (variável num) somado a 1. */
	
	a = num - 1;
	s = num + 1;
	
	/* Apresentação dos resultados por meio da função printf, que imprime na tela o número antecessor e o número sucessor do valor obtido no fluxo de entrada. */
	
	printf("\nO antecessor de %d é %d.\n", num, a);
	printf("\nO sucessor de %d é %d.\n\n", num, s);
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}
