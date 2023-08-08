<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
=======
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
>>>>>>> 511e4198f374eaf184122f565c6d50460e9ee6c6

/**
 * main - check the code
 *
 * Return: Always 0.
 */
<<<<<<< HEAD
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
=======
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
>>>>>>> 511e4198f374eaf184122f565c6d50460e9ee6c6
    return (0);
}
