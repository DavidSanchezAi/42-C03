/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:43:43 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/07 15:39:57 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	cont;
	int	cont2;

	cont = -1;
	while (dest[++cont] != '\0')
		continue ;
	cont2 = -1;
	while (++cont2 != nb - 1)
		dest[cont++] = src[cont2]
	return (dest)
}
