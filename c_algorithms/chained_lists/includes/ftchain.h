/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftchain.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:09:02 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:26:03 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTCHAIN_H
# define FTCHAIN_H
# include <string.h>
# include <unistd.h>
struct				node
{
	int				data;
	int				key;
	struct node		*next;
};

struct node			*head = NULL;
struct node			*current = NULL;
void				ft_printList(void);
void				ft_insertFirst(int key, int data);
int					ft_isEmpty(void);
int					ft_lenght(void);
struct node			*ft_deleteFirst(void);
struct node			*ft_find(int key);
struct node			*ft_deleteKey(int key);
void				ft_sortList(void);
void				ft_reverse(struct node **head_ref);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
int					ft_strlen(char *str);

#endif
