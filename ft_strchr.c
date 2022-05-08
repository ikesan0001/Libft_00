/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:35:58 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/08 17:11:13 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*S;
	size_t	i;

	S = (char *)s;
	i = 0;
	while (i <= ft_strlen(S))
	{
		if (S[i] == (char)c)
			return (S + i);
		i++;
	}
	return (0);
}
