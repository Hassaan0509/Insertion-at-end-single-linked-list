int list::update(int oldValue, int newValue)
{
	node* temp = head;		//temp is a tempory pointer used to triverse in list
	while (temp != NULL)
	{
		if (temp->data == oldValue)		//oldValue = the value which we want to update
		{
			temp->data = newValue;		//newValue = the value which we want after updation
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}