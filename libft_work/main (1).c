#include	<string.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<ctype.h>
#include	<unistd.h>
#include	<fcntl.h>

#include	"libft.h"

t_list    *ft_lstcpy(t_list *list)
{
	t_list    *newlist;

	newlist = ft_lstnew(list->content, list->content_size);
	if (newlist)
		return (newlist);
	return (NULL);
}

void    ft_memlistdel(void *ap, size_t ap_size)
{
	if (ap)
	{
		free(ap);
	}
}
void    ft_putlist(t_list *lst)
{
	char    *str;

	str = (char *)lst->content;
	ft_putstr(str);
	ft_putchar('\n');
}

char    *ft_addstr(const char *str)
{
    char    *answer;
	int        n;

	answer = ft_strnew((size_t)ft_strlen(str));
	n = -1;
	while (str[++n])
		answer[n] = str[n];
	answer[n] = '\0';
	return (answer);
}

//## t_strmap
//####################################################
char	ft_test__chari(unsigned int n, char c)
{
	c += n;
	return (c);
}

//## t_strmap
//####################################################
char	ft_test__char(char c)
{
	c += 1;
	return (c);
}

//## ft_striteri
//####################################################
void	ft_test_putstr_char(unsigned int n, char * str)
{
	printf("%d-%c \n", n, str[0]);
}
 
