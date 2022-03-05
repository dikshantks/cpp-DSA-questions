node *REC_reverse(node *&head)
{
    if (head->nextptr == NULL || head == NULL)
    {
        return head;
    }

    node *newhead = REC_reverse(head->nextptr);
    head->nextptr->nextptr = head;
    head->nextptr = NULL;
    return newhead;
}