#include <stdio.h>

//_MSGTEST_ 상수 정의가 됐는가 그렇지 않은가에 따라
//MYMESSAGE 상수 정의는 달라진다!
#ifdef _MSGTEST_
#define MYMESSAGE   "I am a boy."
#else
#define MYMESSAGE   "You are a girl."
#endif

int main(void)
{
    //_MSGTEST_ 상수가 정의 된 경우와 그렇지 않은 경우
    //출력하는 문자열이 달라진다.
    puts(MYMESSAGE);
    return 0;
}