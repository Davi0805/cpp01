/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:40:42 by davi              #+#    #+#             */
/*   Updated: 2025/02/28 18:56:46 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;
    void    setName(std::string name);
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce() const;
    Zombie* zombieHorde(int n, std::string name);

};

#endif // !ZOMBIE_HPP