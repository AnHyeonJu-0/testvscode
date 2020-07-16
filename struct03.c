#include <stdio.h>

//MYBODY 구조체 선언 및 형 재선언
typedef struct MYBODY
{
    int nHeight;
    int nWeight;
} MYBODY;

//MYBODY 구조체를 멤버로 가지는 USERDATA 구조체 선언
typedef struct USERDATA
{
    char szName[32];
    char szPhone[32];
    MYBODY body;
} USERDATA;

int main(void)
{
    USERDATA user = {
        "Hoon",
        "1234",
        { 175, 70 } //MYBODY 구조체 멤버 초기화
    };

    printf("%s\t%s\t%d\t%d\n",
        user.szName, user.szPhone,
        user.body.nHeight, user.body.nWeight);
    return 0;
}