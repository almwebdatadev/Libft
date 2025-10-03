/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:52:35 by alendine          #+#    #+#             */
/*   Updated: 2025/10/03 16:04:39 by alendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("RoF own '0' --> %d\n", ft_isalnum('0'));
	printf("RoF own 'a' --> %d\n", ft_isalnum('a'));
	printf("RoF own '&' --> %d\n", ft_isalnum('&'));
	printf("RoF system '0' --> %d\n", isalnum('0'));
	printf("RoF system 'a' --> %d\n", isalnum('a'));
	printf("RoF system '&' --> %d\n", isalnum('&'));
}
