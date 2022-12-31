#include<stdio.h>
#include<string.h>

main() {
    char text[100] = "TSDFDLEETXSDA";
    char sd[100];
    char ds[100];
    char start[100] = "DLESTX";
    char end[100] = "DLEETX";

    sd[0] = 'D';
    sd[1] = 'L';
    sd[2] = 'E';
    sd[3] = 'S';
    sd[4] = 'T';
    sd[5] = 'X';

    int i = 0;
    int j = 6;
    while(text[i] != '\0') {
        if(text[i] == 'D' && text[i+1] == 'L' && text[i+2] == 'E') {
            sd[j+0] = 'D';
            sd[j+1] = 'L';
            sd[j+2] = 'E';
            sd[j+3] = 'D';
            sd[j+4] = 'L';
            sd[j+5] = 'E';
            i += 3;
            j += 6;
        } else {
            sd[j] = text[i];
            i++;
            j++;
        }
    }

    strcat(sd, end);

    printf("%s\n", sd);

    // Destuffing
    i = 6;
    j = 0;

    while(sd[i] != '\0') {
        if(sd[i] == 'D' && sd[i+1] == 'L' && sd[i+2] == 'E' && sd[i+3] == 'D' && sd[i+4] == 'L' && sd[i+5] == 'E') {
            ds[j+0] = 'D';
            ds[j+1] = 'L';
            ds[j+2] = 'E';
            j+=3;
            i+=6;
        } else {
            ds[j] = sd[i];
            i++;
            j++;
        }
    }
    printf("%s\n", ds);
}