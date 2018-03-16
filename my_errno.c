/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_errno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 13:40:43 by fbenneto          #+#    #+#             */
/*   Updated: 2018/03/10 13:42:18 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_errno.h"

int			ft_iscritical(int errnum)
{
	if (errnum == ERR_MALLOC || errnum == ERR_FORK)
		return (1);
	return (0);
}

char		*ft_strsig(int sig)
{
	if (sig == SIGABRT || sig == SIGIO)
		return ("abort");
	if (sig == SIGBUS)
		return ("bus error");
	if (sig == SIGSEGV)
		return ("segmentation fault");
	ft_printf("error code %d\n", sig);
	return ("unknown code");
}
