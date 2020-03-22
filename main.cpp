// TREEES
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


void Tcreate()
{
    int x;
    struct Node *s,*t;
    struct Queue P;
    create(&P,20);

    printf("enter root");
    scanf("%d",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;
    root->left=root->right=NULL;
    enqueue(&P,root);

    while(P.Front!=P.Rear)
    {
        s=dequeue(&P);
        printf("enter lchild of %d",s->data);
        scanf("%d",&x);
        if (x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->left=t->right=NULL;
            s->left=t;
            enqueue(&P,t);
        }
        printf("enter rchild of %d",s->data);
        scanf("%d",&x);
        if (x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->left=t->right=NULL;
            s->right=t;
            enqueue(&P,t);
        }
    }


}
int main()
{
    Tcreate();
return 0;}
