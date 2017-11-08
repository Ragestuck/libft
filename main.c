/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjakubec <rjakubec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:44:17 by rjakubec          #+#    #+#             */
/*   Updated: 2017/11/08 14:18:07 by rjakubec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "proto.h"

int		main(int ac, char **av)
{
	char str[] = "ABC";
	
	write(1, "Bonjour et bienvenu dans le programme de test presente par RSK :\n", 65);
	
	write(1, "\nTest de la fonction ft_tolower :\n", 34);
	write(1, "ft_tolower(\"ABC\")\n", 18);
	ft_tolower(str);
	printf("Expected : \"abc\" | Returned : \"%s\"\n", str);
	if (!strcmp("abc", str))
		printf("Result : OK\n\n");
	else
		printf("Result : KO\n\n");

	printf("Test de la fonction ft_toupper :\nft_toupper(\"abc\")\n");
	ft_toupper(str);
	printf("Expected : \"ABC\" | Returned : \"%s\"\n", str);
	if (!strcmp("ABC", str))
		printf("Result : OK\n\n");
	else
		printf("Result : KO\n\n");
	
	
}