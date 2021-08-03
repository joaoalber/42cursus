/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joalbert <joalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:00:38 by joalbert          #+#    #+#             */
/*   Updated: 2021/08/02 21:00:49 by joalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	compared_byte;

	compared_byte = 1;
	if (n == 0)
		return (0);
	while (*s1 && *s2)
	{
		if ((*s1 != *s2) || (compared_byte++ == n))
			break ;
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
