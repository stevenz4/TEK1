/*
** EPITECH PROJECT, 2019
** fir tree
** File description:
** just fir tree
*/

#include<unistd.h>
#include<stdio.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

void  tree(int size)
{
    int lines = 4  ;
    int star = 1;
    int spcompt = 4;
    int sizecomptbis = 1;
    int sizecompt = 0;
    int count = 1;
    
    while (sizecompt < size){
        if (size > 1) {
            while (sizecomptbis < size) {
            spcompt = spcompt +3;
            sizecomptbis++;
            }
        }
        for (int linescompt = 0; linescompt < lines; linescompt++){
            for (int spcompt1 = 0; spcompt1 < spcompt; spcompt1++)
                my_putchar(' ');
            spcompt--;
            if (count < 2) {
            for (int starc = 1; starc <= star; starc++)
                my_putchar('*');
            star = star + 2;
            my_putchar('\n');
            }
            else if (count > 2) {
                star = star + 2;
                count = 1;
            }
        }
        count++;
        lines++;
        sizecompt++;
        spcompt = spcompt + 2;
        star = star - 4;
    }
    for (int trunk = 1; trunk < (star + 4) / 2; trunk++)
        my_putchar(' ');
    my_putchar('|');
    my_putchar('\n');
}

int main(void)
{
    tree(2);
    return 0;
}
