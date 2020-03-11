/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatesho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 21:51:18 by dmatesho          #+#    #+#             */
/*   Updated: 2020/02/26 13:30:30 by dmatesho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	char *ptr;

	ptr = s;
	while (ptr && *ptr)
	{
		*ptr = 0;
		ptr++;
	}
}