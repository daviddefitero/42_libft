/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:29:38 by david             #+#    #+#             */
/*   Updated: 2025/09/22 23:25:59 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../tests.h"

int	test_ft_strlen(void)
{
	t_test	test;
	char	*r_str;
	t_size	expted;
	t_size	rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_strlen for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		r_str = ft_randstr(20);
		expted = strlen(r_str);
		rslt = ft_strlen(r_str);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** String:\n** BEGIN STRING\n%s\n** END STRING\n", r_str);
		printf("\n** Expected: %ld\n", expted);
		printf("** ft_strlen: %ld\n", rslt);
		ft_check_int(&test, expted, rslt);
		printf("* -----------------------\n");
		test.t_n++;
		free(r_str);
	}
	printf("* ft_strcpy: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
