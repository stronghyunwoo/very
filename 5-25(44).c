#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void check_alpha(char c){

if((c>='A'&& c<='Z') || (c>='a'&& c<='z'))
{
	printf("���ĺ� �����Դϴ�.\n");
}
	
else {
	printf("���ĺ� ���ھƴմϴ�.\n");
}
}
int main() {
	char c;
	printf("���ڸ� �Է��Ͻÿ�");
	scanf("%c", &c);
	check_alpha(c);
	return 0;
}
