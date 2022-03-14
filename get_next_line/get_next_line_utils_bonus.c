/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:28:15 by mbardett          #+#    #+#             */
/*   Updated: 2022/03/14 17:28:18 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*nstr;
	int		j;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = 0;
	}
	if (!s1 || !s2)
		return (NULL);
	nstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nstr)
		return (NULL);
	while (s1[++i])
		nstr[i] = s1[i];
	while (s2[j])
		nstr[i++] = s2[j++];
	nstr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (nstr);
}

int	ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
