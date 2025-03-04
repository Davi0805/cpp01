/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:16:02 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/03 17:22:26 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl log;

    log.complain("DEBUG");
    
    std::cout << std::endl;

    log.complain("INFO");

    std::cout << std::endl;

    log.complain("WARNING");

    std::cout << std::endl;

    log.complain("ERROR");

    std::cout << std::endl;

    return (0);
}