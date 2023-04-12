#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;
    char *temp;
    ht = shash_table_create(1);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "dram", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "vivency", "5");
    shash_table_print(ht);
    shash_table_set(ht, "y", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
    temp = shash_table_get(ht, "m");
    printf("%s\n", temp);
    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
