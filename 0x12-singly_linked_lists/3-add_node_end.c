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
* add_node_end - function to add a string at the end of list_t
* @str: string parameter
* @head: pointer to the first node in the list
* Return: return updated list_t
*/
list_t *add_node_end(list_t **head, const char *str)

{

	list_t *newnode,*temp;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{	
		newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = i;
		newnode->next = NULL;

		if (*head == NULL)
			*head = newnode;
		else if ((*head)->next == NULL)
		(*head)->next = newnode;
		else 
	{
	temp = *head;
	while (temp->next != NULL)
	
	temp = temp->next;
	
	temp->next = newnode;
	newnode = temp->next;
	}
	}
	return (newnode);
}
