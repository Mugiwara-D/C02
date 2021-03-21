/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 08:32:53 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/21 11:31:43 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\n';
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main(void)
{	
	char src[] = "azert";
	char dest[] = "";

	printf("dest is %s\n", ft_strncpy(dest, src, 6));
	return 0;
}