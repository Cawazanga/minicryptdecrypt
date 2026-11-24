#include <stdlib.h>
#include <stdio.h>
int main() {
    FILE *i = fopen("table.gсf", "r");
    char name[48];
    char outputname[48];
    char typesh[48];
    char argsh[48];
    fgets(name, 48, i);
    fgets(outputname, 48, i);
    fgets(typesh, 48, i);
    fgets(argsh, 48, i);
    sscanf(name, "%s\n", &name);
    sscanf(outputname, "%s\n", &outputname);
    sscanf(argsh, "%s\n", &argsh);
    printf("%s%s%s%s", name, outputname, typesh, argsh);
    FILE *f = fopen(name, "r");
    FILE *o = fopen(outputname, "w");
    puts("db");
    for (int i = 0, c; (c = fgetc(f)) != EOF; i++)
        fputc(c+atoi(argsh), o);
    
    fclose(f);
    fclose(o);
}
