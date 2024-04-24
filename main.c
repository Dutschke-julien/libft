#include <stdio.h>
#include "libft.h"

int main()
{
    printf("Hello, World!\nThis is a test of my libft library\n\n");

    printf("Testing ft_strlen\n");
    printf("Length of 'Hello, World!': [%zu]\nExpected length: [13]\n\n", ft_strlen("Hello, World!"));

    printf("Testing ft_strchr\n");
    printf("Searching for 'W' in 'Hello, World!': [%s]\nExpected result: [World!]\n\n", ft_strchr("Hello, World!", 'W'));
 
    printf("Testing ft_strrchr\n");
    printf("Searching for 'o' in 'Hello, World!': [%s]\nExpected result: [orld!]\n\n", ft_strrchr("Hello, World!", 'o'));

    printf("Testing ft_strnstr\n");
    printf("Searching for 'World' in 'Hello, World!': [%s]\nExpected result: [World!]\n\n", ft_strnstr("Hello, World!", "World", 13));

    printf("Testing ft_strdup\n");
    printf("Duplicating 'Hello, World!': [%s]\nExpected result: [Hello, World!]\n\n", ft_strdup("Hello, World!"));

    printf("Testing ft_substr\n");
    printf("Substr 'Hello, World!' from 7 to 13: [%s]\nExpected result: [World!]\n\n", ft_substr("Hello, World!", 7, 13));

    printf("Testing ft_strjoin\n");
    printf("Joining 'Hello, ' and 'World!': [%s]\nExpected result: [Hello, World!]\n\n", ft_strjoin("Hello, ", "World!"));

    printf("Testing ft_strtrim\n");
    printf("Trimming '  Hello, World!  ' from ' ': [%s]\nExpected result: [Hello, World!]\n\n", ft_strtrim("  Hello, World!  ", " "));

    printf("Testing ft_split\n");
    char **split = ft_split("Hello, World!", ' ');
    printf("Splitting 'Hello, World!' by ' ': [%s] [%s]\nExpected result: [Hello, World!]\n\n", split[0], split[1]);

    printf("Testing ft_strlcpy\n");
    char dst[13];
    printf("Copying 'Hello, World!' to dst: [%zu]\nExpected result: [13]\n\n", ft_strlcpy(dst, "Hello, World!", 13));

    printf("Testing ft_strlcat\n");
    char dst2[13] = "Hello, ";
    printf("Concatenating 'Hello, ' and 'World!': [%zu]\nExpected result: [13]\n\n", ft_strlcat(dst2, "World!", 13));

}