/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:33:21 by aroque            #+#    #+#             */
/*   Updated: 2019/12/09 09:56:24 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

#define TABLE_SIZE 2000

typedef struct s_entry {
	char 	*key;
	char 	*value;
	struct 	s_entry *next;
} s_entry;

typedef struct
{
	s_entry **entries;
} s_ht;

unsigned int	hash(char *key)
{
	unsigned long int value;
	unsigned int i;
	unsigned int key_len;
	
	i = 0;
	value = 0;
	key_len = ft_strlen(key);
	while (i < key_len)
	{
		value = value * 36 + key[i];
		i++;
	}
	value = value % TABLE_SIZE;
	return (value);
}

s_ht			*ht_create(void)
{
	int i;

	i = 0;
	s_ht *hashtable;
	hashtable = malloc(sizeof(s_ht) * 1);
	hashtable->entries = malloc(sizeof(s_ht) * TABLE_SIZE);
	while (i < TABLE_SIZE)
	{
		hashtable->entries[i] = 0;
		i++;
	}
	return (hashtable);
}

s_entry 		*ht_pair(char *key, char *value)
{
	s_entry *entry;
	entry			= malloc(sizeof(s_entry));
	entry->key		= malloc(ft_strlen(key) + 1);
	entry->value	= malloc(ft_strlen(value) + 1);
	ft_strcpy(entry->key, key);
	ft_strcpy(entry->value, value);
	entry->next = 0;

	return (entry);
}

void			ht_set(s_ht *hashtable, char *key, char *value)
{
	unsigned int slot;
	s_entry *entry;
	
	slot = hash(key);
	entry = hashtable->entries[slot];
	if (entry == 0)
	{
		hashtable->entries[slot] = ht_pair(key, value);
	}
}

char 			*ht_get(s_ht *hashtable, char *key)
{	
	unsigned int slot;
	s_entry *entry;
	
	slot = hash(key);
	entry = hashtable->entries[slot];
	if (entry == 0)
	{
		return (0);
	}
	while (entry != 0)
	{
		if (ft_strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}
		entry = entry->next;
	}
	return (0);
}
