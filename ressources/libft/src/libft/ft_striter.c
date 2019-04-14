/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: asiaux <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 02:25:04 by asiaux       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 02:25:06 by asiaux      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
		f(s++);
}
