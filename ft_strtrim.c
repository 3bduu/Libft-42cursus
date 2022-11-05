/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:50:48 by abenlahb          #+#    #+#             */
/*   Updated: 2022/10/29 15:20:06 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	check(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s;
	size_t	e;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s = 0;
	e = ft_strlen(s1);
	while (s1[s] && check (set, s1[s]))
		s++;
	while (s < e && check (set, s1[e - 1]))
		e--;
	p = malloc(sizeof(char) * (e - s + 1));
	if (!p)
		return (NULL);
	while (s < e)
		p[i++] = s1[s++];
	p[i] = '\0';
	return (p);
}
