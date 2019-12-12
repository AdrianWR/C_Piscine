/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_table.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:51:57 by aroque            #+#    #+#             */
/*   Updated: 2019/12/08 10:13:56 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_HASH_TABLE_H_
#define	_HASH_TABLE_H_

typedef struct s_entry
{
   char *key;
   char *value;   
   struct s_entry *next;
} s_entry;

typedef struct
{
	s_entry **entries;
} s_ht;

unsigned int	hash(const char *key);
char			*ht_get(s_ht *hashtable, char *key);
void			ht_set(s_ht *hashtable, char *key, char *value);
void 			ht_dump(s_ht *hashtable);
void			ft_long_number(char *str, s_ht *ht);
void			print_centena(s_ht *ht,  char *centena, int flag);
void			print_dezena(s_ht *ht, char *dezena, int flag);
void			print_unidade(s_ht *ht, char *unidade, int flag);
void			print_magnitude(s_ht *ht, char *digit, int flag);
char			*get_magnitude(int len);
s_entry			*ht_pair(char *key, char *value);
s_ht			*ht_create(void);

#endif
