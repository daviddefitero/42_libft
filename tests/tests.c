/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:31:46 by david             #+#    #+#             */
/*   Updated: 2025/10/02 16:31:14 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "tests.h"

int	ft_get_nbr_test(void)
{
	int	nbr;

	printf("How many tests do you want per function?: ");
	scanf("%d", &nbr);
	return (nbr);
}

void	ft_init_test(t_test *test)
{
	test->n = ft_get_nbr_test();
	test->t_n = 1;
	test->pass = 0;
	test->fail = 0;
}

int	ft_max_value(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_min_value(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

static void	ft_print_header(void)
{
	printf("\n***********************************************\n");
	printf("***************** LIBFT TEST ******************\n");
	printf("***********************************************\n\n");
	printf("* Select a function:\n");
	printf("\n--------------- LIBC FUNCTIONS ----------------\n");
	printf("** 1. isalpha\n** 2. isdigit\n** 3. isalnum\n** 4. isascii\n");
	printf("** 5. isprint\n** 6. strlen\n// 7. memset\n// 8. bzeros\n");
	printf("// 9. memcpy\n// 10. memmove\n** 11. strlcpy\n** 12. strlcat\n");
	printf("** 13. toupper\n** 14. tolower\n** 15. strchr\n** 16. strrchr\n");
	printf("** 17. strncmp\n// 18. memchr\n// 19. memcmp\n// 20. strnstr\n");
	printf("// 21. atoi\n// 22. calloc\n// 23. strdup\n** 0. Exit\n");
	printf("\n***** ----> ");
}

int	main(void)
{
	int	usr_choice;

	srand(time(NULL));
	usr_choice = 1;
	while (usr_choice != 0)
	{
		ft_print_header();
		scanf("%d", &usr_choice);
		if (usr_choice == 1)
			test_ft_isalpha();
		else if (usr_choice == 2)
			test_ft_isdigit();
		else if (usr_choice == 3)
			test_ft_isalnum();
		else if (usr_choice == 4)
			test_ft_isascii();
		else if (usr_choice == 5)
			test_ft_isprint();
		else if (usr_choice == 6)
			test_ft_strlen();
		else if (usr_choice == 11)
			test_ft_strlcpy();
		else if (usr_choice == 12)
			test_ft_strlcat();
		else if (usr_choice == 13)
			test_ft_toupper();
		else if (usr_choice == 14)
			test_ft_tolower();
		else if (usr_choice == 15)
			test_ft_strchr();
		else if (usr_choice == 16)
			test_ft_strrchr();
		else if (usr_choice == 17)
			test_ft_strncmp();
	}
}
