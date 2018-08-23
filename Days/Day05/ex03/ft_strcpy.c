/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 04:40:52 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/05 16:20:47 by lgillett         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int lendest;
	int j;

	lendest = ft_strlen(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	j = ft_strlen(src);
	while (dest[j] != 0)
		dest[j++] = 0;
	return (dest);
}
