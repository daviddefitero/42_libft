/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:30:59 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/01 17:14:07 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../tests.h"

int	test_ft_tolower(void)
{
	t_test	test;
	char	r_char;
	char	expted;
	char	rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_tolower for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		r_char = ft_randnbr(255);
		expted = tolower(r_char);
		rslt = ft_tolower(r_char);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** Char: %c\n", r_char);
		printf("\n** Expected: %c\n", expted);
		printf("** ft_tolower: %c\n", rslt);
		ft_check_char(&test, expted, rslt);
		printf("* -----------------------\n");
		test.t_n++;
	}
	printf("* ft_tolower: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
