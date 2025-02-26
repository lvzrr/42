unsigned int	ft_strlen(char *c)
{
	unsigned int	l;

	l = 0;
	while (*c++)
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	d_len;
	unsigned int	d_len2;
	unsigned int	s_len;

	d_len = ft_strlen(dest);
	d_len2 = d_len;
	s_len = ft_strlen(src);
	if (n <= d_len)
		return (ft_strlen(src) + n);
	dest += d_len;
	while (*src && d_len++ < n - 1)
		*dest++ = *src++;
	*dest = 0;
	return (d_len2 + s_len);
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s2 && *s1 == *s2)
// 	{
// 		++s1;
// 		++s2;
// 	}
// 	return (*s1 - *s2);
// }
//
// #include <bsd/string.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// void generate_random_string(char *str, size_t length) {
//     const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
//     size_t charset_size = sizeof(charset) - 1;
//
//     for (size_t i = 0; i < length; i++) {
//         str[i] = charset[rand() % charset_size];
//     }
//     str[length] = '\0';
// }
//
// int test(char *dest, char *src, unsigned int n)
// {
// 	char dest1[100];
// 	char dest2[100];
//
// 	strlcpy(dest1, dest, sizeof(dest1));
// 	strlcpy(dest2, dest, sizeof(dest2));
//
// 	int ft_result = ft_strlcat(dest1, src, n);
// 	int std_result = strlcat(dest2, src, n);
//
// 	if (ft_result != std_result || strcmp(dest1, dest2) != 0)
// 	{
// 		printf("dst: %s | src: %s | size: %d\n\n\tft_strlcat:\t%s (%d)\n\tstrlcat:\t%s (%d)\n\n\n", 
// 			dest, src, n, dest1, ft_result ,dest2, std_result);
// 	}
//
// 	return (ft_result == std_result && strcmp(dest1, dest2) == 0);
// }
//
// int main() {
//     srand(time(NULL));
// 	printf("\033[?25l");
// 	int	c = 0;
// 	int w = 1000000;
// 	for (int i = 0; i < w; i++)
// 	{
// 		unsigned int 	size1	= rand() % 100;
// 		unsigned int 	size2	= rand() % 100;
// 		unsigned int 	size3	= rand() % 100;
// 		char 			src		[100];
// 		char 			dest	[100];
//
// 		generate_random_string(dest, size1);
// 		generate_random_string(src, size2);
// 		int				x		=test(dest, src, size3);
// 		if (x)
// 			c++;
// 		printf("Passed %d/%d tests\r", c, w);
// 	}
// 	printf("\033[?25h");
// 	printf("\n");
//     return 0;
// }
