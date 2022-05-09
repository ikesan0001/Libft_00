/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:45:42 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/09 10:49:05 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	j;
	
	s = (char *)src;
	i = 0;
	j = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(s));
	if (dstsize < j + 1)
		return (dstsize + ft_strlen(s));
	while (dstsize > 0 && i < dstsize - j  - 1 && s[i] != 0)
	{
		dst[j + i] = s[i];
		i++;
	}
	dst[j + i] = 0;
	return (j + ft_strlen(s));
}
