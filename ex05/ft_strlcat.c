/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:21:41 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/13 18:46:35 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	len_str(char *dest)
{
	unsigned int	cont;

	cont = 0;
	while (dest[cont] != '\0')
		cont++;
	return (cont);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	c;

	if (size <= len_str(dest))
		return (size + len_str(dest));
	len_dest = len_str(dest);
	c = -1;
	while (src[++c] != '\0' && len_dest < size - 1)
	{
		dest[len_dest] = src[c];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (len_str(dest) + len_str(&src[c]));
}
