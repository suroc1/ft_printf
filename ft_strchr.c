/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:01:26 by ichubare          #+#    #+#             */
/*   Updated: 2017/01/16 15:43:42 by ichubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strchr(const char *s, int c)
{
	const char	ch = c;
	int			i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}
