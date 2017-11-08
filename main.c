/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:44:17 by rjakubec          #+#    #+#             */
/*   Updated: 2017/11/08 16:57:13 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
	
	printf("Test de la fonction ft_isprint :\nft_isprint(\"ABC\")\n");
	printf("Expected : \"%d\" | Returned : \"%d\"\n\n", isprint(10), ft_isprint(10));

	printf("Test de la fonction ft_iascii :\nft_isascii(\"ABC\")\n");
	printf("Expected : \"%d\" | Returned : \"%d\"\n\n", isascii(0), ft_isascii(0));

	printf("Test de la fonction ft_isalnum :\nft_isalnum(\"ABC\")\n");
	printf("Expected : \"%d\" | Returned : \"%d\"\n\n", isalnum(130), ft_isalnum(130));

	printf("Test de la fonction ft_isalnum :\nft_isdigit(\"ABC\")\n");
	printf("Expected : \"%d\" | Returned : \"%d\"\n\n", isdigit(50), ft_isdigit(50));

	printf("Test de la fonction ft_isalnum :\nft_isalpha(\"ABC\")\n");
	printf("Expected : \"%d\" | Returned : \"%d\"\n\n", isalpha(70), ft_isalpha(70));
}