/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#define FAILURE 84

typedef struct position {
    int x;
    int y;
} pos;

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

int map_validation(char *str);
int read_file(char *filepath);
int mallocation(char *str, char *filepath);
int copy_map(char **map, int rows, char *str);
pos get_position(char **map, int size);
int print_on_mid(char **map, int rows, char *str);
char **move_player(char **map, pos coord, char *str, int size);

char **move_down(char **map, int x, int y);
char **move_up(char **map, int x, int y);
char **move_left(char **map, int x, int y);
char **move_right(char **map, int x, int y);
char **reset_map(char **map, char *str, int rows);
char **reset_everytime(char **map, char *str);
