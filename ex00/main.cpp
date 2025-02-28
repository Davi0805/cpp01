/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:41:10 by davi              #+#    #+#             */
/*   Updated: 2025/02/28 17:41:11 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "-----------------------------------------------" << std::endl;

    Zombie katchau("Relampago marquinhos");

    katchau.announce();

    std::cout << "-----------------------------------------------" << std::endl;

    Zombie heap_test("Heap_Test");

    Zombie* marvin = heap_test.newZombie("Marvin");

    marvin->announce();

    delete marvin;
    
    std::cout << "-----------------------------------------------" << std::endl;

    Zombie nomeia_e_anuncia;

    nomeia_e_anuncia.randomChump("Patolino");

    std::cout << "-----------------------------------------------" << std::endl;

    return 0;
}