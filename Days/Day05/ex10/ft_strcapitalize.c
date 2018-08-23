/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 19:25:19 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/07 03:27:13 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if ((c > 96 && c < 123) || (c > 47 && c < 58) || (c > 64 && c < 91))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (is_alphanum(str[i - 1]) == 0)
				str[i] = str[i] - 32;
		}
		else if (str[i] > 64 && str[i] < 91)
		{
			if (is_alphanum(str[i - 1]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
