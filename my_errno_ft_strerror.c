/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_errno_ft_strerror.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 13:41:38 by fbenneto          #+#    #+#             */
/*   Updated: 2018/03/12 14:26:44 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_errno.h"

static char	*ft_unknown_code(int errnum)
{
	static char	s[64];
	static char	*p;
	int			i;
	int			l;

	if (!p)
		p = " : code error unknown";
	l = ft_atoi_to_buff(errnum, s);
	i = 0;
	while (p[i])
	{
		s[l + i] = p[i];
		i++;
	}
	s[l + i] = 0;
	return (s);
}

char		*ft_strerror4(int errnum)
{
	return (ft_unknown_code(errnum));
}

char		*ft_strerror3(int errnum)
{
	if (errnum == ERR_READ)
		return ("read error");
	if (errnum == ERR_OPEN)
		return ("open error");
	if (errnum == ERR_NOOLDPWD)
		return ("OLDPWD not set");
	return (ft_strerror4(errnum));
}

char		*ft_strerror2(int errnum)
{
	if (errnum == ERR_BADARG)
		return ("bad argument given");
	if (errnum == ERR_AGRMISSING)
		return ("missing arguments");
	if (errnum == ERR_ARGTOOMUCH)
		return ("too much arguments");
	if (errnum == ERR_NOCMD)
		return ("command not found");
	if (errnum == ERR_ISBLK)
		return ("is a block");
	if (errnum == ERR_ISCHR)
		return ("is a char file");
	if (errnum == ERR_ISFIFO)
		return ("is a pipe");
	if (errnum == ERR_ISLNK)
		return ("is a link");
	if (errnum == ERR_ISSOCK)
		return ("is a socket file");
	if (errnum == ERR_NOPATH)
		return ("no path set");
	if (errnum == ERR_ISREG)
		return ("is a file");
	if (errnum == ERR_CHDIR)
		return ("chdir error");
	return (ft_strerror3(errnum));
}

char		*ft_strerror(int errnum)
{
	g_errn = ERR_OK;
	if (errnum == ERR_OK)
		return ("so far so good");
	if (errnum == ERR_MALLOC)
		return ("malloc error");
	if (errnum == ERR_NOENT)
		return ("no such file or directory");
	if (errnum == ERR_ACCESS)
		return ("Permission denied");
	if (errnum == ERR_NAMETOOLONG)
		return ("File name too long");
	if (errnum == ERR_SIZE)
		return ("size too big");
	if (errnum == ERR_ISNOTDIR)
		return ("is not a directory");
	if (errnum == ERR_ISDIR)
		return ("is a directory");
	if (errnum == ERR_FAULT)
		return ("bad adress");
	if (errnum == ERR_FORK)
		return ("error on fork");
	if (errnum == ERR_PARSING)
		return ("bad parsing");
	return (ft_strerror2(errnum));
}
