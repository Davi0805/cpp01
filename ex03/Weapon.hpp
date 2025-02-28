/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:17:04 by davi              #+#    #+#             */
/*   Updated: 2025/02/28 19:08:18 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string type);
    ~Weapon();

    const std::string& getType() const;
    void setType(const std::string& type);
};

#endif // !WEAPON_HPP