/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:34:00 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/11 18:16:05 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	where;
	int	fchar;

	i = -1;
	j = 0;
	where = -1;
	while (str[++i] != '\0' && where == -1)
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
				fchar = i;
			if (to_find[++j] == '\0')
				where = i;
		}
		else
			j = 0;
	}
	if (where != -1)
		where = fchar;
	else
		where = i;
	return (&str[where]);
}
