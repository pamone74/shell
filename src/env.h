/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:23:17 by pamone            #+#    #+#             */
/*   Updated: 2024/03/10 17:23:19 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENV_H
# define ENV_H
# include "minishell.h"

typedef struct s_env
{
	char	*cont;
	int		*idx;
	int		num;
}				t_env;

char	*get_name(t_minishell *m, t_env *env, char *str, int idx);
bool	copy_env(t_minishell *m, t_env *env, char *env_cont);
char	*get_cont(t_minishell *m, char *name);
#endif