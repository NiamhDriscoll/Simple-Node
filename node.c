#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int length = 32;
typedef struct node_str
{
    char value[length + 1];
    struct node *next;
} node_str;
typedef struct node_int
{
    int value;
    struct node *next;
} node_int;
typedef struct node_bool
{
    bool value;
    struct node *next;
} node_bool;
typedef struct node_char
{
    char value;
    struct node *next;
} node_char;
