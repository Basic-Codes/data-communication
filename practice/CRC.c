#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char input[20];
char divisor[20];
char temp[20];

int input_len;
int div_len;
int len;
int rem;

main () {
    printf("Enter the data: ");
    scanf("%s", &input);

    printf("Enter the divisor: ");
    scanf("%s", &divisor);

    input_len = strlen(input);
    div_len = strlen(divisor);

    len = input_len + div_len - 1;

    for(int i=0; i<input_len; i++) {
        temp[i] = input[i];
    }
    for(int i=input_len; i<len; i++) {
        temp[i] = '0';
    }


    // Now Binary diving time.
    for(int i=0; i<len; i++) {

    }
    
    int int_input = atoi(input);
    int int_divisor = atoi(divisor);
    rem = int_input % int_divisor;
    
    printf("=> %s", rem);
}