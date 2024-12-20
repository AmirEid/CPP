/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeid <aeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:41:31 by amireid           #+#    #+#             */
/*   Updated: 2024/10/16 17:37:54 by aeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void) 
{
  return ;
}

Harl::~Harl(void)
{
    return ;
}

void Harl::_debug(void) const
{
    std::cout << "Harl DEBUG: Shit, I have to sleep early every day!" << std::endl;
    return ;
}

void Harl::_info(void) const
{
    std::cout << "Harl INFO: Shit I think I can make if I slept only 6 only!" << std::endl;
    return ;
}

void Harl::_warning(void) const
{
    std::cout << "Harl WARNING: This job is bad, I don't like it that much anyway!" << std::endl;
    return ;
}

void Harl::_error(void) const
{
    std::cout << "Harl ERROR: Harl left his job and ended up unemployed again" << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    std::string eq[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4])() const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	for (int i = 0; i < 4; i++)
	{
		//if (!eq[i].compare(level))
		if (eq[i] == level)
		{
			(this->*func[i])();
			return;
		}
	}
	std::cout << "Crisi esistenziale!" << std::endl;
	return;
}