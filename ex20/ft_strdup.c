/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:20:47 by sperron           #+#    #+#             */
/*   Updated: 2024/05/14 10:48:08 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(*dest) * len);
	if (dest == NULL)
		return (NULL);
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest - len);
}
/*
#include <stdio.h>

int main()
{
	char *src;
	char *dest;

	src = "Bonjour";
	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
	return (0);
}
*/