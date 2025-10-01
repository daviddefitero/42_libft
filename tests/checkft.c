/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:10:49 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/01 17:53:57 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

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

void	ft_check_char(t_test *test, char expted, char rslt)
{
	if (expted == rslt)
	{
		test->pass++;
		printf("** ✅ TEST Nº%d: %c == %c\n\n", test->t_n, expted, rslt);
	}
	else
	{
		test->fail++;
		printf("** ❌ TEST Nº%d: %c != %c\n\n", test->t_n, expted, rslt);
	}
}

void	ft_check_str(t_test *test, char *expted, char *rslt, size_t len)
{
	if (expted == rslt || strncmp(expted, rslt, len) == 0)
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
