/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:31:40 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 11:54:39 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const ATarget& other) {
	*this = other;
}

ATarget::ATarget(std::string tp) : type(tp) {}

ATarget::~ATarget() {}

ATarget&    ATarget::operator=(const ATarget& rhs) {
	this->type = rhs.type;
	return (*this);
}

std::string ATarget::getType() const {
	return (type);
}

void		ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}