/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:26:34 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/19 10:39:46 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * ((max - min) + 1));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}

/* int	main(void)
{
	int *array = ft_range(-51, 10);
	int i = 0;

	while (i <= 60)
	{
		printf("%d", array[i++]);
		printf("\n");
	}
} */