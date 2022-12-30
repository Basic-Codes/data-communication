#include<string.h>

void EvenParity() {
    char x[] = "1110001";
    char result[100];

    int size = sizeof(x)/sizeof(x[0]);

    int count = 0;

    for(int i =0; i<size; i++) {
        if(x[i] == '1') {
            count++;
        }
    }

    if(count % 2 == 0) {
        result[0] = '0';
    } else {
        result[0] = '1';
    }

    for(int i = 1; i <= size; i++) {
        result[i] = x[i-1];
    }

    printf("%s", result);
}

main() {
    EvenParity();
}