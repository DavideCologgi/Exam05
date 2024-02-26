/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:57:22 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:00:10 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ASpell.hpp"

class Polymorph : public ASpell {
    public:
        Polymorph();
        ~Polymorph();
        ASpell*  clone() const;
};