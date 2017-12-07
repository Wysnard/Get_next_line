/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:42:16 by vlay              #+#    #+#             */
/*   Updated: 2017/11/25 15:42:18 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char **s1, char **s2)
{
	char	*join;

	join = ft_strjoin(*s1, *s2);
	ft_memdel((void **)s1);
	ft_memdel((void **)s2);
	return (join);
}
