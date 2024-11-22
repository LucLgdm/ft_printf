/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:44:27 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/12 13:22:24 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*exit;

	if (nmemb != 0 && size > __INT_MAX__ / nmemb)
		return (NULL);
	else if (nmemb * size == 0)
		return (NULL);
	else
	{
		exit = (void *)malloc(nmemb * size);
		if (!exit)
			return (NULL);
		ft_memset(exit, 0, nmemb * size);
		return (exit);
	}
}