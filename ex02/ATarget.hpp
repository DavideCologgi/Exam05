/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:25:13 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 11:44:35 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget {
	protected:
		std::string type;

	public:
		ATarget();
		ATarget(const ATarget& other);
		ATarget(std::string tp);
		virtual ~ATarget();

		ATarget&			operator=(const ATarget& rhs);
		std::string         getType() const;
		virtual ATarget*	clone() const = 0;
		void				getHitBySpell(const ASpell& spell) const;      
};