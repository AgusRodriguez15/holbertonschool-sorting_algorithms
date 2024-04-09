# holbertonschool-sorting_algorithms

### Style
We use "Betty" coding style.
## Data Structure and Functions
### print_array.c
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
### print_list.c
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
### struct listint_s
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```


## O Files
Will contain big O notations of time complexity of each sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### Instructions for use


##### Compile
In order to compile the program, we must use the following code: 

```
gcc -Wall -Wextra -Werror -pedantic n-sort_function.c n-main.c print_array.c print_list.c -o sort_function
```

## Tasks
### 0. Bubble sort
Function that sorts an array of integers in ascending order using the **Bubble sort** algorithm

```
void bubble_sort(int *array, size_t size);
```
### 1. Insertion sort
Function that sorts an array of integers in ascending order using the **Insertion sort** algorithm

```
void insertion_sort_list(listint_t **list);
```
### 2. Selection sort
Function that sorts an array of integers in ascending order using the **Selection sort** algorithm

```
void selection_sort(int *array, size_t size);
```
### 3. Quick sort
Function that sorts an array of integers in ascending order using the **Quick sort** algorithm

```
void quick_sort(int *array, size_t size);
```
## Authors
Gabriel Morffe, Agustin Rodriguez
