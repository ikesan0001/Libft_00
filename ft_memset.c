/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:06:25 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/06 09:07:08 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)buf;
	while (i++ < n)
		b[i] = (unsigned char *)ch;
	return (b);
}
