/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:01:59 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:04:03 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph() {}

ASpell* Polymorph::clone() const {
    return (new Polymorph());
}