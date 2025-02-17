/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:06:00 by ameduboi          #+#    #+#             */
/*   Updated: 2025/02/17 22:12:51 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_pile
{
	int				data;
	unsigned int	index;
	struct s_pile	*next;
}					t_pile;

// Utils
void				pb(t_pile **pile_a, t_pile **pile_b);
void				push(t_pile **pile_from, t_pile **pile_to);
void				pa(t_pile **pile_a, t_pile **pile_b);
void				reverse_rotate(t_pile **pile);
void				rra(t_pile **pile_a);
void				rrb(t_pile **pile_b);
void				rrr(t_pile **pile_a, t_pile **pile_b);
void				sa(t_pile **pile_a);
void				swap(t_pile **pile);
void				sb(t_pile **pile_b);
void				rr(t_pile **pile_a, t_pile **pile_b);
void				rotate(t_pile **pile);
void				ra(t_pile **pile_a);
void				rb(t_pile **pile_b);
void				rr(t_pile **pile_a, t_pile **pile_b);
void				ss(t_pile **pile_a, t_pile **pile_b);
void				ss(t_pile **pile_a, t_pile **pile_b);

// Printf
int					ft_printf(const char *format, ...);
int					ft_putnhex(unsigned long nbr, int m);
int					ft_putnptr(uintptr_t ptr);
int					ft_putnchar(char c);
int					ft_putnstr(char *s);
int					ft_putnnbr(int nbr);
int					ft_putunsignednnbr(unsigned int nbr);

// Libft
int					ft_atoi(const char *nptr);
int					ft_isdigit(int c);
char				**ft_split(char const *s, char c);
char				**free_all(char **result);
void				ft_putstr(char *s);
void				ft_lstadd_back(t_pile **lst, t_pile *new);
void				ft_lstadd_front(t_pile **lst, t_pile *new);
void				ft_lstclear(t_pile **lst);
// void				ft_lstdelone(t_pile *lst, void (*del)(void *));
t_pile				*ft_lstlast(t_pile *lst);
int					ft_lstsize(t_pile *lst);
t_pile				*ft_lstnew(int data);
int					is_sorted(t_pile **pile_a);
int					is_sorted_rev(t_pile **pile_b);

// Main code
void				indexing(t_pile **pile_a);
void				sort(t_pile **pile_a, t_pile **pile_b, int i);
int					ft_can_be_int(const char *nb_ptr);
void				tree_sort2(t_pile **pile_a);
void				for_sort(t_pile **pile_a, t_pile **pile_b);
void				tree_sort(t_pile **pile_a);
void				for_sort(t_pile **pile_a, t_pile **pile_b);
void				high_five_sort(t_pile **pile_a, t_pile **pile_b);
void				main_parsing(char **argv, t_pile **pile_a);
void				main_sort(int argc, t_pile **pile_a, t_pile **pile_b);

// Parsing
void				parsing(char *arg, t_pile **pile_a);
void				verif_doubles(t_pile **pile_a);
void				print_errors(t_pile **pile_a);

#endif
