#include <stdio.h>
#include <string.h>

#define MAX_STRING 1050

char ToMaiscula(char c) {
    return (c >= 'a')? c - ' ' : c; 
}

int IsTautograma(char s[MAX_STRING]) {
    char letra = ToMaiscula(s[0]);
    size_t i = 1;

    while (s[i]) {
        while (s[i] != ' ' && s[i])
            i++;
        if (s[i] == ' ') {
            if (ToMaiscula(s[++i]) != letra)
                return 0;
        }
    }
    
    return 1;
}

int main(void) {
    char s[MAX_STRING];

    while (1) {
        scanf(" %[^\n]", s);

        if (!strcmp("*", s))
            break;

        if (IsTautograma(s))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}