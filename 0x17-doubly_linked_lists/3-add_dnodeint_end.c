/**
 * add_dnodeinint_end - to add node at the end of the list
 * @head: pointer of the list
 * @n: new node
 * Return: the address of new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *c_node;

	if (head == NULL)
		return (NULL);
	if (n_node == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head == n_node;
		n_node->prev = NULL;
		return (n_node);
	}
	else
	{
	while (c_node->next != NULL)
	{
		c_node = c_node->next;
		c_node->next = n_node;
		n_node->prev = c_node;
	}
	}

	return (n_node);
}
