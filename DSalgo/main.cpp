///*#include <stdio.h>
//#include <stdlib.h>
//struct Node{
//    int data;
//    struct Node *next;
//}*first=NULL;
//
//void create(int ar[],int n)
//{
//    int i;
//    struct Node *t,*last;
//    first=(struct Node *)malloc(sizeof(struct Node));
//    first->data=ar[0];
//    first->next=NULL;
//    last=first;
//
//    for (i=1;i<n;i++)
//    {
//        t=(struct Node *)malloc(sizeof(struct Node));
//        t->data=ar[i];
//        t->next=NULL;
//        last->next=t;
//        last=t;
//    }
//}
//void display(struct Node *s)
//{
//    while (s!=NULL)
//    {
//        printf("%d",s->data);
//        s=s->next;
//    }
//}
//
//int main()
//{
//  int arr[]={2,4,6,8,9};
//  create(arr,5);
//  display(first);
//}
//
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node{
//    int data;
//    struct Node *next;
//
//}*first=NULL;
//
//struct Node * create(int ar[],int n)
//{
//    struct Node *last,*t,*a;
//    first=(struct Node *)malloc(sizeof(struct Node));
//    first->data=ar[0];
//    first->next=NULL;
//    last=first;
//
//    for (int i=1;i<n;i++)
//    {
//        t=(struct Node *)malloc(sizeof(struct Node));
//        t->data=ar[i];
//        t->next=NULL;
//        last->next=t;
//        last=t;
//    }
//    a=first;
//    return a;
//}
//void display(struct Node *d)
//{
//    while(d!=NULL)
//    {
//        printf("%d",d->data);
//        d=d->next;
//    }
//    printf("\n");
//}
//
//void rdisplay(struct Node *c)
//{
//    if (c != NULL){
//    printf("%d",c->data);
//    rdisplay(c->next);
//    }
//}
//void cosum(struct Node *q)
//{
//    int c=0,sum=0;
//    while (q!=NULL)
//    {
//        sum+= q->data;
//        c++;
//        q=q->next;
//    }
//    printf("count:%d\n",c);
//    printf("sum: %d\n",sum);
//}
//
//int minm(struct Node *a)
//{
//    int q;
//    q=a->data;
//    while(a!=NULL)
//    {
//        if(q>a->data)
//        {
//            q=a->data;
//        }
//        a=a->next;
//    }
//    return q;
//}
//struct Node * searchh(struct Node *a,int key)
//{
//    struct Node *q,*f;
//    q=NULL;
//    f=a;
//
//  while (a!=NULL)
//  {
//      if (key==a->data)
//      {
//          q->next=a->next;
//          a->next=f;
//          f=a;
//          return f;
//      }
//      else{
//      q=a;
//      a=a->next;
//      }
//}
//  return NULL;
//
//}
//void insertt(struct Node *a,int pos,int val)
//{
//    struct Node *t,*f;
//    //f=a;
//    t=(struct Node *)malloc(sizeof(struct Node));
//    t->data=val;
//    t->next=NULL;
//    if (pos==0)
//    {
//        t->next=first;
//        first=t;
////        return a;
//    }
//    else if(pos>0)
//    {
//        for (int i=1;i<pos;i++)
//        {
//            a=a->next;
//        }
//        t->next=a->next;
//        a->next=t;
////        return f;
//    }
//}
//void insertL(int d)//insert at last in LL
//{
//    struct Node *t,*p,*lat=NULL;
//    t=(struct Node *)malloc(sizeof(struct Node));
//    t->data=d;
//    t->next=NULL;
//    if (first==NULL)
//    {
//        first=lat=t;
//    }
//    else{
//        p=first;
//        while(p->next!=NULL){
//            p=p->next;
//        }
//        lat=p;
//        lat->next=t;
//        lat=lat->next;
//    }
//
//
//}
//
//void insertS(int d)// insert in sorted list
//{
//    struct Node *t;
//    t=(struct Node *)malloc(sizeof(struct Node));
//    t->data=d;
//    t->next=NULL;
//   struct Node *p;
//   p=first;
//   while(p->next!=NULL)
//   {
//    if (p->data>=t->data && p==first)
//    {
//        t->next=p;
//        first=t;
//    }
//
//
//   else if (p->data<t->data && (p->next)->data>t->data)
//   {
//       t->next=p->next;
//       p->next=t;
//   }
//
//   p=p->next;
//    }
//   if (p->data<t->data)
//   {
//       p->next=t;
//   }
//
//}
//int deletee(int pos)
//{
//    struct Node *a,*b;
//    int x;
//    b=NULL;
//    a=first;
//
//    if (pos==1)
//    {
//        first=first->next;
//        x=a->data;
//        free(a);
//
//    }
//    else
//    {
//        for(int i=0;i<pos-1 && a;i++)
//        {
//            b=a;
//            a=a->next;
//        }
//        b->next=a->next;
//        x=a->data;
//        free(a);
//    }
//            return x;
//
//}
//bool issorted(struct Node *a)
//{
//    int x=first->data;
////    struct Node *p;
////    p=first;
//    while (a)
//    {
//        if(x>a->data)
//            return false;
//    x=a->data;
//    a=a->next;
//    }
//    return true;
//
//}
//
//void remove_duplicate(struct Node *a)
//{
//    struct Node *p,*q,*t;
//    p=q=a;
//
//    do{
//        while (q->next!=NULL)
//        {
//            if (p->data==q->next->data)
//            {
//                t=q->next;
//                q->next=t->next;
//                free(t);
//            }
//            else
//                q=q->next;
//        }
//
//              p=p->next;
//
//
//    }while (p!=NULL);
//}
//
//struct Node * reverseList(struct Node *a)
//{
//    struct Node *p,*q,*r=NULL;
//    q=a;
//    p=a->next;
//    q->next=NULL;
//
//    while(p)
//    {
//        r=q;
//        q=p;
//        p=p->next;
//        q->next=r;
//    }
//    return q;
//}
//
//struct Node * mergelist(struct Node *f,struct Node *s)
//{
//    struct Node *t,*p;
//    if (f->data<s->data)
//    {
//        t=p=f;
//        f=f->next;
//        p->next=NULL;
//    }
//    else
//    {
//        p=t=s;
//        s=s->next;
//        p->next=NULL;
//    }
//    while (f&&s)
//    {
//        if(f->data<s->data)
//        {
//            p->next=f;
//            f=f->next;
//            p=p->next;
//            p->next=NULL;
//        }
//        else
//        {
//            p->next=s;
//            s=s->next;
//            p=p->next;
//            p->next=NULL;
//        }
//    }
//    if (f!=NULL)
//        p->next=f;
//    else if (s!=NULL)
//        p->next=s;
//
//    return t;
//
//}
//
//int main()
//{
//    struct Node *fg,*a,*b;
//    int arr[]={2,5,7,9};
//    int arrr[]={3,6,8};
//
//    a=create(arr,4);
//    b=create(arrr,3);
//
////    display(first);
////    cosum(first);
////    printf("%d\n",minm(first));
////    fg=searchh(first,1);
////    printf("%d\n",fg->data);
//
////      insertt(first,0,8);
////            insertt(first,1,3);
////                  insertt(first,2,2);
//
////      insertL(8);
////            insertL(2);
////                  insertL(7);
////    insertS(4);
//
////printf("\n%d\n",deletee(4));
////printf("\n%d\n",issorted(first));
////    remove_duplicate(first);
////      display(first);
////    fg=reverseList(first);
////display(a);
////    display(b);
////    fg=mergelist(a,b);
////    display(a);
////    display(b);
//
//
//    display(fg);
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
