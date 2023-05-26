#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_tax(int income){

if(income<=1000){

int a=income*0.08;
printf("소득세는 %d(만원)입니다", a);
}
else{


int b=(income-1000)*0.10;
int c=1000*0.08;
int d=b+c;
printf("소득세는 %d만원입니다", d);
}
}
int main(void) {
	int money;
	printf("소득을 입력하시오(만원)");
	scanf("%d", &money);
	get_tax(money);
	return 0;
}
