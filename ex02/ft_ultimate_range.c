/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:24:30 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 08:24:09 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int cpt;
	int safe_min;
	int j;

	cpt = 0;
	safe_min = 0;
	j = 0;
	i = 1;
	if (min >= max)
		return (0);
	else if (safe_min < max)
	{
		cpt++;
		safe_min++;
	}
	while (min < max)
	{
		range[i][j] = min;
		min++;
		j++;
		i++;
	}
}

#include <stdio.h>

int main()
{
	int *tab[] = {1, 3 ,5 ,4, 2};
	printf("%d, %d, %d, %d, %d, ",ft_ultimate_range(tab, 1, 5));
}