/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabid <mabid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:20:03 by omoussao          #+#    #+#             */
/*   Updated: 2022/04/12 17:02:51 by mabid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return 1;
	}
	char	hash[256] = {0};
	char	*s1 = av[1], *s2 = av[2];

	while (*s1)
	{
		if (hash[(int)*s1] == 0)
		{
			ft_putchar(*s1);
			hash[(int)*s1]++;
		}
		s1++;
	}
	while (*s2)
	{
		if (hash[(int)*s2] == 0)
		{
			ft_putchar(*s2);
			hash[(int)*s2]++;
		}
		s2++;
	}
	ft_putchar('\n');
}

/**
 * @brief Comme pour inter on a les meme initialisations.
 * 			Or lorsque l'on parcours la chaine de caractere 
 * 			Dans s1 puis dans s2 on affiche les caractere mis en parametre 1 fois
 * 			Si il y a des doublons on ne les affiche pas
 * 			et ceux , que cq soit dqns s1 ou s2.
 * 			
 * 			ex : ./a.out 111122 33444555556666
 * 			> 123456
 * @param ac 
 * @param av 
 * @return int 
 */