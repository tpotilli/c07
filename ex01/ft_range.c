/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:15:28 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/01 11:24:02 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *range;
	int size;
	int safe_min;
	int i = 0;

	safe_min = min;
	if (safe_min < max)
	{
		size++;
		safe_min++;
	}
    else if (min >= max)
        return (0);
	range = malloc(sizeof(int) * size);
	safe_min = min;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
