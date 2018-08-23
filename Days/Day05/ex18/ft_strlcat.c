/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 23:31:33 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/07 17:34:10 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len1;
	int				len2;
	int				ret;

	i = 0;
	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	ret = len1 + len2;
	if (size < len1 + 1)
		return (size + len2);
	else
	{
		while (i <= size - len1)
		{
			dest[len1 + i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
		return (len1 + len2);
	}
}
