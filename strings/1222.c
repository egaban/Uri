#include <stdio.h>
#include <string.h>

#define MAX_WORD_SIZE 70

int main(void)
{
  int n, l, c;
  int i;
  int cur_page, cur_line, cur_chr;
  size_t word_len;
  char word[MAX_WORD_SIZE+1];

  while (scanf("%d %d %d", &n, &l, &c) != EOF) {
    cur_page = cur_line = 1;
    scanf("%s", word);
    cur_chr = strlen(word);

    for (i = 1; i < n; ++i) {
      scanf("%s", word);
      word_len = strlen(word);

      if (cur_chr + word_len + 1 > c) {
        cur_chr = word_len;
        cur_line++;
        if (cur_line > l) {
          cur_line = 1;
          cur_page++;
        }
      } else
        cur_chr += word_len + 1;
    }

    printf("%d\n", cur_page);
  }
  return 0;
}
