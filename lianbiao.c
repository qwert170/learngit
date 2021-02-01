/*#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node *next;
}Node;
*/
/*尾插法*/
//有头节点
 //Node * removeNthFromEnd(Node* head, int n);
 /*Node* partition(Node* head, int x);
int main(){
    Node *head;
    Node *p;
    int number;
    head=(Node *)malloc(sizeof(Node));//带头节点所以要初始化
    head->next=NULL;//带头节点所以要初始化
    p=head;

    while(1){
      scanf("%d",&number);
      if(number==0)  break;
      Node *s=(Node *)malloc(sizeof(Node));
      s->data=number;

      p->next=s;
      p=s;
    }
   p->next=NULL;
   // int n;
   //scanf("%d",&n);
   //head=removeNthFromEnd(head, n);
    
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
       printf("\n");
       int x;
    scanf("%d",&x);

    head=partition(head, x);

    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
       printf("\n");
       return 0;
}

*/
/*
// 删除链表的倒数第N个节点
Node* removeNthFromEnd(Node* head, int n){
   Node *p,*q,*r;
   p=head;
   if(head==NULL){
       p=head->next;
   }
   int cnt=0;
   while(p){
       cnt++;
       p=p->next;
   }
   int i,j;
   i=1;
   p=head;
   if(head==NULL)  p=head->next;
   while(i<cnt-n&&p){
     p=p->next;
     i++;
   }
   q=p->next;

   if(cnt==n&&n!=1){
       r=p;
       p=q;
       q=q->next;
       head=p;
       free(r);
       return head;
   }
   if(n!=1&&p){
       p->next=q->next;
       free(q);
   }else{
       if(cnt==1){
           p=NULL;
           head=p;
           return head;
       }else{
       p->next=NULL;
       }
       free(q);
   }
   return head;
}*/
     /*插入    在第 i个位置插入新节点*/
    /*int j=0;
    int i=2;
    Node *w;
    w=head;
    Node *t;
    while(j<i-1&&w){
        w=w->next;
        j++;
    }
     t=(Node *)malloc(sizeof(Node));
     scanf("%d",&t->data);
     t->next=w->next;
     w->next=t;

     p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");*/
    //删除 在第x个位置删除
    /* int k,x;
     k=0;x=3;
     w=head;
     while(k<x-1&&w){
         w=w->next;
         k++;
     }
     Node *e;
     e=(Node *)malloc(sizeof(Node));
     e=w->next;
     w->next=e->next;
     free(e);

     p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }*/
    
    //查询
    /*int shuzi;
    printf("找哪个数");
    scanf("%d",&shuzi);
    p=head->next;
    while(p){
        if(p->data==shuzi){
            printf("找到了%d",shuzi);
            break;
        }
        p=p->next;
    }*/
    //链表的长度
   /* int cnt=0;
    p=head->next;
    while(p){
        cnt++;
        p=p->next;
    }
    printf("\n%d",cnt);
    
}*/


/*头插法
int main(){
   Node *head;
   Node *s;
   head->next=NULL;
   while(1){
       Node *p=(Node *)malloc(sizeof(Node));
       scanf("%d",&p->data);
       if(p->data==0)   break;
       else{
           p->next=head->next;
           head->next=p;
       }
   }

    s=head->next;
    while(s){
        printf("%d ",s->data);
        s=s->next;
    }
}
*/




/*链表的合并
#include<stdio.h>
#include<stdlib.h>
typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void create(Node **p);
void hebin(Node *p,Node *q);
int main(){
    Node *head1,*head2;
    head1=(Node *)malloc(sizeof(Node));
    head1->next=NULL;
    head2=(Node *)malloc(sizeof(Node));
    head2->next=NULL;
    create(&head1);
    create(&head2);
    hebin(head1,head2);

}

void hebin(Node *p,Node *q){
      Node *r,*s,*t;
      Node *a;
      s=p->next;
      t=q->next;
      r=a=p;
      while(s&&t){
          if(s->data<=t->data){
              r->next=s;
              r=s;
              s=s->next;
          }else{
              r->next=t;
              r=t;
              t=t->next;
          }
          if(s)  {
              r->next=s;
          }
          if(t)  r->next=t;
      }
      t=a->next;
      while(t){
          printf("%d ",t->data);
          t=t->next;
      }
}

void create(Node **p){
       int number;
      Node *s;
      s=*p;
       while(1){
           scanf("%d",&number);
           if(number==0)   break;
           Node *t=(Node *)malloc(sizeof(Node));
           t->data=number;
           s->next=t;
           s=t;
       }
       s->next=NULL;

       s=(*p)->next;
       while(s){
           printf("%d ",s->data);
           s=s->next;
       }
       printf("\n");
}
*/

