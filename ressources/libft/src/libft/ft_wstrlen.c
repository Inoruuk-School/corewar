/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wstrlen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: asiaux <asiaux@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 21:21:14 by asiaux       #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 21:21:21 by asiaux      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_wstrlen(wchar_t *s)
{
	size_t len;

	len = 0;
	if (s)
		while (*s)
			len += ft_wcharlen(*s++);
	return (len);
}