/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:24:02 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/07 10:45:18 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_str(char *str)
{
	int	num;

	num = -1;
	while (str[++num] != '\0')
		continue ;
	return (num);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	cont;

	cont = -1;
	len_dest = len_str(dest);
	while (src[++cont] != '\0')
		dest[len_dest++] = src[cont];
	dest[len_dest] = '\0';
	return (dest);
}
