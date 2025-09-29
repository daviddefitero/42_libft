/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:51:29 by david             #+#    #+#             */
/*   Updated: 2025/09/29 15:49:09 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static void	ft_get_values(char **r_str, char **expted, char **rslt)
{
	t_size	len_r_str;

	*r_str = ft_randstr(20);
	len_r_str = strlen(*r_str);
	*expted = malloc(len_r_str + 1);
	*rslt = malloc(len_r_str + 1);
	strlcpy(*expted, *r_str, len_r_str + 1);
	ft_strlcpy(*rslt, *r_str, len_r_str + 1);
}

int	test_ft_strlcpy(void)
{
	t_test	test;
	char	*r_str;
	char	*expted;
	char	*rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_strcpy for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		ft_get_values(&r_str, &expted, &rslt);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** String:\n** BEGIN STRING\n%s\n** END STRING\n\n", r_str);
		printf("** Expected:\n** BEGIN STRING\n%s\n** END STRING\n\n", expted);
		printf("** ft_strlcpy:\n** BEGIN STRING\n%s\n** END STRING\n\n", rslt);
		ft_check_str(&test, expted, rslt, strlen(r_str));
		printf("* -----------------------\n");
		test.t_n++;
		free(r_str);
		free(expted);
		free(rslt);
	}
	printf("* ft_strlcpy: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
