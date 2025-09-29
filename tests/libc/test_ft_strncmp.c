/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:31 by dde-fite          #+#    #+#             */
/*   Updated: 2025/09/29 15:57:12 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static int	ft_max_value(int a, int b) {
	if (a > b)
	{
		
	}
	
}

static void	ft_get_values(char *r_str[2], char **expted, char **rslt)
{
	t_size	len_r_str[2];
	t_size	total_len;
	int		i;

	i = 0;
	while (i < 2)
	{
		r_str[i] = ft_randstr(20);
		len_r_str[i] = strlen(r_str[i]);
		i++;
	}
	max_len = 
	*expted = malloc(total_len);
	*rslt = malloc(total_len);
	expted = strncmp(r_str[0], r_str[1], strlen())
}

int	test_ft_strlcmp(void)
{
	t_test	test;
	char	*r_str[2];
	char	*expted;
	char	*rslt;

	ft_init_test(&test);
	printf("\n------ * Testing ft_strlcat for %d times * ------\n", test.n);
	while (test.n >= test.t_n)
	{
		ft_get_values(r_str, &expted, &rslt);
		printf("** TEST Nº%d -------------\n", test.t_n);
		printf("** String 1:\n** BEGIN STRING\n%s\n** END STRING\n\n",
			r_str[0]);
		printf("** String 2:\n** BEGIN STRING\n%s\n** END STRING\n\n",
			r_str[1]);
		printf("** Expected:\n** BEGIN STRING\n%s\n** END STRING\n\n", expted);
		printf("** ft_strlcat:\n** BEGIN STRING\n%s\n** END STRING\n\n", rslt);
		ft_check_str(&test, expted, rslt, strlen(expted));
		printf("* -----------------------\n");
		test.t_n++;
		free(r_str[0]);
		free(r_str[1]);
		free(expted);
		free(rslt);
	}
	printf("* ft_strlcat: ✅ %d ❌ %d\n", test.pass, test.fail);
	return (test.fail);
}