int main()
{
	//################################################################
	ft_putstr("\n\n##ft_memset");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	char	*	str;
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	ft_memset(str, '-', 12);
	printf("-velesepede-\nSome of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.\n%s\n", str);

	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	memset(str,'-', 12);
	printf("\n-original-\nSome of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.\n%s\n", str);
	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_bzero");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	ft_bzero(str, 12);
	printf("\n-velesepede-\nSome of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.\n%p%s\n", str, str);

	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	bzero(str, 12);
	printf("\n-original-\nSome of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.\n%p%s\n", str, str);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memcpy");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	char	*	str2;

	str2	= 	ft_strnew(100);
	str2[0]	=	't';
	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	ft_memcpy(str2, str, 38);
	printf("\n-velesepede-\nSome of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.\n%s\n", str2);

	ft_strdel(&str2);
	str2	= 	ft_strnew(100);
	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	memcpy(str2, str, 38);
	printf("\n-original-\nSome of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.\n%s\n", str2);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memccpy");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	ft_strdel(&str2);
	str2	= 	ft_strnew(100);
	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	printf("-velesepede-\n%p, %s\n", ft_memccpy(str2, str, ' ', 38), str2);

	ft_strdel(&str2);
	str2	= 	ft_strnew(100);
	ft_strdel(&str);
	str	=	ft_addstr("Some of the functions’ prototypes you have to re-code use the \"restrict\" qualifier.");
	printf("-original-\n%p, %s\n", memccpy(str2, str, ' ', 38), str2);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memmove");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	ft_strdel(&str);
	str	=	ft_addstr("memmove может оказаться очень полезной функцией..............");
	ft_memmove(str + 49, str + 38, 47);
	printf("-velesepede-\nmemmove может оказаться очень полезной функцией..............\n%s\n", str);

	ft_strdel(&str);
	str	=	ft_addstr("memmove может оказаться очень полезной функцией..............");
	memmove(str + 49, str + 38, 47);
	printf("-original-\nmemmove может оказаться очень полезной функцией..............\n%s\n", str);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memchr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str	=	ft_addstr( "***3ве3днь)е Vойны***");
	ft_strdel(&str2);
	str2	= 	ft_strnew(100);
	str2	=	(char*) ft_memchr(str, ')', ft_strlen(str));
	if (str2 != NULL)
		printf("Символ ')' был найден, его позиция: %ld\n", (str2 - str + 1));
	else
		printf("Символ ')' не был найден.\n");

	ft_strdel(&str);
	str	=	ft_addstr( "***3ве3днь)е Vойны***");
	str2	=	(char*) ft_memchr(str, '-', ft_strlen(str));
	if (str2 != NULL)
		printf("Символ '-' был найден, его позиция: %ld\n", (str2 - str + 1));
	else
		printf("Символ '-' не был найден.\n");
	printf("\n-original-\n");
	ft_strdel(&str);
	str	=	ft_addstr( "***3ве3днь)е Vойны***");
	str2	=	(char*) memchr(str, ')', ft_strlen(str));
	if (str2 != NULL)
		printf("Символ ')' был найден, его позиция: %ld\n", (str2 - str + 1));
	else
		printf("Символ ')' не был найден.\n");

	ft_strdel(&str);
	str	=	ft_addstr( "***3ве3днь)е Vойны***");
	str2	=	(char*) memchr(str, '-', ft_strlen(str));
	if (str2 != NULL)
		printf("Символ '-' был найден, его позиция: %ld\n", (str2 - str + 1));
	else
		printf("Символ '-' не был найден.\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memcmp");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("test");
	ft_strdel(&str2);
	str2	=	ft_addstr("test");
	int		n = ft_memcmp( str, str2, 5 );
	printf("%d\n", n);
	if (n > 0 )
		printf("%s > %s\n", str, str2);
	else
		if (n < 0)
			printf("%s < %s\n", str, str2);
		else
			printf("%s == %s\n", str, str2);

	printf("\n-original-\n");
	n = memcmp( str, str2, 5 );
	printf("%d\n", n);
	if (n > 0 )
		printf("%s > %s\n", str, str2);
	else
		if (n < 0)
			printf("%s < %s\n", str, str2);
		else
			printf("%s == %s\n", str, str2);

	printf("\n-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("test");
	ft_strdel(&str2);
	str2	=	ft_addstr("te");
	n = ft_memcmp( str, str2, 5 );
	printf("%d\n", n);
	if (n > 0 )
		printf("%s > %s\n", str, str2);
	else
		if (n < 0)
			printf("%s < %s\n", str, str2);
		else
			printf("%s == %s\n", str, str2);

	printf("\n-original-\n");
	n = memcmp( str, str2, 5 );
	printf("%d\n", n);
	if (n > 0 )
		printf("%s > %s\n", str, str2);
	else
		if (n < 0)
			printf("%s < %s\n", str, str2);
		else
			printf("%s == %s\n", str, str2);

	printf("\n-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("te");
	ft_strdel(&str2);
	str2	=	ft_addstr("test");
	n = ft_memcmp( str, str2, 5 );
	printf("%d\n", n);
	if (n > 0 )
		printf("%s > %s\n", str, str2);
	else
		if (n < 0)
			printf("%s < %s\n", str, str2);
		else
			printf("%s == %s\n", str, str2);

	printf("\n-original-\n");
	n = memcmp( str, str2, 5 );
	printf("%d\n", n);
	if (n > 0 )
		printf("%s > %s\n", str, str2);
	else
		if (n < 0)
			printf("%s < %s\n", str, str2);
		else
			printf("%s == %s\n", str, str2);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strdup");
	ft_putstr("\n\n\\\\------------------------------//\n\n");
	
	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("MoSkoU");
	ft_strdel(&str2);
	str2	=	ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", str2 != str, str2, str);
	ft_strdel(&str);
	str		=	ft_addstr("");
	ft_strdel(&str2);
	str2	=	ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", str2 != str, str2, str);
	ft_strdel(&str);
	str		=	ft_addstr("KO OK OK OK OK!");
	ft_strdel(&str2);
	str2	=	ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", str2 != str, str2, str);

	printf("\n-original-\n");
	ft_strdel(&str);
	str		=	ft_addstr("MoSkoU");
	ft_strdel(&str2);
	str2	=	strdup(str);
	printf("%d, '%s' vs '%s'\n", str2 != str, str2, str);
	ft_strdel(&str);
	str		=	ft_addstr("");
	ft_strdel(&str2);
	str2	=	strdup(str);
	printf("%d, '%s' vs '%s'\n", str2 != str, str2, str);
	ft_strdel(&str);
	str		=	ft_addstr("KO OK OK OK OK!");
	ft_strdel(&str2);
	str2	=	strdup(str);
	printf("%d, '%s' vs '%s'\n", str2 != str, str2, str);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strcpy");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_strnew(100);
	printf("'%s'\n", ft_strcpy(str, " in Russia"));
	printf("'%s'\n", ft_strcpy(str, ""));
	printf("'%s'\n", ft_strcpy(str, "nasha Russi0"));

	printf("\n-original-\n");
	printf("'%s'\n", strcpy(str, " in Russia"));
	printf("'%s'\n", strcpy(str, ""));
	printf("'%s'\n", strcpy(str, "nasha Russi0"));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strncpy");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_strnew(100);
	printf("%s\n", ft_strncpy(str, "pest", 5));
	printf("%s\n", ft_strncpy(str, "scholle 21", 4));
	printf("%s\n", ft_strncpy(str, "1", 1));

	printf("\n-original-\n");
	ft_strdel(&str);
	str		=	ft_strnew(100);
	printf("%s\n", strncpy(str, "pest", 5));
	printf("%s\n", strncpy(str, "scholle 21", 4));
	printf("%s\n", strncpy(str, "1", 1));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strcat");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_strnew(100);
	printf("%s\n", ft_strcat(str, "keks"));
	printf("%s\n", ft_strcat(str, ""));
	printf("%s\n", ft_strcat(str, " scholle 21"));

	printf("\n-original-\n");
	ft_strdel(&str);
	str		=	ft_strnew(100);
	printf("%s\n", strcat(str, "keks"));
	printf("%s\n", strcat(str, ""));
	printf("%s\n", strcat(str, " scholle 21"));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strncat");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("\0testtesttesttesttest");
	printf("%s\n", ft_strncat(str, " fuckUp ", 16));
	printf("%s\n", ft_strncat(str, "", 16));
	printf("%s\n", ft_strncat(str, " Ko Ko Ko ", 0));
	printf("%s\n", ft_strncat(str, "topi", 3));

	printf("\n-original-\n");
	ft_strdel(&str);
	str		=	ft_addstr("\0testtesttesttesttest");
	printf("%s\n", strncat(str, " fuckUp ", 16));
	printf("%s\n", strncat(str, "", 16));
	printf("%s\n", strncat(str, " Ko Ko Ko ", 0));
	printf("%s\n", strncat(str, "topi", 3));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strlcat");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("\0testtesttesttesttest");
	printf("%ld-", ft_strlcat(str, " fuckUp ", 16));
	printf("%s\n", str);
	printf("%ld-", ft_strlcat(str, "", 16));
	printf("%s\n", str);
	printf("%ld-", ft_strlcat(str, " Ko Ko Ko ", 0));
	printf("%s\n", str);
	printf("%ld-", ft_strlcat(str, "topi", 3));
	printf("%s\n", str);

	printf("\n-original-\n");
	ft_strdel(&str);
	str		=	ft_addstr("\0testtesttesttesttest");
	printf("%ld-", strlcat(str, " fuckUp ", 16));
	printf("%s\n", str);
	printf("%ld-", strlcat(str, "", 16));
	printf("%s\n", str);
	printf("%ld-", strlcat(str, " Ko Ko Ko ", 0));
	printf("%s\n", str);
	printf("%ld-", strlcat(str, "topi", 3));
	printf("%s\n", str);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strchr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("testrtestrtest\0testtest");
	ft_strdel(&str2);
	str2 = ft_strchr(str, '\0');
	printf("%ld\n", str2 - str + 1);
	str2 = ft_strchr(str, 'r');
	printf("%ld\n", str2 - str + 1);
	str2 = ft_strchr(str, 'b');
	printf("%ld\n", str2 - str + 1);

	printf("\n-original-\n");
	str2 = strchr(str, '\0');
	printf("%ld\n", str2 - str + 1);
	str2 = strchr(str, 'r');
	printf("%ld\n", str2 - str + 1);
	str2 = strchr(str, 'b');
	printf("%ld\n", str2 - str + 1);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strrchr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	str2	=	ft_strrchr(str, '\0');
	printf("%ld\n", str2 - str + 1);
	str2	=	ft_strrchr(str, 'r');
	printf("%ld\n", str2 - str + 1);
	str2	=	ft_strrchr(str, 'b');
	printf("%ld\n", str2 - str + 1);

	printf("\n-original-\n");
	str2	=	strrchr(str, '\0');
	printf("%ld\n", str2 - str + 1);
	str2	=	strrchr(str, 'r');
	printf("%ld\n", str2 - str + 1);
	str2	=	strrchr(str, 'b');
	printf("%ld\n", str2 - str + 1);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strstr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%s\n", ft_strstr("asdf qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
	printf("%p\n", ft_strstr("asdf qwerty", "qwerty1"));
	printf("%p\n", ft_strstr("", "wer"));
	printf("%p\n", ft_strstr("asdf qwerty", "zxcv"));
	printf("%s\n", ft_strstr("asdf qwerty", ""));
	printf("%s\n", ft_strstr("asdf qwerty", "\0"));

	printf("\n-original-\n");
	printf("%s\n", strstr("asdf qwerty", "wer"));
	printf("%s\n", strstr("asdf qwerty qwerty", "wer"));
	printf("%p\n", strstr("asdf qwerty", "qwerty1"));
	printf("%p\n", strstr("", "wer"));
	printf("%p\n", strstr("asdf qwerty", "zxcv"));
	printf("%s\n", strstr("asdf qwerty", ""));
	printf("%s\n", strstr("asdf qwerty", "\0"));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strnstr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%s\n", ft_strnstr("asdf qwerty", "as", 20));
	printf("%s\n", ft_strnstr("test", "", 20));
	printf("%s\n", ft_strnstr("test", "\0", 20));
	printf("%p\n", ft_strnstr("test", "b", 20));
	printf("%p\n", ft_strnstr("test", "e", 1));
	printf("%s\n", ft_strnstr("test", "e", 2));

	printf("\n-original-\n");
	printf("%s\n", strnstr("asdf qwerty", "as", 20));
	printf("%s\n", strnstr("test", "", 20));
	printf("%s\n", strnstr("test", "\0", 20));
	printf("%p\n", strnstr("test", "b", 20));
	printf("%p\n", strnstr("test", "e", 1));
	printf("%s\n", strnstr("test", "e", 2));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strncmp");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%d\n", ft_strncmp("test", "test", 20));
	printf("%d\n", ft_strncmp("test", "", 20));
	printf("%d\n", ft_strncmp("test", "\0", 20));
	printf("%d\n", ft_strncmp("test", "tesb", 3));
	printf("%d\n", ft_strncmp("test", "e", 1));
	printf("%d\n", ft_strncmp("test", "e", 2));

	printf("\n-original-\n");
	printf("%d\n", strncmp("test", "test", 20));
	printf("%d\n", strncmp("test", "", 20));
	printf("%d\n", strncmp("test", "\0", 20));
	printf("%d\n", strncmp("test", "tesb", 3));
	printf("%d\n", strncmp("test", "e", 1));
	printf("%d\n", strncmp("test", "e", 2));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_atoi");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%d\n", ft_atoi("test25"));
	printf("%d\n", ft_atoi("\t 25"));
	printf("%d\n", ft_atoi("\t 2 5"));
	printf("%d\n", ft_atoi(" +2 5"));
	printf("%d\n", ft_atoi(" -2 5"));
	printf("%d\n", ft_atoi(" -2 5"));
	printf("%d\n", ft_atoi("\n -2147483648 8"));
	printf("%d\n", ft_atoi("\n 2147483647 8"));

	printf("\n-original-\n");
	printf("%d\n", atoi("test25"));
	printf("%d\n", atoi("\t 25"));
	printf("%d\n", atoi("\t 2 5"));
	printf("%d\n", atoi(" +2 5"));
	printf("%d\n", atoi(" -2 5"));
	printf("%d\n", atoi(" -2 5"));
	printf("%d\n", atoi("\n -2147483648 8"));
	printf("%d\n", atoi("\n 2147483647 8"));

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_isalpha");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (ft_isalpha(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	printf("\n-original-\n");
	n = 0;
	for (n = -1; n < 200; n++)
		if (isalpha(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_isdigit");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (ft_isdigit(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	printf("\n-original-\n");
	n = 0;
	for (n = -1; n < 200; n++)
		if (isdigit(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_isalnum");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (ft_isalnum(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	printf("\n-original-\n");
	n = 0;
	for (n = -1; n < 200; n++)
		if (isalnum(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_isascii");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (ft_isascii(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	printf("\n-original-\n");
	n = 0;
	for (n = -1; n < 200; n++)
		if (isascii(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_isprint");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (ft_isprint(n))
			printf("%c ", n);
		else
			printf("%d ", n);

	printf("\n-original-\n");
	for (n = -1; n < 200; n++)
		if (isprint(n))
			printf("%c ", n);
		else
			printf("%d ", n);
	printf("\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_toupper");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (isprint(n))
			printf("%c ", ft_toupper(n));
		else
			printf("%d ", n);
	printf("\n");

	printf("\n-original-\n");
	for (n = -1; n < 200; n++)
		if (isprint(n))
			printf("%c ", toupper(n));
		else
			printf("%d ", n);
	printf("\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_tolower");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	for (n = -1; n < 200; n++)
		if (isprint(n))
			printf("%c ", ft_tolower(n));
		else
			printf("%d ", n);
	printf("\n");

	printf("\n-original-\n");
	for (n = -1; n < 200; n++)
		if (isprint(n))
			printf("%c ", tolower(n));
		else
			printf("%d ", n);
	printf("\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memalloc");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	void	*	strv;

	strv	=	NULL;
	printf("%p=", strv);
	strv = ft_memalloc(4);
	printf("%p\n", strv);

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_memdel");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%p=", strv);
	ft_memdel(&strv);
	printf("%p\n", strv);
	printf("\n-original-\n0x55ad3af7f840=(nil)\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strnew");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	printf("%p=", str);
	str	= ft_strnew(5);
	ft_strcpy(str, "test");
	printf("%s\n", str);
	printf("\n-original-\n(nil)=test\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strdel");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%s=", str);
	ft_strdel(&str);
	printf("%p\n", str);
	printf("\n-original-\ntest=(nil)\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strclr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_strdel(&str);
	str	=	ft_addstr("test");
	ft_strcpy(str, "test");
	printf("%s=", str);
	ft_strclr(str);
	n = -1;
	while (++n < 5)
		printf("'%c'", str[n]);
	printf("\n-original-\ntest=''''''''''\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_striter");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_striter("test", ft_putstr);
	ft_putstr("\n");
	printf("\n-original-\ntesteststt\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_striteri");
	ft_putstr("\n\n\\\\------------------------------//\n\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	printf("-velesepede-\n");
	ft_striteri("test", ft_test_putstr_char);
	printf("\n-original-\n0-t\n1-e\n2-s\n3-t\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##t_strmap");
	ft_putstr("\n\n\\\\------------------------------//\n\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("test");
	printf("%s=>%s\n", str,ft_strmap(str, ft_test__char));
	printf("\n-original-\ntest=>uftu\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strmapi");
	ft_putstr("\n\n\\\\------------------------------//\n\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	printf("-velesepede-\n");
	ft_strdel(&str);
	str		=	ft_addstr("test");
	printf("%s=>%s\n", str, ft_strmapi(str, ft_test__chari));
	printf("\n-original-\ntest=>tfuw\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strequ");
	ft_putstr("\n\n\\\\------------------------------//\n\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	printf("-velesepede-\n");
	printf("%d  |  ", ft_strequ("test", "test"));
	printf("%d  |  ", ft_strequ("tet", "test"));
	printf("%d  |  ", ft_strequ("", "test"));
	printf("%d  |  ", ft_strequ("", ""));
	printf("%d  |  ", ft_strequ("", ""));
	printf("%d  |  \n", ft_strequ("1", "1"));
	printf("\n-original-\n1  |  0  |  0  |  1  |  1  |  1  |\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strnequ");
	ft_putstr("\n\n\\\\------------------------------//\n\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	printf("-velesepede-\n");
	printf("%d  |  ", ft_strnequ("test", "test", 20));
	printf("%d  |  ", ft_strnequ("tet", "test", 20));
	printf("%d  |  ", ft_strnequ("test", "", 20));
	printf("%d  |  ", ft_strnequ("test", "tesb", 3));
	printf("%d  |  ", ft_strnequ("test", "e", 1));
	printf("%d  |  ", ft_strnequ("test", "e", 2));
	printf("%d  |  \n", ft_strnequ("", "", 1));
	printf("\n-original-\n1  |  0  |  0  |  1  |  0  |  0  |  1  |\n");


	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strsub");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%s\n", ft_strsub("test kst", 5, 4));
	printf("%s\n", ft_strsub("test kst", 4, 4));
	printf("\n-original-\n");
	printf("%s\n", 0x0);
	printf("%s\n", " kst");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strjoin");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%s\n", ft_strjoin(ft_strjoin(ft_strjoin("Москва ", "не ") , "сразу "), "строилась!"));
	printf("\n-original-\nМосква не сразу строилась!\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strtrim");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	printf("%s = \\n\n", ft_strtrim("\n\n\ntest1\n\n\n"));
	printf("%s = \\t\n", ft_strtrim("\t\t\ttest2\t\t\t"));
	printf("%s = ' '\n", ft_strtrim("   test3   "));
	printf("%s = ''\n", ft_strtrim(""));
	printf("\n-original-\ntest1 = \\n\ntest2 = \\t\ntest3 = ' '\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_strsplit");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	char	**str3;
	str3	=	NULL;
	str3 = ft_strsplit("*hello*fellow***students*", '*');
	n		=	-1;
	while (str3[++n])
		printf("%s\n", str3[n]);
	printf("\n-original-\nhello\nfellow\nstudents\n");
	n		=	-1;
	while (str3[++n])
		ft_strdel(&str3[n]);
	ft_strdel(&str3[n]);
	str3	=	NULL;

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_itoa");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");

	ft_strdel(&str);
	str	= ft_itoa(-2147483648);
	printf("%s\n", str);
	ft_strdel(&str);
	str	= ft_itoa(-541);
	printf("%s\n", str);
	ft_strdel(&str);
	str	= ft_itoa(0);
	printf("%s\n", str);
	ft_strdel(&str);
	str	= ft_itoa(541);
	printf("%s\n", str);
	printf("\n-original-\n-247483648\n-541\n0\n541\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_putchar");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putchar('t');
	ft_putchar('e');
	ft_putchar('s');
	ft_putchar('t');
	ft_putchar('\n');
	printf("\n-original-\ntest\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_putstr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putstr("test");
	printf("\n-original-\ntest\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_putendl");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putendl("test");
	printf("---\n-original-\ntest\n---\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	// //################################################################
	ft_putstr("\n\n##ft_putnbr");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(15000);
	ft_putchar('\n');
	printf("---\n-original-\n-2147483648\n2147483647\n-1\n15000\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_putchar_fd");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");

	ft_strdel(&str);
	str	=	ft_addstr("tset\n");
	n	= 6;
	while(--n >= 0)
		ft_putchar_fd(str[n],2);
	n	= 6;
	while(--n >= 0)
		ft_putchar_fd(str[n],1);
	ft_putstr("\n-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/\n");
	char		buffer;
	char	*	file	=	"../srcs/ft_putchar_fd.c";

	n = open(file, O_RDWR);
	if (file[0] && n > 0)
		while (read(n, &buffer, 1))
			write(1, &buffer, 1);
	ft_putstr("\n-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-\n");
	printf("---\n-original-\n\ntest\ntest\n-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/\n#include\"../includes/libft.h\"\n\nvoid    ft_putchar_fd(char c, int fd)\n{\n        write(fd, &c, 1);\n}\n-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_putstr_fd");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putstr_fd(str, 2);
	ft_putstr_fd(str, 1);
	ft_putstr("\n-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/\n");
	file	=	"../srcs/ft_putstr_fd.c";

	n = open(file, O_RDWR);
	if (file[0] && n > 0)
		while (read(n, &buffer, 1))
			write(1, &buffer, 1);
	ft_putstr("\n-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-\n");
	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	//################################################################
	ft_putstr("\n\n##ft_putendl_fd");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putendl_fd(str, 2);
	ft_putendl_fd(str, 1);
	ft_putstr("\n-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/\n");
	file	=	"../srcs/ft_putendl_fd.c";

	n = open(file, O_RDWR);
	if (file[0] && n > 0)
		while (read(n, &buffer, 1))
			write(1, &buffer, 1);
	ft_putstr("\n-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-\n");
	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_putnbr_fd");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	ft_putnbr_fd(-2147483648, 2);
	ft_putchar('\n');
	ft_putnbr_fd(2147483647, 1);
	ft_putchar('\n');
	ft_putstr("\n-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/\n");
	file	=	"../srcs/ft_putnbr_fd.c";

	n = open(file, O_RDWR);
	if (file[0] && n > 0)
		while (read(n, &buffer, 1))
			write(1, &buffer, 1);
	ft_putstr("\n-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-\n");
	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################

	//#######>BBBBBBBOOOOOOONNNNNNUUUUUUSSSSSSSSS<########
	//#######>BBBBBBBOOOOOOONNNNNNUUUUUUSSSSSSSSS<########
	//#######>BBBBBBBOOOOOOONNNNNNUUUUUUSSSSSSSSS<########

	//################################################################

	//################################################################

	printf("\n####################################################\n");
	printf("\n#######>BBBBBBBOOOOOOONNNNNNUUUUUUSSSSSSSSS<########\n");
	printf("\n####################################################\n");

	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_lstnew");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	t_list	*list;

	list	=	ft_lstnew("test", 5);
	printf("%s=%ld\n", (char *)list->content, list->content_size);
	ft_lstdelone(&list, ft_memlistdel);
	list	=	ft_lstnew(NULL, 1);
	printf("%p=%ld\n", list->content, list->content_size);
	ft_lstdelone(&list, ft_memlistdel);
	printf("\n-original-\ntest=5\n(nil)=0\n");

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_lstdelone");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	list	=	ft_lstnew("test", 5);
	printf("%s=%ld \\ ", (char *)list->content, list->content_size);
	ft_lstdelone(&list, ft_memlistdel);
	printf("%p=%ld\n", (char *)list->content, list->content_size);
	list	=	ft_lstnew(NULL, 1);
	printf("%p=%ld \\ ", list->content, list->content_size);
	ft_lstdelone(&list, ft_memlistdel);
	printf("%p=%ld\n", list->content, list->content_size);
	printf("\n-original-\ntest=5 \\ 0x559ab89ba9b0=5\n(nil)=0 \\ 0x559ab89ba9b0=0\n");
	

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_lstdel ##ft_lstadd ##ft_lstiter");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");
	t_list	*	lists;

	lists	=	NULL;
	ft_lstadd(&lists, ft_lstnew("test5", 6));
	ft_lstadd(&lists, ft_lstnew("test4", 6));
	ft_lstadd(&lists, ft_lstnew("test3", 6));
	ft_lstadd(&lists, ft_lstnew("test2", 6));
	ft_lstadd(&lists, ft_lstnew("test1", 6));
	ft_lstadd(&lists, ft_lstnew("test0", 6));
	ft_lstiter(lists, ft_putlist);
	ft_lstdel(&lists, ft_memlistdel);
	ft_lstiter(lists, ft_putlist);
	
	printf("\n-original-\ntest0\ntest1\ntest2\ntest3\ntest4\ntest5\n");
	

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	ft_putstr("\n\n##ft_lstdel ##ft_lstadd ##ft_lstiter");
	ft_putstr("\n\n\\\\------------------------------//\n\n");

	printf("-velesepede-\n");

	ft_lstadd(&lists, ft_lstnew("test5", 6));
	ft_lstadd(&lists, ft_lstnew("test4", 6));
	ft_lstadd(&lists, ft_lstnew("test3", 6));
	ft_lstadd(&lists, ft_lstnew("test2", 6));
	ft_lstadd(&lists, ft_lstnew("test1", 6));
	ft_lstadd(&lists, ft_lstnew("test0", 6));
	ft_lstiter(lists, ft_putlist);
	ft_putstr("\n");
	ft_lstiter(ft_lstmap(lists, ft_lstcpy), ft_putlist);

	
	
	printf("\n-original-\ntest0\ntest1\ntest2\ntest3\ntest4\ntest5\n\ntest0\ntest1\ntest2\ntest3\ntest4\ntest5\n");
	

	ft_putstr("\n//------------------------------\\\\\n\n");
	//################################################################

	//################################################################
	return 0;
}
