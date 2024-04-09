#include <stdio.h>

int main() {
    int num, num2, i, tmp;

    scanf("%d %d", &num, &num2);
    if(num > num2) {
        tmp = num;
        num = num2;
        num2 = tmp;
    }

    for(i = num; i <= num2; i++) {
        printf("%d ", i);
    }


    return 0;
}

