/*
** EPITECH PROJECT, 2019
** nmatch
** File description:
** nmatch
*/

#include<stdio.h>

int nmatch(char const *s1, char const *s2)
{
    int s1count = 0;
    int s2count = 0;
    int nmatchcompt = 0;

    while (s1[s1count] != '\0') {
        s1count++;
    }
    while (s2[s2count] != '\0' || s1[s2count] != '\0') {
        if (s2[s2count] == '*') {
            nmatchcompt++;
        }
        if (s1[s2count] == s2[s2count]) {
            s2count++;
            nmatchcompt++;            
        }
        else
            s2count++;
    }
    return nmatchcompt;
}

int main(void)
{
    char s1[] = "hello";
    char s2[] = "he***";
    printf("%d",nmatch(s1,s2));
    return 0;
}
