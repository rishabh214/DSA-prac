#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
}*root;
struct Queue {
    int Size;
    int Front;
    int Rear;
    struct Node  **q;
};
void enqueue(struct Queue *a,struct Node *x)
{
    if ((a->Rear+1)%a->Size==a->Front)
    {
        printf("full\n");

    }
    else{
        a->Rear=(a->Rear+1)%a->Size;
        a->q[a->Rear]=x;
    }
    return;
}

struct Node * dequeue(struct Queue *a)
{
    struct Node *x=NULL;
    if (a->Front==a->Rear)
        printf("empty");
    else
    {
        a->Front=(a->Front+1)%a->Size;
        x=a->q[a->Front];
    }
    return x;
}
//void display(struct Queue *a)
//{
//    for (int i=a->Front+1;i<=a->Rear;i++)
//    {
//        printf("%d-",a->q[i]);
//    }
//}
void create(struct Queue *p,int a)
{

    p->Size=a;
    p->Front=p->Rear=0;
    p->q=(struct Node **)malloc(p->Size * sizeof(struct Node * ));

}
