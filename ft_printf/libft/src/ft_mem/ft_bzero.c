/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberlaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:31:38 by nberlaud          #+#    #+#             */
/*   Updated: 2022/01/05 17:58:11 by nberlaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*strcpy;
	size_t			i;

	strcpy = str;
	i = 0;
	while (i++ < n)
		*strcpy++ = 0;
}
