/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:49:37 by ajelloul          #+#    #+#             */
/*   Updated: 2025/02/01 11:37:17 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

# include <stdio.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"


typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				data;
	int				index;
}					t_stack;

void	fail_push_swap(char *content, int status);
char	**parsing_args(int ac, char **av);
void	free_2d(char **str);
void	free_stack(t_stack **stack);
void	stack_init(t_stack **a, char **args);
void	push_back(t_stack **head, int data);

void	print_stack_tesssssssssssssst(t_stack *head);

#endif