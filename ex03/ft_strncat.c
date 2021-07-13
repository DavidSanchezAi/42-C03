/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:43:43 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/13 16:08:39 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cont;
	unsigned int	cont2;

	cont = 0;
	while (dest[cont] != '\0')
		cont++;
	cont2 = 0;
	while (cont2 != nb - 1)
	{
		dest[cont++] = src[cont2];
		cont2++;
	}
	return (dest);
}
