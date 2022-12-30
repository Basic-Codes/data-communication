#include <stdio.h>
#include <string.h>


main() {
    int N = 9;
    int arr[] = { 1, 0, 1, 1, 1, 1, 1, 0, 1 };
    int brr[30];

    int count = 0;
    int i = 0;
    int j = 0;

    while(i < N) {
        if(arr[i] == 1) {
            count++;
        } else {
            count = 0;
        }
        if(count == 5) {
            brr[j] = arr[i];
            count = 0;
            i += 2;
            j++;
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
