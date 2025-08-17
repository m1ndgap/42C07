/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:32:54 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/17 13:36:38 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	if (!(temp = malloc(sizeof(int) * (max - min))))
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		temp[i++] = min++;
	}
	*range = temp;
	return (i);
}

/* int	main(void)
{
	int *range;
	int array = ft_ultimate_range(&range, -5, 5);
	int i = 0;

	if (array == -1)
	{
		printf("INVALID VALUES PASSED\n");
	}
	else
	{
		printf("New array length: %d\n\n-------\n", array);
	}
	i = 0;
	while (i < array)
	{
		printf("  %d  \n", range[i++]);
		printf("-------\n");
	}
} */