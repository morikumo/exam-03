/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabid <mabid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:18:42 by omoussao          #+#    #+#             */
/*   Updated: 2022/04/12 17:03:45 by mabid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	char	hash[256] = {0};
	char	*s1 = av[1], *s2 = av[2];

	while (*s2)
	{
		hash[(int)*s2] = 1;
		s2++;
	}
	while (*s1)
	{
		if (hash[(int)*s1] == 1)
		{
			ft_putchar(*s1);
			hash[(int)*s1] = 0;
		}
		s1++;
	}
	ft_putchar('\n');
}

/**
 * @brief On creer 2 chaine de caractere
 * 			Qui seront les argument (av[1] et av[2] soit s1 et s2)
 * 			Que l'on met dans un tableau (ici hash[256] 256 car c'est un char il ne peut aller plus loin)
 * 			On parcours la la deuxieme chaine de caractere pour identifier tout les chiffre de la chaine
 * 			Que l'on cat en INT car lorsque l'on ecrit dans le shell c'est des int automatiquement
 * 			Une fois toute la chaine parcouru on parcours la premiere chaine
 * 			Avec en condition a l'interieur de la  boucle que si il y a un nombre dans la premiere chaine 
 * 			qui est egal a 1, soit a un nombre de la 2 chaine. Eh bien on l'affiche avec putchar.
 * 			Un fois que c'est fait on continu de parcourir jusqu'a la fin de la chaine ect .. 
 * 
 * 			ex : ./a.out 743534 45354335
 * 			> 435
 * @param ac 
 * @param av 
 * @return int 
 */