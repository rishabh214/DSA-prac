#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//struct Stack{
//    int size;
//    int top;
//    int *w;
//};
//
//void push(struct Stack *p,int a)
//{
//    if (p->top==p->size-1)
//    {
//        printf("overflow");
//        return;
//    }
//    else
//    {
//        p->top=p->top +1;
//        p->w[p->top]=a;
//    }
//
//}
//
//int pop(struct Stack *q)
//{
//    if(q->top==-1)
//    {
//        printf("stack empty");
//        return -1;
//    }
//    else
//    {
//        int a;
//        a=q->w[q->top];
//        q->top--;
//        return a;
//    }
//}
//int main()
//{
//    struct Stack s;
//    s.size=5;
//    s.top=-1;
//
//    s.w=(int *)malloc(5*sizeof(int));
//
//    push(&s,5);
//    push(&s,7);
//    push(&s,52);
//    printf("%d\n",s.w[2]);
//    push(&s,2);
//    push(&s,74);
//
//   printf("%d-",pop(&s));
//   printf("%d-",pop(&s));
//   printf("%d-",pop(&s));
//   printf("%d-",pop(&s));
//   printf("%d-",pop(&s));
//   printf("%d-",pop(&s));
//
//}
// ### USING LINKED LIST

struct Stack{
    char data;
    struct Stack *next;
}*top=NULL;

void push(char a)
{
    struct Stack *p;
    p=(struct Stack *)malloc(sizeof(struct Stack));
    if (p==NULL)
    {
        printf("overflow");
        return;
    }
    else
    {
        p->data= a;
        p->next=top;
        top=p;

    }

}
void display()
{
    struct Stack *o=top;
    while(o!=NULL)
    {
        printf("%c-",o->data);
        o=o->next;
    }
}
int isempty()
{
    if (top==NULL)
        return 1;
    else
        return 0;
}
char pop()
{
    if(top==NULL)
    {
        printf("stack empty\n");
        return '#';
    }
    else
    {
        struct Stack *i=top;
        char a;
        a=top->data;
        top=top->next;
        free(i);

        return a;
    }
}
int parantheses_match(char arr[],int a)
{
    for(int i=0;i<a;i++)
    {
        //int x,y;
        char c=arr[i];
        if (c=='{' || c=='[' || c=='(')
        {
            push(c);
        }
        else if (c=='}' || c==']' || c==')')
        {
            if(top==NULL)
            {
                return 0;
            }
            else
            {
                int x,y=c;
                x=pop();
                if(y-x>4)
                {
                    return 0;
                }
            }

        }
    }

    if(top==NULL)
        return 1;
    else
        return 0;
}


int main()
{
    char arr[]="{{[[]}";
    int a,p;
    a=strlen(arr);

    p=parantheses_match(arr,a);

    if(p==1)
        printf("TRUE");
    else
        printf("false");

}

//    push(5);
//    push(7);
//    printf("%c\n",top->data);
//    push(2);
//
//
//   printf("%c-",pop());
//   printf("%c-",pop());
//   printf("%c-",pop());

