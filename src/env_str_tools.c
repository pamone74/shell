/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_str_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:23:46 by pamone            #+#    #+#             */
/*   Updated: 2024/03/10 17:27:50 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env_str.h"

int	count_str(char *str)
{
	int	i;
	int	ct;

	ct = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '$' && str[i + 1] != '\n')
		{
			if (str[i + 1] != ' ')
			{
				if (i != 0)
					if (str[i - 1] == '\\' || str[i + 1] == '\0')
						continue ;
				if (i >= 2)
					if (str[i - 2] != '\\' && str[i - 1] == '$')
						continue ;
				if (i == 1)
					if (str[i - 1] == '$')
						continue ;
				ct++;
			}
		}
	}
	return (ct);
}

void	get_idx_str(char *str, t_env *env)
{
	int	i;
	int	ct;

	ct = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '$' && str[i + 1] != '\n' && str[i + 1] != ' ')
		{
			if (i != 0)
				if (str[i - 1] == '\\' || str[i + 1] == '\0')
					continue ;
			if (i >= 2)
				if (str[i - 2] != '\\' && str[i - 1] == '$')
					continue ;
			if (i == 1)
				if (str[i - 1] == '$')
					continue ;
			env->idx[ct++] = i;
		}
	}
}
