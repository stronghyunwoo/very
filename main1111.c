#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_tax(int income){

if(income<=1000){

int a=income*0.08;
printf("�ҵ漼�� %d(����)�Դϴ�", a);
}
else{


int b=(income-1000)*0.10;
int c=1000*0.08;
int d=b+c;
printf("�ҵ漼�� %d�����Դϴ�", d);
}
}
int main(void) {
	int money;
	printf("�ҵ��� �Է��Ͻÿ�(����)");
	scanf("%d", &money);
	get_tax(money);
	return 0;
}
