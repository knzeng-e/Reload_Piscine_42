# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 18:09:52 by knzeng-e          #+#    #+#              #
#    Updated: 2017/05/22 18:10:01 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

find . -name "*.sh" -type f | xargs basename | cut -d '.' -f 1
