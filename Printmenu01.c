#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//화면에 메뉴를 출력하는 함수의 선언 및 정의
int PrintMenu(void)
{
    int nInput = 0;
    
    //메뉴를 출력하기 전에 화면을 지운다.(Clear screen)
    system("cls");
    //메뉴를 출력하고 사용자 입력을 받는다.
    printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
    scanf("%d", &nInput);

    //사용자가 선택한 메뉴 값을 반환한다.
    return nInput;
}

int main(void)
{
    int nMenu = 0;

    //메뉴 이벤트 루프
    //사용자가 입력한 값에 따라 정해진 기능을 반복해 수행한다.
    //(0을 입력하며 반복문을 끝낸다.)
    while ((nMenu = PrintMenu()) != 0)
    {
        switch (nMenu)
        {
        case 1: //New
            puts("새 항목을 추가합니다.");
            break;
        case 2: //Search
            puts("기존 항목에서 검색합니다.");
            break;

        case 3: //Print
            puts("전체 내용을 출력합니다.");
            break;

        case 4: //Remove
            puts("기존 항목을 삭제합니다.");
            break;

        default: //???
            puts("알 수 없는 명령입니다.");
        }

        _getch();
    }

    puts("Bye~~!");
    return 0;
}