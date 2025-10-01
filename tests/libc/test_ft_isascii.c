/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:30:59 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/01 15:25:56 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../tests.h"

int	test_ft_isascii(void)
{
	t_test	test;
	char	r_char;
	int		expted;
	int		rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_isascii for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		r_char = ft_randnbr(255);
		expted = isascii(r_char);
		rslt = ft_isascii(r_char);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** Char: %c\n", r_char);
		printf("\n** Expected: %d\n", expted);
		printf("** ft_isascii: %d\n", rslt);
		ft_check_boolean(&test, expted, rslt);
		printf("* -----------------------\n");
		test.t_n++;
	}
	printf("* ft_isascii: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
