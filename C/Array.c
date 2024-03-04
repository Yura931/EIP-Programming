#include <stdio.h>

int main() {

    int a[4] = {1, 2}; // 초깃값 명시 되지 않은 경우 자동 0
    for(int i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }


    return 0;
}