/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:09:55 by vlay              #+#    #+#             */
/*   Updated: 2017/11/25 16:09:57 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(char *str, int c)
{
	char	*cpy;
	size_t	i;

	if (!str)
		return (NULL);
	if (!(i = ft_strchri(str, c)))
		return (ft_strdup(str));
	if (!(cpy = ft_strndup(str, i)))
		return (NULL);
	return (cpy);
}
