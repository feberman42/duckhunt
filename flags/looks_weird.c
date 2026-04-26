/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looks_weird.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feberman <feberman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:18:42 by feberman          #+#    #+#             */
/*   Updated: 2026/04/26 13:30:58 by feberman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int main(void)
{
	int	i;
	const char* text;
	text = "hello world"; 

	i = 1;
	while(i < strlen(text))
	{
		printf("%.*s\n", i, text);
	    i++;
	}
	while (i>=1)
	{
    	printf("%.*s\n", i, text) ;
		i--;
	}
	return 0;

}
