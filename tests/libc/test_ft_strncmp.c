/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:31 by dde-fite          #+#    #+#             */
/*   Updated: 2025/09/30 16:33:56 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static void	ft_get_values(char *r_str[2], int *expted, int *rslt)
{
	size_t	len_r_str[2];
	size_t	max_len;
	int		i;

	i = 0;
	while (i < 2)
	{
		r_str[i] = ft_randstr(20);
		len_r_str[i] = strlen(r_str[i]);
		i++;
	}
	max_len = ft_max_value(len_r_str[0], len_r_str[1]);
	*expted = strncmp(r_str[0], r_str[1], max_len);
	*rslt = ft_strncmp(r_str[0], r_str[1], max_len);
}

int	test_ft_strncmp(void)
{
	t_test	test;
	char	*r_str[2];
	int		expted;
	int		rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_strncmp for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		ft_get_values(r_str, &expted, &rslt);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** String 1:\n** BEGIN STRING\n%s\n** END STRING\n\n",
			r_str[0]);
		printf("** String 2:\n** BEGIN STRING\n%s\n** END STRING\n\n",
			r_str[1]);
		printf("** Expected: %d\n", expted);
		printf("** ft_strlcat: %d\n", rslt);
		ft_check_int(&test, expted, rslt);
		printf("* -----------------------\n");
		test.t_n++;
		free(r_str[0]);
		free(r_str[1]);
	}
	printf("* ft_strncmp: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
