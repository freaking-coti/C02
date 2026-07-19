#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
{
	unsigned int	i;

	i = 0;
	while (i < n && src[n] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	destino[500];
	char	*origen = "hola mango67sigma";
	ft_strncpy(destino, origen, 5);
	printf("texto original: %s\n", origen);
	printf("texto copiado: %s\n", destino);
	return (0);
}
