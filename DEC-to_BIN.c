main() {
    int dec = 13;
    int bin = 0;

    int i = 1;
    while(dec != 0) {
        int rem = dec % 2;
        dec = dec / 2;

        bin += rem * i;
        i *= 10;
    }
    printf("%d", bin);
}