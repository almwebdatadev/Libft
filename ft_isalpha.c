/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:41:57 by alendine          #+#    #+#             */
/*   Updated: 2025/10/03 15:18:39 by alendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main(void)
{
	printf("Df propia 'a'--> %d\n", ft_isalpha('a'));
	printf("Df propia 'b'--> %d\n", ft_isalpha('b'));
	printf("Df propia '0'--> %d\n", ft_isalpha('0'));
	printf("Df sis 'a'--> %d\n", isalpha('a'));
	printf("Df sis 'b'--> %d\n", isalpha('b'));
	printf("Df sis '0'--> %d\n", isalpha(0));
}
