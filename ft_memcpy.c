/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:42:46 by abenlahb          #+#    #+#             */
/*   Updated: 2022/10/29 21:44:43 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *) dst;
	p2 = (unsigned char *) src;
	i = 0;
	if ((!p1 && !p2) || !n)
		return (p1);
	if (p2 == p1)
		return (p1);
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}
