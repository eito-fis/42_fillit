/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boardclean.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eito-fis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:30:39 by eito-fis          #+#    #+#             */
/*   Updated: 2018/10/09 19:23:06 by eito-fis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

void	ft_boardclean(long **arry, int l)
{
	long	*board;
	int		i;

	if (!arry || !*arry)
		return ();
	board = *arry;
	i = 0;
	while (i < l)
	{
		board[i] = 0;
		i++;
	}
}
