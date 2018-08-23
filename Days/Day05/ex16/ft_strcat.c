/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:08:38 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/06 20:39:07 by lgillett         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	i = 0;
	while (i < len2)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	dest[len1 + len2] = 0;
	return (dest);
}
