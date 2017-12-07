/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:08:42 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:08:54 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void **s1, void **s2)
{
	void	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}