/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:25:33 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 17:52:01 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	if (dst && src)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

char		*ft_pstrdup(const char *s1)
{
	char	*dst;

	dst = (char*)malloc(sizeof(dst) * (ft_strlen(s1) + 1));
	ft_strcpy(dst, s1);
	return (dst);
}
