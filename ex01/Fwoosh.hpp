/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:46:02 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 11:48:13 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"
#include <iostream>

class Fwoosh : public ASpell {
    public:
        Fwoosh();
        ~Fwoosh();
        ASpell*  clone() const;
};