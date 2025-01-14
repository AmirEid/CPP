/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeid <aeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:25:18 by aeid              #+#    #+#             */
/*   Updated: 2024/10/29 20:00:42 by aeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main ()
{
    DiamondTrap trap( "trap" );
    DiamondTrap trap2( trap );
    DiamondTrap trap3(".");

    trap.whoAmI();
    trap2.whoAmI();
    trap3.whoAmI();
    trap3 = trap;
    trap3.whoAmI();

    trap.attack( "the air" );
    trap.takeDamage( 10 );
    trap.beRepaired( 10 );

    return 0;
}