/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:32:22 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/06 20:40:14 by lgillett         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int len1;
	int len2;
	int i;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	i = 0;
	while (i < len2 || i < nb)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	if (nb < len2)
		dest[len1 + nb] = 0;
	else
		dest[len1 + len2] = 0;
	return (dest);
}
