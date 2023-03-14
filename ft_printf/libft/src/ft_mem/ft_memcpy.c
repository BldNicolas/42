/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberlaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:37:21 by nberlaud          #+#    #+#             */
/*   Updated: 2022/01/05 21:12:48 by nberlaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*original_dst;

	if (!dst && !src)
		return (NULL);
	original_dst = dst;
	while (n--)
		*((char *)dst++) = *((char *)src++);
	return (original_dst);
}
