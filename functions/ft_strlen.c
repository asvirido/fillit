/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:24:25 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/29 17:15:51 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		ft_strlen(const char *s)
{
	int		lenght;

	lenght = 0;
	while (s[lenght])
		lenght++;
	return (lenght);
}
