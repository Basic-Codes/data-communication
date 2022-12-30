#include<math.h>

main() {
    long long bin = 101101;
    int dec = 0;

    int i = 0;
    while (bin != 0) {
        int rem = bin % 10;
        bin = bin / 10;

        dec += rem * pow(2, i); 
        i++;
    }
    printf("%d", dec);
}