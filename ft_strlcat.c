/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:49:30 by abenlahb          #+#    #+#             */
/*   Updated: 2022/10/30 14:37:07 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;
	size_t	sum;

	if (!dst && !dstsize)
		return (0);
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	i = 0;
	if (len_d > dstsize)
		sum = len_s + dstsize;
	else
		sum = len_s + len_d;
	if (dstsize == 0)
		return (sum);
	while (src[i] && i + len_d < dstsize - 1)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (sum);
}
