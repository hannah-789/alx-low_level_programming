#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (duplicated, can be an empty string).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;

    /* Check for valid parameters */
    if (ht == NULL || key == NULL || *key == '\0')
        return 0;

    /* Get the index for the key using key_index function */
    index = key_index((unsigned char *)key, ht->size);

    /* Check if the key already exists in the linked list at the index */
    temp = ht->array[index];
    while (temp != NULL)
    {
        /* If the key already exists, update the value and return */
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value); /* Free the old value */
            temp->value = strdup(value); /* Duplicate and update the value */
            if (temp->value == NULL)
                return 0;
            return 1; /* Successfully updated the value */
        }
        temp = temp->next;
    }

    /* Key does not exist, create a new node and add it to the linked list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    /* Check for allocation errors */
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return 0;
    }

    /* Add the new node at the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1; /* Successfully added the key/value pair */
}
