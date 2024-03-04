#include <stdio.h>

/*
    C언어에서 문자열 사용이 JAVA처럼 간편하지 않은 듯 하다 ..
    타입도 따로 없다
*/

int main(void)
{

    // 값 할당 방식
    // 두 번째 방식이 가장 무난
    char charArray1[10] = {'A', 'B', 'C', 'D', '\0'}; // 배열 크기 선언 후 각 자리에 들어갈 문자 지정
    char charArray2[10] = "Hello";  // 배열 크기 선언과 동시에 문자열 대입, 크기를 벗어나는 문자열상수는 초기화 할 수 없다.(컴파일 오류 발생)
    char charArray3[] = "Hello"; // 배열 크기 없이 문자열 대입, 자동으로 배열의 크기를 지정, 편해 보이지만 문자열이 긴 경우 개발자가 크기를 직접 계산해서 알고 있어야 한다는 불편함이 있다고 한다.


    /*
        첫 번째 할당 방법의 경우
        마지막에 \0 = NULL 을 추가해 문자열의 끝이라는 사실을 알려주어야 한다.
        

        문자열은 항상 마지막에 널문자 1개를 포함하고 있다.
        두번째 세번째 방식같은 경우 문자열 상수로 초기화되어 자동으로 들어가게 된다.
        안 보이지만 분명 1바이트를 차지하고 있는 널문자가 존재하고 있는 것이다.

        코드에게 문자열 끝이라는 것을 알려주는 것
    */
//    char str[6] = {'H', 'e', 'i', 'i', 'o', '\0'};  C언어는 GC가 없다 .. 사용하지 않는 자원은 직접 삭제 해야 한다.


    
    printf("%s\n", charArray1);
    printf("%s\n", charArray2);
    printf("%s\n", charArray3);

    int charArray1Size = sizeof(charArray1);

    for (int i = 0; i < charArray1Size; i++) {
        printf("%c", charArray1[i]);
    }

    
    return 0;
}
