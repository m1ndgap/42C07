/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:33:28 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/17 15:42:33 by tchumbas         ###   ########.fr       */
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
	int	fulllen;

	i = size - 1;
	fulllen = 0;
	while (i >= 0)
	{
		fulllen += ft_strlen(strs[i]);
		i--;
	}
	fulllen += ft_strlen(sep) * (size - 1);
	return (fulllen);
}

char	*ft_strjoin_sub(char *fullstr, int size, char **strs, char *sep)
{
	int	i;
	int	y;
	int	z;
	int	fulllen;

	i = 0;
	z = 0;
	fulllen = ft_all_strlen(size, strs, sep);
	while (i < size)
	{
		y = 0;
		while (strs[i][y])
			fullstr[z++] = strs[i][y++];
		if (z < fulllen)
		{
			y = 0;
			while (sep[y] != '\0')
				fullstr[z++] = sep[y++];
		}
		i++;
	}
	return (fullstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		fulllen;
	char	*join;

	fulllen = ft_all_strlen(size, strs, sep);
	if (size <= 0)
	{
		join = malloc(0);
		return (join);
	}
	join = malloc(sizeof(char) * fulllen);
	if (!join)
		return (NULL);
	return (ft_strjoin_sub(join, size, strs, sep));
}

/* int	main(void)
{
	int size = 3;
	char *strings[] = {"lol", "lmao", "fofl"};
	char *separator = ";:;:;";
	printf("%s", ft_strjoin(size, strings, separator));
	return (0);
} */
