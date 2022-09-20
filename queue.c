//              ------------QUEUE---------------

#include <stdio.h>
#define max 5
int queue[max];
int front;
int end=-1;
int main()
{
    while (1)
    {
    int x;
    int ch;
    printf("------ENTER YOUR CHOICE------");
    printf("\n1 for PUSH\n2 for POP\n3 for DISPLAY\n4 for EXIT\n");

    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        insert(queue);
        break;
    case 2:
     	 x = delete(queue);

        if (x != -1)
        {
            printf("Deleted element is %d",x);
        }
        else
        {
            printf("-----The QUEUE is empty-----\n");
        }
        
        break;
    case 3:
        display(queue);
        break;
    case 4:
        printf("-----QUEUE EXIT-----\n");
        return(0);
    default:
        printf("Wrong input entered ");
        return(0);
        break;
    }
    }
}
//   FUNCTION FOR INSERTING ELEMENT TO QUEUE
void insert(int Q[])
{
    int var;
    if (end == max - 1)
    {
        printf("Queue is Full......\n-----OVERFLOW-----\n");
    }
    else 
    {
        printf("Enter element to insert in Queue....");
        scanf("%d",&var);
        queue[end+1] = var;
        end++;
    if (front == -1)
    {

        front = 0;
    }
    
    }
}
//    FUNCTION FOR DELETING ELEMENT FROM QUEUE
int delete(int Q[])
{
    if (front==-1)
    {
        printf("Queue is empty....\n-----UNDERFLOW-----\n"); 
    }
    int val;
    val = queue[front];
    if (front == end)
    {
        front = end =-1;
    }
    else if (front >= max)
    {
        front=end=-1;
    }
    else
    {
        front++;
    }    
    return val;
}
//         FUNCTION FOR DISPLAYING QUEUE
void display(int Q[])
{
    for (int i = max-1; i >= 0; i--)
    {
        printf("%d\t",queue[i]);
    }
    
}
