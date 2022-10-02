/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:00:51 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 11:02:02 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int ft_check(char *strs, char *sep, char *tab)
{
	int i;
	int j;
	int cpt;
	int lens;
	
	lens = ft_strlen(strs);
	i = 0;
	while (strs[i])
	{
		j = 0;
		tab = 
		if (strs[i] == sep[j])
		{
			while (strs[i + j] == sep[j])
			{
				j++;
				if (!sep[j])
				tab = 
					return (&strs[j]);
			}
		}
		i++;
	}
	return (0);
}
char *ft_strjoin( int size, char **strs, char *sep)
{
	int i;
	int index_letter;
	int index_word;
	char *tab;
	int cpt;
	int lens;

	
	i = 0;
	lens = ft_strlen(sep);
	cpt = 0;
	index_letter = 0;
	index_word = 0;
	if (size == 0)
		return (0);
	while (strs[index_word][index_letter])
	{
		ft_check(strs, sep, tab);
	}
		
	}
	return (tab);
}