/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:41:07 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/13 16:22:58 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((s1[cont] == s2[cont]) && (s1[cont] != '\0') && (s2[cont] != '\0')
		&& (cont != n - 1))
		cont++;
	return (s1[cont] - s2[cont]);
}
