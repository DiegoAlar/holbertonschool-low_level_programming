#include "hash_tables.h"
/**
  * hash_table_print - function that prints a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cont = 0;
	hash_node_t *temp;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (; cont < ht->size; cont++)
	{
		if (!ht->array[cont])
			continue;
		if (flag != 0)
			printf(", ");
		temp = ht->array[cont];
		flag = 1;
		while (temp->next)
		{
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			printf(", ");
			temp = temp->next;
		}
		printf("\'%s\': \'%s\'", temp->key, temp->value);
	}
	printf("}\n");
}
