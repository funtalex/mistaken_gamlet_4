#ifndef MY_SORT
#define MY_SORT

int min(int a, int b);

int div_up(int, int);

int cmp_str_start(struct line, struct line);

int cmp_str_end(struct line, struct line);

void partition(struct line**, struct line, int, int, int*, int*, int (*func)(struct line, struct line));

struct line find_index(struct line*, int, int, int, int (*func)(struct line, struct line));

void my_sort(struct line**, int, int, int (*func)(struct line, struct line));

#endif MY_SORT