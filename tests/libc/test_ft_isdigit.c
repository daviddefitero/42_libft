/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:30:59 by dde-fite          #+#    #+#             */
/*   Updated: 2025/09/30 16:33:30 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../tests.h"

int	test_ft_isdigit(void)
{
	t_test	test;
	char	r_char;
	int		expted;
	int		rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_isdigit for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		r_char = ft_randchar();
		expted = isdigit(r_char);
		rslt = ft_isdigit(r_char);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** Char: %c\n", r_char);
		printf("\n** Expected: %d\n", expted);
		printf("** ft_strlen: %d\n", rslt);
		ft_check_boolean(&test, expted, rslt);
		printf("* -----------------------\n");
		test.t_n++;
	}
	printf("* ft_isdigit: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
