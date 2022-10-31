#include<stdio.h>
#include "functions.c"
 /*#define VARIABLES\
         X(value1,1)\
         X(value2,2)
  int main()
  {
    #define X(value,a) char value[2]
            VARIABLES
    #undef X
    #define X(value,a) scanf("%s",value);    
            VARIABLES
#undef X
    #define X(value,a) printf("%s",a,value);    

#undef X       
    /*
  struct add
  {
   float l;
    
  };
  struct add length_1,length_2;
  printf("enter the first length:\n");
  scanf("%f",&length_1.l);
  printf("enter the second length:\n");
  scanf("%f",&length_2.l);
  result(length_1,length_2);*/


 
/**/



   /*struct node
   {
    int data;
    struct node *next;
   };
   struct node *head=NULL;
   struct node *second=NULL;
   struct node *third=NULL;
   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   head->data=1;
   head->next=second;
   head->data=2;
   head->next=third;
   head->data=3;
   head->next=NULL;
   */

  int main()
  {
    struct node
    {
      int data;
      struct *node next;
    };

    struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;
  
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    
  }




 

