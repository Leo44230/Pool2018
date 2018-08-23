/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:36:57 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/03 23:10:17 by lgillett         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		n;
	int		index;
	int		len;
	char	tmp;

	len = ft_strlen(str);
	n = 0;
	while (n < len)
	{
		index = 0;
		while (index < len - n - 1)
		{
			tmp = *(str + index);
			*(str + index) = *(str + index + 1);
			*(str + index + 1) = tmp;
			index++;
		}
		n++;
	}
	return (str);
}
