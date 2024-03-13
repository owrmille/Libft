// # include "libft/ft_printf.h"
# include "libft/libft.h"
# include <stdio.h>

// to compile and run:
// 1. make
// 2. cc -Wall -Wextra -Werror -o test test.c -L. -lftupd
// (where test.c can be any file with tests)

int test_c()
{
	char	*content = "My grade is %c|";
	char	value = 'D';

	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_s()
{
	char	*content = "Hello my name is %s|";
	char	*value = "Laura";
	// char *value = NULL;

	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_d()
{
	char	*content = "I'm %d years old|";
	// int		value = 23;
	int value = 429496729;
	
	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_x()
{
	char	*content = "Just a test for x: %x|";
	unsigned long		value = 24096;
	
	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_X()
{
	char	*content = "Just a test for X: %X|";
	unsigned long value = 24096;
	
	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_p()
{
	
	char	*content = "Just a test for p: %p|";
	int num = 42;
	int *value = &num;

	// int *value = NULL;
	
	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_u()
{
	char	*content = "I'm %u years old|";
	unsigned int	value = 4294967293;
	
	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_percent_sign()
{
	char	*content = "The rate was 50%%|";
	char		value = '%';
	
	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, value));
	printf("\nMy result:\n");
	return (ft_printf(content, value));
}

int test_all()
{
	char	*content = "Hello my name is %s %c and I'm %d years old|";
	char	character = 'D';
	char	*str = "Laura";
	int		digit = 23;

	printf("\nOriginal result:\n");
	printf("\nNumber of printed characters: %d\n", printf(content, str, character, digit));
	printf("\nMy result:\n");
	return (ft_printf(content, str, character, digit));
}

// int test_c_error()
// {
// 	char	*content = "My grade is %c|";
// 	char *value = "OOPS";

// 	printf("\nOriginal result:\n");
// 	printf("\nLNumber of printed characters: %d\n", printf(content, value));
// 	printf("\nMy result:\n");
// 	return (ft_printf(content, value));
// }

// int test_zero()
// {
// 	printf("\nOriginal result:\n");
// 	printf("\nNumber of printed characters: %d\n", printf(0));
// 	printf("\nMy result:\n");
// 	return (ft_printf(0));
// }

// int test_empty_string()
// {
// 	printf("\nOriginal result:\n");
// 	printf("\nNumber of printed characters: %d\n", printf(""));
// 	printf("\nMy result:\n");
// 	return (ft_printf(""));
// }

// int test_null()
// {
// 	printf("\nOriginal result:\n");
// 	printf("\nNumber of printed characters: %d\n", printf(NULL));
// 	printf("\nMy result:\n");
// 	return (ft_printf(NULL));
// }

int	test_hexadec_nbr()
{
	// unsigned long n = 255; // ff
	unsigned long n = 24096; // 5E20
	char *system = "0123456789abcdef";
	return (ft_hexadec_nbr(n, system));
}



int	main(void)
{
	/*
	for option:
	c: char
	d or i: decimal number
	s: string
	p: pointer address
	u: unsigned int decimal number
	x: hexidecimal number with base 0123456789abcdef
	X: hexidecimal number with base 0123456789ABCDEF
	%: percent sign (%)
	0: special cases (edge cases; below)
	*/
	char option = 'c';

	/*
	for special cases:
	'1': ft_printf(0)
	'2': ft_printf("")
	'3': ft_printf(NULL)
	'A': test all three cases
	'-': none
	*/
	// int special_case = '-';

	/*
	for hex_flg:
	1: if we want to test ft_hexadec_nbr.c
	0: otherwise
	*/
	int hex_flg = 0;


	if (hex_flg)
	{
		printf("Hex. number:\n");
		printf("\nNumber of printed characters: %d\n", test_hexadec_nbr());
	}

/*
	for special cases:
	'1': ft_printf(0)
	'2': ft_printf("")
	'3': ft_printf(NULL)
*/
	// if (special_case == '1')
	// {
	// 	printf("\n-----ft_printf(0)-----\n");
	// 	printf("\nNumber of printed characters: %d\n", test_zero());
	// }
	// else if (special_case == '2')
	// {
	// 	printf("\n-----ft_printf(\"\")-----\n");
	// 	printf("\nNumber of printed characters: %d\n", test_empty_string());
	// }
	// else if (special_case == '3')
	// {
	// 	printf("\n-----ft_printf(NULL)-----\n");
	// 	printf("\nNumber of printed characters: %d\n", test_null());
	// }
	// else if (special_case == 'A')
	// {
	// 	printf("\n-----ft_printf(0)-----\n");
	// 	printf("\nNumber of printed characters: %d\n", test_zero());

	// 	printf("\n-----ft_printf(\"\")-----\n");
	// 	printf("\nNumber of printed characters: %d\n", test_empty_string());

	// 	printf("\n-----ft_printf(NULL)-----\n");
	// 	printf("\nNumber of printed characters: %d\n", test_null());
	// }



	if (option == 'c')
		printf("\nNumber of printed characters: %d\n", test_c());
	else if ((option == 'd') || (option == 'i'))
		printf("\nNumber of printed characters: %d\n", test_d());
	else if (option == 's')
		printf("\nNumber of printed characters: %d\n", test_s());
	else if (option == 'x')
		printf("\nNumber of printed characters: %d\n", test_x());
	else if (option == 'X')
		printf("\nNumber of printed characters: %d\n", test_X());
	else if (option == 'p')
		printf("\nNumber of printed characters: %d\n", test_p());
	else if (option == 'u')
		printf("\nNumber of printed characters: %d\n", test_u());
	else if (option == 'A')
		printf("\nNumber of printed characters: %d\n", test_all());
	else if (option == '%')
		printf("\nNumber of printed characters: %d\n", test_percent_sign());

	return (0);
}
