/*
** EPITECH PROJECT, 2019
** my_get_nbr
** File description:
** 
*/

int my_getnbr(char const *str)
{
    int compteur = 0;
    int valeur = 0;
    int negatif = 0;

    while (str[compteur] == '-' || str[compteur] == '+') {
        compteur++;
        negatif++;
    }
    compteur = 0;
    while (str[compteur] > '/' && str[compteur] < ':' || str[compteur] == '-' || str[compteur] == '+') {
        if (str[compteur] > '/' && str[compteur] < ':') {
            valeur *= 10;
            valeur += str[compteur] - '0';
        }
        compteur++;
    }
    if (negatif % 2 == 0)
        return (valeur);
    if (negatif % 2 != 0)
        return (-valeur);
}
