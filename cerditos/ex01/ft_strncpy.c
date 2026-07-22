/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alobato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 22:59:03 by alobato           #+#    #+#             */
/*   Updated: 2026/07/22 18:14:35 by alobato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i = n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* int	main(void)
{
	char	destino[500];
	char	*origen = "hola mango67sigma";
	ft_strncpy(destino, origen, 5);
	printf("texto original: %s\n", origen);
	printf("texto copiado: %s\n", destino);
	return (0);
}
*/
