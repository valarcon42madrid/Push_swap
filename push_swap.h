/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:08:38 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/25 17:11:11 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_err(int e, int *b);
int				*ft_recolect(char **argv, int argc, int num, int *b);
int				ft_right(char **argv, int argc, int *b);
int				ft_right_b(char **argv, int argc);
int				ft_numlen(int n);
int				ft_atoi(const char *str, int *bol);
void			ft_write(char *str);
void			ft_miniresolve(unsigned int **combination, int num, int *ab);
unsigned int	**push_b(unsigned int **combination, int num);
unsigned int	**push_a(unsigned int **combination, int num);
unsigned int	**reverse_a(unsigned int **combination, int num);
unsigned int	**reverse_b(unsigned int **combination, int num);
unsigned int	**reverse_ab(unsigned int **combination, int num);
unsigned int	**rotate_a(unsigned int **combination, int num);
unsigned int	**rotate_b(unsigned int **combination, int num);
unsigned int	**rotate_ab(unsigned int **combination, int num);
unsigned int	**swap_a(unsigned int **combination);
unsigned int	**swap_b(unsigned int **combination);
void			ft_continuousrotate(unsigned int **combination, int num,
					int *ab, int bit);
int				ft_checkiforderer(unsigned int **combination);
int				ft_countbits(unsigned int **combination,
					int num, int *ab, int bit);
int				ft_pseudocheckiforderer(unsigned int **combination, int num);
void			ft_putorder(unsigned int **combination, int *ab, int num);
void			ft_minido(unsigned int **combination, int num, int *ab);
int				ft_checkperfect(unsigned int **combination);
void			ft_three(unsigned int **combination);
unsigned int	**ft_orderbyrotate(unsigned int **combination, int y, int num);
unsigned int	**ft_orderbyreverse(unsigned int **combination, int y, int num);
void			ft_highresolution(unsigned int **combination, int num, int *ab);
void			ft_suffle(unsigned int **combination, int num, int *ab);
void			ft_antisuffle(unsigned int **combination, int num, int *ab);
void			ft_antifinishing(unsigned int **combination, int num, int *ab);
void			ft_theordertohigh(unsigned int **combination, int *ab, int num);
void			ft_theordertolow(unsigned int **combination, int *ab, int num);
void			ft_theordera(unsigned int **combination, int *ab, int num);
void			ft_theorderb(unsigned int **combination, int *ab, int num);
int				ft_repeat(int *a, int num);
int				*ft_pa(int *x, int num);
unsigned int	*ft_re(int *x, unsigned int *y, int num);
unsigned int	*free_and_uinull(unsigned int *re);
unsigned int	**ft_combi(int *ab, int *x, int num);
unsigned int	*ft_restocombi(int x, int num, unsigned int **combination,
					unsigned int *res);
void			ft_rev_a_and_add(int *xy, unsigned int **combination, int num);
void			ft_push_b(unsigned int **combination, int num, int *ab);
void			ft_reva_pusb(unsigned int **combination, int num, int *ab);
void			ft_first_to_a(unsigned int **combination, int num, int *ab);
void			ft_push_a(unsigned int **combination, int num, int *ab);
void			ft_pusa_reva(unsigned int **combination, int num, int *ab);
void			ft_pusa_swpa(unsigned int **combination, int num, int *ab);
void			ft_revb_pusa(unsigned int **combination, int num, int *ab);
void			ft_rob_swb_reb(unsigned int **combination, int num);
void			ft_last_a(unsigned int **combination,
					int num, int *ab, int type);
int				ft_order_and_type(unsigned int **combination, int num,
					int *ab, int type);
void			ft_revb_pusa(unsigned int **combination, int num, int *ab);
void			ft_first_to_b(unsigned int **combination, int num, int *ab);
void			ft_last_b(unsigned int **combination, int num,
					int *ab, int type);
void			ft_roa_swa_rea(unsigned int **combination, int num);
int				ft_type_and_order(unsigned int **combination, int num,
					int *ab, int type);
void			ft_continue(unsigned int **combination, int num, int *ab);
void			ft_nextar(int *xya);
int				ft_dobleright(int argc, char **argv, int *b);
int				ft_letter(int argc, char **argv);
int				ft_voidarg(int argc, char **argv);

#endif
