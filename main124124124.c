#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void randint(){
printf("%d", 10+rand()%80);
}
int main(void) {
    for(int i=0; i<10; i++){
        randint();
    }

    return 0;
}
