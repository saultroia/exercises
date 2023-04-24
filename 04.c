/* Exercício 4: Escreva um programa que calcule e imprima
   a média aritmética de três números. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file" em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de quatro variáveis do tipo float: num1, num2, num3 e media. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, media;
	
	/* Solicitação e atribuição de valor às variáveis num1, num2 e num3 por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
	
	printf("\nDigite o primeiro número: ");
  	scanf("%f", &num1);
  
  	printf("\nDigite o segundo número: ");
  	scanf("%f", &num2);
	  
	printf("\nDigite o terceiro número: ");
  	scanf("%f", &num3);  
  	
  	/* Operação na qual o valor da variável media é igual ao valor da soma das variáveis num1, num2 e num3 dividido por 3.
	  	É importante lembrar que sempre é calculado primeiro o que está em parênteses. */
	
	media = (num1 + num2 + num3) / 3;
	
	/* Apresentação do resultado por meio da função printf, que imprime na tela o valor da variável media.
		É importante lembrar que %.1f delimita o campo de impressão em uma casa decimal. */
	
	printf("\nA média é %.1f.\n\n", media);
  	
  	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}
