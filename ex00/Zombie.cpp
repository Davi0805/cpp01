/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:40:53 by davi              #+#    #+#             */
/*   Updated: 2025/03/04 09:12:38 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << GREEN << "Zombie " << _name << " constructor called!" << RESET << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << RED << "Zombie " << _name << " destructor called!" << RESET << std::endl;
}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
