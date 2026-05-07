#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input) {
    if (input[0] == '\0') {
        return 0;
    }

    if (!(isalpha(input[0]) || input[0] == '_')) {
        return 0;
    }

    for (int i = 1; input[i] != '\0'; i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char szo[256];

    printf("Adj meg sztringeket '*' végjelig!\n\n");

    while (1) {
        printf("Input: ");
        if (scanf("%s", szo) != 1 || strcmp(szo, "*") == 0) {
            break;
        }

        if (is_valid_c_identifier(szo)) {
            printf("YES\n\n");
        } else {
            printf("NO\n\n");
        }
    }

    return 0;
}