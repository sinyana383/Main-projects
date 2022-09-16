/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salekyne <salekyne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:37:44 by salekyne          #+#    #+#             */
/*   Updated: 2022/09/13 17:37:45 by salekyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"
/*
 * Function that compares 'n' bytes of the two strings 'str1' and 'str2'.
 * If no difference is found, 0 is returned. Else, it returns the difference
 * between the first pair of bytes that differ in 'str1' and 'str2'.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str1[i] == str2[i])
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
