/* Exercício 8: Faça um programa que leia uma temperatura 
   em graus Celsius e a converta para Fahrenheit. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file" em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de três variáveis do tipo float: c e f. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, f;
	
	/* Solicitação e atribuição de valor à variável c por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
	
	printf("\nDigite a temperatura em graus Celsius: ");
	scanf("%f", &c);
	
	/* Na linha 34, a fórmula de conversão de graus Celsius para Fahrenheit.
		Basta multiplicar a temperatura em °C por 1,8 e adicionar 32 a este valor. 
		O valor final será a temperatura em °F, atribuído à variável f. */
	
	f = c * 1.8 + 32;
	
	/* Apresentação dos resultados por meio da função printf, que imprime na tela a temperatura em graus Celsius e Fahrenheit. */
	
	printf("\n%.1f graus Celsius são %.1f Fahrenheit.\n\n", c, f);
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}
