#include <stdio.h>
#include <string.h>

#define MAX_STRING 1050

int IsTautograma(char s[MAX_STRING]) {
    size_t i = 1;
    char primeiraletra = s[0];

    while (s[i]) {
        while (s[i] != ' ' || s[i])
            i++;
        if (s[i] == ' ') {
            if(s[++i] != primeiraletra)
                return 0;
        }
    }

    return 1;
}

int main(void) {
    char s[MAX_STRING];

    while (1) {
        scanf("%[^\n]", s);

        if (!strcmp("*", s))
            break;

        if (IsTautograma(s))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}