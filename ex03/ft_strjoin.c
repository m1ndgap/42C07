/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:33:28 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/17 15:16:00 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_all_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	y;
	int	fulllen;

	i = size - 1;
	y = 0;
	fulllen = 0;
	while (i >= 0)
	{
		printf("%s \n", strs[i]);
		printf("%d \n", ft_strlen(strs[i]));
		fulllen += ft_strlen(strs[i]);
		i--;
	}
	printf("%d \n", ft_strlen(sep));
	printf("fulllen#1 %d\n", fulllen);
	fulllen += ft_strlen(sep) * (size - 1);
	return (fulllen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		y;
	int		fulllen;
	char	*join;

	i = 1;
	y = ft_strlen(&strs[0][0]);
	fulllen = ft_all_strlen(size, strs, sep);
	if (size <= 0)
		return ("\0");
	if (!(join = malloc(sizeof(char) * fulllen)))
		return (NULL);
	join = &strs[0][0];
	printf("fulllen %d\n", fulllen);
	while (i < size)
	{
		while (strs[i])
		{
			join[y] = strs[i]
		}
	}
	return (join);
}

int	main(void)
{
	int size = 3;
	char *strings[] = {"lol", "lmao", "rofl"};
	char *separator = ">>>>>";
	printf("%s", ft_strjoin(size, strings, separator));
}