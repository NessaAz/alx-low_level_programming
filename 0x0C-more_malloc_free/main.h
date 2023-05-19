#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char *argv[]);
int _atoi_digit(char c);
int _is_number(const char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
void *mul_array(const char *a1, int len1, char a2, char *a3, int lena);
void print_array(const char *a, int nb);

#endif /*MAIN_H */
