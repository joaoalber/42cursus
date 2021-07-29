/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalbert <joalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:25:42 by joalbert          #+#    #+#             */
/*   Updated: 2021/07/29 19:36:05 by joalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == s)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
