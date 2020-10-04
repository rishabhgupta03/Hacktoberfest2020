#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void i_b();
void i_l();
int count();
void d();
void i_r();
void disply();
int main()
{
    int ch;
    while(1)
    {
        printf(":: linked list ::\n1.insert at begging \n2.insert at last\n3.insert after particular location \n4.total nodes in linked list\n5. display elements \n6.delete data \n7.exit\n enter your choice:  ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:i_b();
            break;
            case 2:i_l();
            break;
            case 3:i_r();
            break;
            case 4:count();
            int l;
            l=count();
             printf("total no of nodes in linked list is %d\n",l);
            break;
            case 5: disply();
            break;
            case 6:d();
            break;
            case 7: exit(0);
            default:printf("error!!!!!! ");
        }
    }
}
void i_b()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the data inside the node: ");
        scanf("%d",&p->data);
        p->next=NULL;

    if(head==NULL)
    {
            head=p;

    }
    else
    {
        p->next=head;
        head=p;

    }
   printf ("node inserted successfully\n");
}
void i_l()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&p->data);
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        struct node * temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=p;
    }
}
void i_r()
{
    struct node *p,*t;

    int loc,i=1,len;
    printf("enter the location which after you want to insert data:  ");
    scanf("%d",&loc);
    len=count();
    if(loc>len)
    {
        printf("error!!\nlinked list having only %d nodes",len);
    }
    else if(head==NULL)
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("enter the data you want to insert:  ");
        scanf("%d",&p->data);
        p->next=NULL;
        head=p;
    }
    else
    {
        t=head;
        while(i<loc)
        {
            t=t->next;
            i++;
        }
        p=(struct node*)malloc(sizeof(struct node));
        printf("enter the data you want to insert:  ");
        scanf("%d",&p->data);
        p->next=NULL;
        p->next=t->next;
        t->next=p->next;
    }
}
void disply()
{
    struct node *p;
    p=head;
    if(p==NULL)
    {
        printf("your list is empty\n");
    }
    else
    {
        printf("printing the data .......\n\n");
        while(p!=NULL)
        {
            printf("\n%d\n",p->data);
            p=p->next;
        }
    }
}
int count()
{
    int count=0;
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }

    return count;
}
void d()
{
    if(head==NULL)
    {
        printf("error!!\nlinked list is empty\n enter data first\n");
        main();
    }
    int i=1,loc,l;
    struct node *p,*t;
  printf("enter the location you want to delete: ");
  scanf("%d",&loc);
  l=count();
  if(loc>l)
  {
      printf("error!!! \n liked list having only %d elements",l);
  }
  else if(loc==1 && l==1)
  {
      p=head;
      head=NULL;
      free(head);

  }
  else
  {
      p=head;
      while(i<loc-1)
      {
          p=p->next;
          i++;
      }
      t=p->next;
      p->next=t->next;
      t->next=NULL;
      free(t);
  }
}
