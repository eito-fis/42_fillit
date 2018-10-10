/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_undoboard.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eito-fis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:04:05 by eito-fis          #+#    #+#             */
/*   Updated: 2018/10/09 19:22:56 by eito-fis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_undoboard(t_piece *p, t_board *b, int y)
{
	int	i;

	i = 0;
	while (i < p->height)
	{
		b->board[y + i] ^= p->points[i];
		i++;
	}
}