/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 00:07:42 by david             #+#    #+#             */
/*   Updated: 2025/09/29 15:49:51 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

typedef struct s_test
{
	int	n;
	int	t_n;
	int	pass;
	int	fail;
}	t_test;

void	ft_init_test(t_test *test);
int		ft_get_nbr_test(void);
void	ft_check_str(t_test *test, char *expted, char *rslt, t_size len);
void	ft_check_int(t_test *test, int expted, int rslt);
void	ft_check_boolean(t_test *test, int expted, int rslt);

int		ft_randnbr(int max);
char	*ft_randstr(int max);

int		test_ft_strlen(void);
int		test_ft_strlcpy(void);
int		test_ft_strlcat(void);
int		test_ft_isalpha(void);
int		test_ft_strncmp(void);