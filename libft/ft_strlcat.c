/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalbert <joalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:03:08 by joalbert          #+#    #+#             */
/*   Updated: 2021/08/02 21:14:11 by joalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dest_len;
	unsigned int	bytes_written;

	index = 0;
	bytes_written = 0;
	dest_len = ft_strlen(dest);
	if (size != 0)
	{
		while (dest[index])
			index++;
		while ((*src) && (bytes_written < (size - dest_len - 1)))
		{
			dest[index++] = *src;
			src++;
			bytes_written++;
		}
		dest[index] = '\0';
	}
	return (ft_strlen(dest));
}
