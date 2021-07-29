/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_includes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:09:15 by mapontil          #+#    #+#             */
/*   Updated: 2021/07/28 18:29:20 by mapontil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INCLUDES_H
# define FT_INCLUDES_H
# include <unistd.h>
void		ft_putnbr(long int nb);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
int			ft_check_dm(char o, int nb);
int			ft_check_s(char *op);
long int	ft_doop(int nb1, char op, int nb2);
#endif
