#include <stdio.h>

int main()
{
    char txt[200];
    FILE *fp;

    fp = fopen("data.txt", "a");

    fprintf(fp, "\nHello World!");
    rewind(fp);
    fscanf(fp, "%[^\n]", txt);
    printf("%s", txt);

    fclose(fp);

    return 0;
}
