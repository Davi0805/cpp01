/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:40:44 by davi              #+#    #+#             */
/*   Updated: 2025/02/28 17:40:45 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int n, std::string name)
{
    if (n < 0)
        return NULL;

    Zombie* horde = new Zombie[n];

    for(int i = 0; i < n; i++)
        horde[i].setName(name);

    return horde;
}