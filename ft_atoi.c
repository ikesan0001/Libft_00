/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:02:13 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/11 00:41:20 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		k;
	int		l;
	int		m;
	char	*s;

	i = 0;
	k = 0;
	l = 0;
	m = 0;
	s = (char *)str;
	while (s[i] == 32)
		s++;
	while (ft_isdigit(s[i]))
	{
		m = s[i] - 48;
		while (ft_isdigit(s[i]))
		{
			i++;
			l++;
		}
		i -= l;
		while (l > 0)
		{
			l--;
			m *= 10;
		}
		k += m;
	}
	if (j == 45)
		k *= -1;
	return (k);
}
