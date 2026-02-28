#include <stdio.h>

int main() {
    char str[1000];

    // Read entire sentence including spaces
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            printf("\n");
        else if (str[i] != '\n')   // Ignore newline from fgets
            printf("%c", str[i]);
    }

    return 0;
}
