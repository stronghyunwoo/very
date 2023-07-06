// 배열.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <array>
#define size 10
void set_array(int array[]) {
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 100;

    }
}
void set_sort(int scores[]) {
    for (int i = 0; i < 10; i++) {
        scores[i] = rand() % 100;

    }
    int temp;
    
    for (int i = 0; i < 10; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < 10 - 1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (scores[j] > scores[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }
    for (int i = 0; i < 10; i++) {

        printf("scores[%d}=%d\n", i, scores[i]);
    }
    printf("\n");
}

int main(void)
{

    int scores[10];
    int scores2[10];
    srand((unsigned int)time(NULL));
    
    set_array(scores);

    set_array(scores2);

    set_sort(scores);
    
        printf("\n");
    return 0;
    
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
