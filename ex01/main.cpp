/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:40:30 by davi              #+#    #+#             */
/*   Updated: 2025/02/28 17:40:31 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n_marias = 10;

    Zombie  paciente00("Paciente00");

    Zombie* horde = paciente00.zombieHorde(n_marias, "MariaVaiComAsOutras");

    for(int i = 0; i < n_marias; i++)
        horde[i].announce();

    delete[] horde;
}