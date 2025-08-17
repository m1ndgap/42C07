/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:26:34 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/17 15:44:14 by tchumbas         ###   ########.fr       */
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
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	range[i] = '\0';
	return (range);
}

/* int	main(void)
{
	int *array = ft_range(-51, -10);
	int i = 0;

	while (array[i])
	{
		printf("%d", array[i++]);
		printf("\n");
	}
} */