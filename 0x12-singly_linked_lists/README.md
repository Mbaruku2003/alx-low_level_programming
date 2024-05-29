singly linked lists are used to store data in a non contingent form
they contain nodes that contain a value and a pointer to the next address
singly linked lists contain structs that call themselves from within as amembers
this is important as it ensures continuity while creating memory for the next member untill NULL pointer link is reached
to add a new node we juats use the name tag name of the node and then the contents of the node in curly brackets e.g listint_t leo = {1, jembe, NULL}
otherwise  the same same way we creare a string char *str which is a pointer to characters, using listint_t *head, we can assign a pointer to the first node which is just like pointing to the whole listint_t
sometimes we might have to create an iterator for moving through the struct
t create a new node we use malloc
a new node is basically a pointer of the node
after creating a new node, we must check wheather it is NULL
we then assign the the struct values to the struct types
sometimes we  ust free the new_node->str
we then free the node
