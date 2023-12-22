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
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "stuff1");
    hash_table_set(ht, "mentioner", "stuff2");
    hash_table_set(ht, "heliotropes", "c2");
    hash_table_set(ht, "neurospora", "co3l");
    hash_table_set(ht, "depravement", "co4l");
    hash_table_set(ht, "stylist", "co5l");
    hash_table_set(ht, "subgenera", "co6l");
    hash_table_set(ht, "bss", "co7l");
    hash_table_set(ht, "btaaaty", "co8l");
    hash_table_set(ht, "bettsss", "co9l");
    return (EXIT_SUCCESS);
}
