/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:04:38 by davide            #+#    #+#             */
/*   Updated: 2024/02/26 14:54:02 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ATarget.hpp"

class BrickWall : public ATarget {
    public:
        BrickWall();
        ~BrickWall();
        ATarget* clone() const;
};