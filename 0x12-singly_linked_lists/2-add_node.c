#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strlen - function to get the length of a string
* @s: string parameter
* Return: return length of string
*/
int _strlen(const char *s)  
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}

/**
* add_node - function to add a string at the beginning of list_t
* @str: string parameter
* @*head: pointer to the first node in the list
* Return: return updated list_t
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode)
	{
		newnode->str = strdup(str);
		newnode->len = _strlen(str);
		newnode->next = *head;
		*head = newnode;
	}
return (newnode);
}
