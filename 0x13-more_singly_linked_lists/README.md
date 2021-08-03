# Steps to create a node in C (linked lists)



Surely more than one will be stuck in one of the topics of this course, especially what we are starting in the world of technology. That is why I made a small tutorial on how to create a node, to facilitate understanding of the subject, since personally it was very difficult for me.
Here we go:

Steps to create a node.
** a) Create the Node structure and the NODO type. **
There is a difference between `typedef` and` struct`, the former is about copying the variable type, something like copying office format. Example:

```
typedef int A;
A a;
```



My way of interpreting it is that we send the instruction to the processor to copy the format of the variable A, and paste it in the new variables that we create followed by A. Practically the variable A becomes a type of variable.
Instead `struct` we create a tree of variables, and that is why it is named ** struct **, which means" structure "in Spanish. The objective of using this reserved word is to give more order to the variables of our program, since it allows grouping those that are related, such as in a customer file, name and address, it is convenient to access them through a structure called customer. Example:

```
Struct Client {
char name [100];
char address [100];
};
```


Returning to the Nodes, together with the structure we create the `typedef`, but with a unique feature: the autoreference. This is achieved by creating a structure type pointer inside the node, which will allow other nodes to be linked. I know, it seems that it will give some error, and this is similar to the effect of putting two mirrors one in front of the other, but this is the process, do it without fear. Example:

```
typedef struct Node {
int var_1;
char var_2 [5];
struct Node * next;
} DO NOT GIVE;
```



** b) Create the function that will give existence to the node. **
Because a series of steps will be used repeatedly to create the nodes, it is efficient to create a function to perform the activity and thus save a few lines of code.
The steps that need to be saved in a function are:

1. Declare the function as a NODE pointer type.
2. Creation of the variable type NODO, declared previously.
3. Reserve memory for the variable.
4. Set the next pointer to NULL by default.
5. Assign the data received as arguments of the function to the corresponding variables (practically register the data of the node).
6. Return the NODE type pointer.

Example:

```
NODE * createNode (int number) {
NODE * newNode;
newNode = malloc (sizeof (NODE));
newNode-> next = NULL;
newNode-> number = number;

return newNode;
```



** c) Create the header and other components of the linked list **
Before creating a node, we must know if it will be a head, tail or an intermediate node. If we want to create a header, we declare a new pointer variable type NODE, and assign it a node with the function declared in the previous step. If we want to create a queue or intermediate node, we go through the list until we reach the queue node, or the node that we want to append a new one, and we assign a new node to its next variable, that way we make them point to the new node we create.
Example:

```
NODE * start = NULL, * current;

if (start = NULL)
{
start = createNode (number);

} else
{
current = start;
while (current-> next)
{
current = current-> next;
};
current-> next = createNode (number);
```



Important point: to go through the nodes, it must always be done from the header, and it is achieved with loop functions like `while`.
In this example, `start` is the header, and` current` is the tool that allows us to go through the chain of nodes, thanks to the `struct` next variable.