/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

typedef struct matrix_size {
    int rows;
    int size_m;
} size;

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_printf(char *s, ...);
int my_put_binary(int nb);
int my_put_octal(int nb);
int my_putstr_octal(char const *str);
int my_put_octalbis(int nb);
int my_put_hex(int nb);
int my_put_hexbis(int nb);
int my_put_hexadd(long long nb);

void display_key_matrix(int **key, int size_square);
void key_matrix(int **arr, char **av, int size, int size_m);
void message_matrix(int **arr, char *str, size mm, int **key);
int count_matrix_size(char **av);
int count_matrix_rows(char *str, int size_m, int **key, int key_size);
void display_encrypted_matrix(int **key, int rows, int size_m);
void display_key_matrix(int **key, int size_square);
int encrypted(int **msg, int **key, size mm, int key_size);
