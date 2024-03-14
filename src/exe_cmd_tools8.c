/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_cmd_tools8.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:32:41 by pamone            #+#    #+#             */
/*   Updated: 2024/03/10 17:32:45 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exe.h"

void	b_cd_home(t_minishell *m, int idx)
{
	if (chdir(getenv("HOME")) != 0)
		cd_error(m, idx);
	mod_env_cd(m, getenv("PWD"));
}
