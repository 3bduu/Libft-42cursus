/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:35:43 by abenlahb          #+#    #+#             */
/*   Updated: 2022/10/30 14:50:40 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	char	*a;

	a = "";
	n_len = ft_strlen(needle);
	if (!haystack && !len)
		return (NULL);
	if (!n_len)
		return ((char *) haystack);
	if ((char *) haystack == a)
		return (NULL);
	while (haystack[0] && len >= n_len)
	{
		len--;
		if (!ft_memcmp(haystack, needle, n_len))
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
