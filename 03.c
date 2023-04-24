/* Exercício 3: Crie um programa que leia um número inteiro
   e imprima se ele é par ou ímpar. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file" em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de uma variável do tipo inteiro: num. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	/* Solicitação e atribuição de valor à variável num por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
	
	printf("\nDigite qualquer número: ");
	scanf("%d", &num);
	
	/* O comando if é utilizado para especificar um bloco de código a ser executado se uma condição for verdadeira.
		Usamos a variável num para testar se o resto (%) da divisão (num / 2) do valor atribuído a ela é igual a 0 (usando o operador ==). 
		Se a condição for verdadeira, imprimimos na tela que "num é um número par.". */
	
	if(num % 2 == 0){
		printf("\n%d é um número par.\n\n", num);
	} 
	
	/* O comando else é utilizado para especificar um bloco de código a ser executado se uma condição for falsa.
		Neste caso, se o resto (%) da divisão (num / 2) do valor atribuído à variàvel num for diferente de 0, imprimimos na tela que "num é um número ímpar.". */
	
	else{
		printf("\n%d é um número ímpar.\n\n", num);
	}
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}
