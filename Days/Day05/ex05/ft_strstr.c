/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 05:47:18 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/07 04:36:12 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*res;

	if (ft_strlen(to_find) == 0)
		res = (ft_strlen(str) == 0) ? to_find : str;
	if (to_find == 0)
		res = (str == 0) ? "" : 0;
	if (ft_strlen(to_find) == 0 || to_find == 0)
		return (res);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (j < ft_strlen(to_find) && str[j + i] == to_find[j])
			{
				if (++j == ft_strlen(to_find))
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
