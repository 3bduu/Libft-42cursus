/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:03:30 by abenlahb          #+#    #+#             */
/*   Updated: 2022/10/30 14:55:09 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) dst;
	p2 = (unsigned char *) src;
	if ((!p1 && !p2) || !len)
		return (p1);
	if (p1 <= p2)
		ft_memcpy(p1, p2, len);
	else
	{
		while (len--)
			p1[len] = p2[len];
	}
	return (p1);
}
