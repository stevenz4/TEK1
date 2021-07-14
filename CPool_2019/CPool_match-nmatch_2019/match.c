/*
** EPITECH PROJECT, 2019
** matchb
** File description:
** find if two strings matchs
*/

#include "include/my.h"

int normal(char const *s1, char const *s2)
{
    int s1count = 0;
    int s2count = 0;
    int s2max = my_strlen(s2);

    while (s1[s1count] != '\0' || s2[s2count] != '\0') {
        while (s2[s2count] == '*') { 
            s2count++;
            while (s1[s1count] != s2[s2count])
                s1count++;
        }
        if (s2count == s2max)
            return 1;
        if (s1[s1count] != s2[s2count])
            return 0;
        s1count++;
        s2count++;
    }
    return 1;
}

int star(char const *s1, char const *s2)
{
    int s1count = 0;
    int s2count = 0;
    int size_s2 = my_strlen(s2);
    int size_s1 = my_strlen(s1);
    int s2max = my_strlen(s2);

    if (size_s2 > size_s1) {
        size_s2 = size_s2 - size_s1;
        while (s1[s1count] != '\0' || s2[size_s2] != '\0') {
            while (s2[size_s2] == '*') {
                size_s2++;
                while (s1[s1count] != s2[size_s2])
                    s1count++;
            }
            if (s1[s1count] != s2[size_s2])
                return 0;
            s1count++;
            size_s2++;
        }
        return 1;
    }
    if (size_s2 < size_s1) {
        size_s1 = size_s1 - size_s2;
        while (s1[size_s1] != '\0') {
            while (s2[s2count] == '*') {
                size_s1++;
                s2count++;
            }
            if (s2[s2count] == s2[size_s2])
                return 1;
            if (s1[size_s1] != s2[s2count])
                return 0;
            size_s1++;
            s2count++;
        }
        return 1;
    }
    if (size_s1 == size_s2) {
        while (s2[s2count] != '\0') {
            while (s2[s2count] == '*') {
                s1count++;
                s2count++;
            }
            if (s2[s2count] == s2[size_s2])
                return 1;
            if (s2[s2count] != s1[s1count])
                return 0;
            s1count++;
            s2count++;
        }
        return 1;
    }
}

int match(char const *s1, char const *s2)
{
    if (s2[0] == s1[0]) 
        normal(s1,s2);
    else if (s2[0] == '*') 
        star(s1,s2);
    else
        return 0;
}
int main(void)
{
    char s1[] = "hello";
    char s2[] = "*******o*";
    printf("%d",match(s1,s2));
    return 0;
}
