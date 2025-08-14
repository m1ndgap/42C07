/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:10:30 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/14 21:28:25 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;

	len = 0;
	while (src[len])
		len++;
	if (!(dup = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dup[len] = '\0';
	while (len >= 0)
	{
		dup[len] = src[len];
		len--;
	}
	return (dup);
}

/* int	main(void)
{
	char *str = "beep boop";
	char *dup = ft_strdup(str);
	printf("%s", dup);
	free(dup);
} */