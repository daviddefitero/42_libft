/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:31:46 by david             #+#    #+#             */
/*   Updated: 2025/09/29 15:46:04 by dde-fite         ###   ########.fr       */
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

void	ft_check_str(t_test *test, char *expted, char *rslt, t_size len)
{
	if (strncmp(expted, rslt, len) == 0)
	{
		test->pass++;
		printf("** ✅ TEST Nº%d: %s == %s\n\n", test->t_n, expted, rslt);
	}
	else
	{
		test->fail++;
		printf("** ❌ TEST Nº%d: %s != %s\n\n", test->t_n, expted, rslt);
	}
}

void	ft_check_int(t_test *test, int expted, int rslt)
{
	if (expted == rslt)
	{
		test->pass++;
		printf("** ✅ TEST Nº%d: %d == %d\n\n", test->t_n, expted, rslt);
	}
	else
	{
		test->fail++;
		printf("** ❌ TEST Nº%d: %d != %d\n\n", test->t_n, expted, rslt);
	}
}

void	ft_check_boolean(t_test *test, int expted, int rslt)
{
	if ((expted && rslt) || (!expted && !rslt))
	{
		test->pass++;
		printf("** ✅ TEST Nº%d: %d == %d\n\n", test->t_n, expted, rslt);
	}
	else
	{
		test->fail++;
		printf("** ❌ TEST Nº%d: %d != %d\n\n", test->t_n, expted, rslt);
	}
}

static void	ft_print_header(void)
{
	printf("\n***********************************************\n");
	printf("***************** LIBFT TEST ******************\n");
	printf("***********************************************\n\n");
	printf("* Select a function:\n");
	printf("\n--------------- LIBC FUNCTIONS ----------------\n");
	printf("** 1. ft_strlen\n** 2. ft_strlcpy\n** 3. ft_strlcat\n");
	printf("** 4. ft_isalpha\n** 0. Exit\n");
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
			test_ft_strlen();
		else if (usr_choice == 2)
			test_ft_strlcpy();
		else if (usr_choice == 3)
			test_ft_strlcat();
		else if (usr_choice == 4)
			test_ft_isalpha();
	}
}
