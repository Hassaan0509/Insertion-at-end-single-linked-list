bool list::isEmpty()		//function to check that list is empty or not
{
	if (head == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int list::insertAtEnd(int index, int value)		//value=data in node's data
{
	node* newNode = new node();
	node* temp = head;
	int currIndex = 1;
	while (currIndex < index - 1 && temp != NULL)
	{
		currIndex++;
		temp = temp->next;			//next pointer stores that address of next node
	}
	if (temp != NULL)
	{
		newNode->data = value;
		temp->next = newNode;
		return 1;
	}
	else
	{
		return 0;
	}
}