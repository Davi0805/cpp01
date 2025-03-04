/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:03:55 by dmelo-ca          #+#    #+#             */
/*   Updated: 2025/03/04 10:51:05 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

// Declaracao da variavel statica
std::ifstream Sed::inputFile;

Sed::Sed(char **av) : _filename(std::string(av[1])), _s1(std::string(av[2])), _s2(std::string(av[3]))
{
    std::cout << "Construtor chamado - File - " << _filename
        << " - S1 - " << _s1 << " - S2 - " << _s2 << std::endl << std::endl;
}

Sed::~Sed()
{
}

bool Sed::isFileValid()
{
    inputFile.open(_filename.c_str());
    if (inputFile.is_open())
        return true;
    return false;
}

int Sed::execute()
{
    if (!isFileValid())
        return (0);
    while(std::getline(inputFile, _buffer))
    {
        replaceS1();
        if (!inputFile.eof())
            _result.append("\n");
    }
    std::cout << _result << std::endl;
    std::string outputFilename(_filename);
    outputFilename.append(".replace");
    std::ofstream outputFile(outputFilename.c_str());
    if(outputFile.is_open())
    {
        outputFile << _result;
        outputFile.close();
    }
    else
    {
        std::cerr << "Erro ao criar arquivo" << std::endl;
        return (1);
    }
    return(0);
}

void Sed::replaceS1()
{
    std::size_t it = _buffer.find(_s1);

    while(it != std::string::npos)    
    {
        // Append string ate fim da primeira aparicao do target para result
        _result.append(_buffer, 0, it);
        // Append da string para substituir
        _result.append(_s2);
        // apagar do buffer ate onde dei append no result
        _buffer.erase(0, it + _s1.length());
        it = _buffer.find(_s1);
    }
    _result.append(_buffer);
    return ;
}





