/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_tok.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:26:20 by pamone            #+#    #+#             */
/*   Updated: 2024/03/10 17:26:23 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_TOK_H
# define ENV_TOK_H
# include "env.h"

int		count(t_token *tok, bool is_div);
void	get_idx(t_token *tok, t_env *env);
#endif