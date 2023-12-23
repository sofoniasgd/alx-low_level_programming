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
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "hetairas", "stuff1");
    hash_table_set(ht, "mentioner", "stuff2");
    hash_table_set(ht, "heliotropes", "c2");
    hash_table_set(ht, "neurospora", "co3l");
    hash_table_set(ht, "depravement", "co4l");
    hash_table_set(ht, "stylist", "co5l");
    hash_table_set(ht, "subgnera", "co6l");
    hash_table_set(ht, "bss", "co7l");
    hash_table_set(ht, "btaaaty", "co8l");
    hash_table_set(ht, "bettsss", "co9l");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
