#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int even(int n)
{

if(n%2==0)
return 1;
else
return 0;
}
int absolute(int n)
{
	if(n<0){
		int d=-1;
		n*d;
		return n*d;
    
		
	}
	else{
		return n;
	}
}

int sign(int n)
{
	if(n<0)
	return -1;
	else if(n>0)
	return 1;
	else
	return 0;
}



int main(void) 
{
    int n;
	printf("���ڸ��Է��Ͻÿ�");
	scanf("%d", &n);
	even(n);
	printf("even�� ��� %d", even(n));
	absolute(n);
	printf("absolute�� ��� %d", absolute(n));
	sign(n);
	printf("sign�� ��� %d", sign(n));
	return 0;
}
