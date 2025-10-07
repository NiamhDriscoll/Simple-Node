#include <iostream.h>
#include <string>
const int length = 32;
typedef struct node_str
{
    std::stream value;
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

