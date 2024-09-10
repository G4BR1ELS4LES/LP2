#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
char palavra[17];
int c, let, tam, mai, min, num, pun;

printf("Informe a palavra: ");
scanf("%s",palavra);

tam=strlen(palavra);

c = 0;
let=0;
mai=0;
min=0;
num=0;

while(c<strlen(palavra))
{
	if(isalpha(palavra[c]))
		let = let +1;
	
	if(isupper(palavra[c]))
		mai = mai +1;
	
	if(islower(palavra[c]))
		min = min +1;
	
	if(isdigit(palavra[c]))
		num = num +1;

	if(ispunct(palavra[c]))
		pun = pun +1;
	c = c + 1;
}
printf("\nQuantidades de letras: %i", let);
printf("\nQuantidades de letras maiusculas: %i", mai);
printf("\nQuantidades de letras minusculas: %i", min);
printf("\nQuantidades de digitos numericos: %i", num);
printf("\nQuantidades de caracteres especiais: %i", pun);

return 0;
}