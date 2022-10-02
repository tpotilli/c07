/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:03:15 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 09:33:47 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char **ft_split(char *str, char *charset)
{
    int index_lettre;
    int index_mots;
    int cpt;
    char **split;
    int i;

    i = 0;
    cpt = 0;
    index_lettre = 0;
    index_mots = 0;
    while (str[i] == charset)
        i++;
    split = malloc(sizeof(char *) * ft_strlen(str[i]));
    while (str[i])
    {
        split[index_lettre] = malloc(sizeof(char) * ft_strlen(str[i]));
        while (str[i])
        {
            split[index_mots][index_lettre] == str[i];
            index_lettre++;
            i++;
        }
        split[index_mots][index_lettre] = '\0';
        index_mots++;
        index_lettre = 0;
        while (str[i] == charset)
            i++;
    }
    split[index_mots] = '\0';
    return (0);
}

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 1;
    int len = ft_strlen("salut les copains");
    
    char **tab = ft_split("salut les copains", " ");
    while (j < len)
    {
        while (i < len)
        {
            printf("%s",ft_split(tab," "));
            i++;
        }
        j++;
    }
}