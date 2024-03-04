#include <stdio.h>

/*
    변수에 저장된 값 출력 시 printf 함수 사용
    printf 내 포맷 스트링을 통해 변수 출력 방식 결정

    %c : 문자 출력
    %s : 문자열 출력
    %d : 10진수 출력
    %u : 부호 없는 10진수 출력
    %x : 16진수 출력
    %o : 8진수 출력
    %f : 실수 출력
*/
int main(void)
{
    char a = 'A';
    int b = 10;
    float c = 1.2;

    printf("%c %d %f\n", a, b, c);
//    printf(a);  포맷 스트링 없이 변수 출력 안 됨
    return 0;
}
