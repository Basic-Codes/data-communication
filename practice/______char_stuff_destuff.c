#include<stdio.h>
#include<string.h>
#include <stdbool.h>

main() {
    char text[100] = "TSDFDLEETXSDA";
    char sd[100];
    char key[100] = "DLEETX";
    
    sd[0] = 'D';
    sd[1] = 'L';
    sd[2] = 'E';
    sd[3] = 'S';
    sd[4] = 'T';
    sd[5] = 'X';
    
    int i = 0;
    int j = 6;
    
    while(text[i] != '\0') {
        // printf("%c", text[i]);
        
        if(text[i] == 'D' && text[i+1] == 'L' && text[i+2] == 'E') {
            sd[j+0] = 'D';
            sd[j+1] = 'L';
            sd[j+2] = 'E';
            sd[j+3] = 'D';
            sd[j+4] = 'L';
            sd[j+5] = 'E';
            j += 6;
            i += 3;
        } else {
            sd[j] = text[i];
            j++;
            i++;
        }
    }
    strcat(sd, key);
    printf("%s",sd);
}