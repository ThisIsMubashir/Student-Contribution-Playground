#include <stdio.h>

int count_lines(const char* file_path) {
    FILE* f = fopen(file_path, "r");
    if (!f) return -1; // Improve in an issue

    int count = 0;
    char c;

    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') count++;
    }

    fclose(f);
    return count;
}
