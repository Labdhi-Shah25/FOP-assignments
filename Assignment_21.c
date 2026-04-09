#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *dest_file;
    char source_name[100], dest_name[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source_name);

    source_file = fopen(source_name, "r");

    if (source_file == NULL) {
        printf("Could not open source file\n");
        return 0;
    }

    printf("Enter destination file name: ");
    scanf("%s", dest_name);

    dest_file = fopen(dest_name, "w");

    if (dest_file == NULL) {
        printf("Could not open destination file\n");
        fclose(source_file);
        return 0;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(dest_file);

    return 0;
}