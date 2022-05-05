/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:06:25 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/06 00:14:43 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*(void *buf, int ch, size_t n)
{
	size_t	i;
	unsigned char	*b;
	unsigned char	c;

	i = 0;
	b = (unsigned char *)buf;
	c = (unsigned char)ch;
	while (i++ < n)
		b[i] = c;
	return (b);
}
