/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:29:38 by david             #+#    #+#             */
/*   Updated: 2025/10/02 16:29:56 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

size_t static	ft_get_len(char *a, char *b)
{
	if (a == NULL || b == NULL)
		return (0);
	return (ft_max_value(strlen(a), strlen(b)));
}

int	test_ft_strrchr(void)
{
	t_test	test;
	char	r_char;
	char	*r_str;
	char	*expted;
	char	*rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_strrchr for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		r_str = ft_randstr(40);
		r_char = ft_randchar();
		expted = strrchr(r_str, r_char);
		rslt = ft_strrchr(r_str, r_char);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** String:\n** BEGIN STRING\n%s\n** END STRING\n", r_str);
		printf("** Char to find: %c\n", r_char);
		printf("\n** Expected: %s\n", expted);
		printf("** ft_strrchr: %s\n", rslt);
		ft_check_str(&test, expted, rslt, ft_get_len(expted, rslt));
		printf("* -----------------------\n");
		test.t_n++;
		free(r_str);
	}
	printf("* ft_strrchr: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
