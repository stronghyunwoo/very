#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void check_alpha(char c){

if((c>='A'&& c<='Z') || (c>='a'&& c<='z'))
{
	printf("알파벳 문자입니다.\n");
}
	
else {
	printf("알파벳 문자아닙니다.\n");
}
}
int main() {
	char c;
	printf("문자를 입력하시오");
	scanf("%c", &c);
	check_alpha(c);
	return 0;
}
