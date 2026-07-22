/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alobato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:10:07 by alobato           #+#    #+#             */
/*   Updated: 2026/07/21 23:16:31 by alobato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int	main(void)
{
	char	origen[] = "hola mundo";
	char	destino[500];

	ft_strcpy(destino, origen);


	printf("texto original: %s\n", origen);
	printf("texto copiado: %s\n", destino);
	return (0);
}
*/
