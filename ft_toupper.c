/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:51:14 by ichubare          #+#    #+#             */
/*   Updated: 2016/11/21 12:56:56 by ichubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	else
		return (i);
}
