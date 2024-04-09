#include <stdio.h>

int main() {
    int num, num2, i;

    scanf("%d %d", &num, &num2);
    if(num > num2) {
        i = num;
        num = num2;
        num2 = i;
    }

    for(i = num; i <= num2; i++) {
        printf("%d ", i);
    }


    return 0;
}

