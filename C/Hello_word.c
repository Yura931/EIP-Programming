#include <stdio.h> // stadio.h 헤더 stadio는 표준 입출력인 Standard Input Output의 약자

/*
    C 언어 표준 공식
    int main(int args, char *argv[]) {
        return 0;
    }

    매개변수가 필요하지 않을 경우 매개변수에 (void)로 표현
    int main(void) {
        return 0;
    }

    void main() {

    }

    리턴이 없는 void main() 을 지원하지 않는 컴파일러들이 늘어나고 있다고 함..
    책 예제에는 대부분 void main()으로 되어 있지만 
    현재 설치되어 있는 gcc 컴파일러도 경고를 뱉어낸다.
    int main()을 사용하자
*/

int main(void) {
    printf("Hello");
    printf("C World");
    printf("\n 개행"); // \n이라는 키워드를 만나면 개행
    return 0;
}
