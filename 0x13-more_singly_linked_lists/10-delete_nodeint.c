#include "lists.h"


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
      /*temp is used to freeing the memory*/
      listint_t *temp;

      /*key found on the head node.*/
      /*move to head node to the next and free the head.*/
      if((*head)->n == index)
      {
          temp = *head;    /*backup to free the memory*/
          *head = (*head)->next;
          free(temp);
          return (1);
      }
      else
      {
          listint_t *current  = *head;
          while(current->next != NULL)
          {
              /*if yes, we need to delete the current->next node*/
              if(current->next->n == index)
              {
                  temp = current->next;
                  /*node will be disconnected from the linked list.*/
                  current->next = current->next->next;
                  free(temp);
                  break;
              }
              /*Otherwise, move the current node and proceed*/
              else
                  current = current->next;
          }
      }
    return (1);
}