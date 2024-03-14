/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychen2 <ychen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:53:20 by ychen2            #+#    #+#             */
/*   Updated: 2023/12/31 14:01:09 by ychen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	g_sig;

void	sig_block(void)
{
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
}

void	sig_init(void)
{
	signal(SIGINT, read_again);
	signal(SIGQUIT, SIG_IGN);
}

void	sig_default(t_minishell *m)
{
	tcsetattr(STDIN_FILENO, TCSANOW, &m->term_orig);
	signal(SIGINT, SIG_DFL);
	signal(SIGQUIT, SIG_DFL);
}
