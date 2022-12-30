#include <stdio.h>
#include <string.h>


main() {
    int N = 6;
    int arr[] = { 1, 1, 1, 1, 1, 1 };
    int brr[30];

    int count = 0;
    int i = 0;
    int j = 0;

    while (i < N) {
        if(arr[i] == 1) {
            count++;
        } else {
            count = 0;
        }
        
        if(count == 5) {
            brr[j] = arr[i];
            brr[j+1] = 0;
            count = 0;
            i++;
            j+=2;
        } else {
            brr[j] = arr[i];
            i++;
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%d", brr[i]);
    }
}