/*链表的逆置  还不太懂
#include<stdio.h>
#include<stdlib.h>
typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void add(Node **head);
void reverse(Node **head);

int main(){
    Node *head;
    head=(Node *)malloc(sizeof(Node));
    head->next=NULL;
    add(&head);
    reverse(&head);
    return 0;
}

void reverse(Node **head){
    Node *p,*q;
    p=(*head)->next;
    (*head)->next=NULL;
    while(p){
        q=p->next;
        p->next=(*head)->next;
        (*head)->next=p;
        p=q;
    }
    p=(*head)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void add(Node **head){
    int number;
    Node *p;
    p=*head;
    while(1){
       scanf("%d",&number);
       if(number==0)   break;
       Node *s=(Node *)malloc(sizeof(Node));
       s->data=number;

       p->next=s;
       p=s;
    }
    p->next=NULL;
    
    p=(*head)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void add(Node **head);
void quchu(Node **L1,Node **L2);
int main(){
    Node *L1,*L2;
    L1=(Node *)malloc(sizeof(Node *));
    L1->next=NULL;
    L1=(Node *)malloc(sizeof(Node *));
    L1->next=NULL;
    add(&L1);
    add(&L2);
    quchu(&L1,&L2);
    return 0;
}

void quchu(Node **L1,Node **L2){
    Node *p,*q,*r;
    Node *A;
    Node *t;
    t=(Node *)malloc(sizeof(Node));
    r=A;
    p=(*L1)->next;
   
    while(p){
         q=(*L2)->next;
        while(q){
            if(p->data==q->data){
                t=p;
               if(p==*L1){
                p=p->next;
                *L1=p;
                free(t);        
               }else{
                   t->next=p;
                   t->next=p->next;
                   free(t);
               }
            }
            q=q->next;
        }
        p=p->next;
    }

    p=(*L1)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}

void add(Node **head){
    int number;
    Node *p;
    p=*head;
    while(1){
       scanf("%d",&number);
       if(number==0)   break;
       Node *s=(Node *)malloc(sizeof(Node));
       s->data=number;

       p->next=s;
       p=s;
    }
    p->next=NULL;
    
    p=(*head)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode {
      int val;
      struct ListNode *next;
}Link;

void add(Link **head);
void removeElements(struct ListNode** head, int val);

int main(){
    Link *head;
    int val=6;
    head=(Link *)malloc(sizeof(Link));
    head->next=NULL;
    add(&head);
    removeElements(&head,val);
    
    return 0;
}

void removeElements(struct ListNode** head, int val){
     struct ListNode *p,*r,*q,*t;
     p=*head;
     t=(struct ListNode *)malloc(sizeof(struct ListNode));
     
     while(p){
         t=p->next;
         if(p->val==val){
             r=*head;
             *head=(*head)->next;
             p=*head;
             free(r);
         }else if(t->val==val){
             t=r;
             p->next=t->next;
             p=p->next;
             free(r);
         }else{
             p=p->next;
         }
     }

     p=(*head)->next;
    while(p){
        printf("%d ",p->val);
        p=p->next;
    }
    printf("\n");

    
}

void add(Link **head){
    Link *p;
    int va;
    p=*head;
    while(1){
        scanf("%d",&va);
       if(va==0)  break;
       Link *q;
       q=(Link *)malloc(sizeof(Link));
       q->val=va;
        p->next=q;
        p=q;
    }
    p->next=NULL;

    p=(*head)->next;
    while(p){
        printf("%d ",p->val);
        p=p->next;
    }
    printf("\n");
}
*/






//假期链表
#include<stdio.h>
#include<stdlib.h>
typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void weiadd(Node *head);
void headadd(Node *head);
void sanchu(Node *head);
void sczhi(Node *head);
void xiugai(Node *head);
void chazhao(Node *head);
void czzhi(Node *head);

int main(){
    Node *head;
    Node *p;
    int number;
    head=(Node *)malloc(sizeof(Node));
    head->next=NULL;
    p=head;
    while(1){
      scanf("%d",&number);
      if(number==0)  break;
      Node *s=(Node *)malloc(sizeof(Node));
      s->data=number;

      p->next=s;
      p=s;
    }
    p->next=NULL;
//原链表
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//尾接的数
    weiadd(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//头接的数
    headadd(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//删除第几个节点
    sanchu(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//删除确定值
    sczhi(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//修改节点信息
    xiugai(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//查找第几个节点
    chazhao(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
//查找确定值
    czzhi(head);
    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");

    return 0;
}

void weiadd(Node *head){
    int s;
    Node *t;
    printf("尾插的数：");
    scanf("%d",&s);
    Node *q=(Node *)malloc(sizeof(Node));
    q->data=s;
    t=head;
    while(t->next){
        t=t->next;
    }
    t->next=q;
    t=q;
    t->next=NULL;
}

void headadd(Node *head){
    int s;
    printf("头插的数：");
    scanf("%d",&s);
    Node *q=(Node *)malloc(sizeof(Node));
    q->data=s;
    Node *t;
    t=head;
    q->next=head->next;
    head->next=q;
}

void sanchu(Node *head){
    int i,t;
    Node *q,*s;
    printf("删除第几个:");
    scanf("%d",&t);
    q=head;
    for(i=1;i<t;i++){
        q=q->next;
    }
    s=q->next;
    q->next=s->next;
    free(s);
}

void sczhi(Node *head){
    int a;
    printf("删除值：");
    scanf("%d",&a);
    Node *q,*t;
    q=head;
    t=q->next;
    while(t){
        if(t->data==a){
            q->next=t->next;
            free(t);
            t=q->next;
        }
        q=q->next;
        if(t)  t=t->next;
        else t=NULL;
    }
}

void xiugai(Node *head){
    int i,a,b;
    printf("修改第几个节点：");
    scanf("%d",&a);
    Node *q,*t;
    q=head;
    for(i=1;i<a;i++){
        q=q->next;
    }
    t=q->next;
    printf("修改的值:");
    scanf("%d",&b);
    t->data=b;
}

void chazhao(Node *head){
    int i,a;
    printf("查找第几个节点：");
    scanf("%d",&a);
    Node *q,*t;
    q=head;
    for(i=1;i<a;i++){
        q=q->next;
    }
    t=q->next;
    printf("第%d个节点：\n",a);
    printf("数值为%d\n",t->data);
}
void czzhi(Node *head){
    int i,a;
    printf("查找确定值：");
    scanf("%d",&a);
    i=1;
    Node *t,*q;
    q=head->next;
    while(q){
        if(q->data==a){
            printf("第%d个节点\n",i);
        }
        i++;
        q=q->next;
    }
}