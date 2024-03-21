#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

node *taonode(int giatri)
{
	node *temp = (node*) malloc(sizeof(node));
	temp->val= giatri;
	temp->next= NULL; 
	  
	return temp; 
 } 
 void in(node *head)
 { 
 	node *pt;
 	pt=head; 
 	while ((pt) !=NULL)
	 {
	 	printf("%d\t", pt->val); 
	 	pt = pt->next; 
 
	  } 
	   printf("\n"); 
   }  
   void  themdau(node **head,node *themdau)
 { 
    node *tam ;
   tam=*head;
    tam=lienket(themdau,tam); 
    *head=tam ;
 
	    }  
  void   themvaobatki(node **head , node *them)
   {
   
   	printf("them vao sau vi tri muon them: ");
	int c,i=0 ;
	scanf("%d",&c );
	
	if (c==0)
	{ 	
	//printf("%d",c); 
		node *duyet;
		duyet=*head; 
		themdau(&duyet,them); 
	//	in(duyet); 
		*head=duyet ;
	 } 
	 else
	 {
	 	node *duyet;
		duyet=*head; 
	 	while(duyet!=NULL)
		 {
		 i++ ;
		// printf("%d ",c); 
		 	if (i==c)
			 {
			 //	printf("%d",i) ;
			 	node *tam;
			 	tam=duyet->next; 
			duyet->next=them;
			them->next=tam; 
			  } 
			  else 
			  {
			  	duyet=duyet->next; 
			   } 
		} 
		  //  in(duyet); 
	  } 
	
	  
}
node  *lienket(node* dau ,node *cuoi) 
{
	dau->next=cuoi ;
	return dau; 
}
void xoadau( node **head)
{ 
	node *xet=(node *) malloc(sizeof(node));
	
	xet=*head;
	xet = xet->next ;
	*head= xet;
//	free(xet);
	 
}
void xoabatki(node **head)
{

	printf("chon vi tri can xoa: ");
	int c,i=0; 
	scanf("%d",&c);
		node* xoa;
	xoa =*head;
	node *tam;
	node *dung;
	node *canxoa; 
	if (c==1)
	{
	node *xoa;
	xoa=*head;
	xoadau(&xoa);
	*head=xoa;	
	
	 } 
	else  
	 {

	//int  a=size(xoa);  
//	printf ("%d",a); 

	   while(xoa!=NULL) 
   {
	   	i++; 
	   if (i==(c-1))
	   {
	     tam = xoa; 
	   	} 
	   	if (i==c && xoa->next==NULL) 
		{
			canxoa=xoa ;
			tam->next=NULL;
		
		}
		 if (i==c && xoa->next!=NULL)
		{
		canxoa=xoa; 
		}   
	 	if (i==c+1 )
		{
		dung=xoa;
		tam=lienket(tam,dung);
		 }  
//		 if(i!=c) 
		 xoa=xoa->next;
  		}

		head =xoa;  
	 free(canxoa);  
	  }  
	 
	 
 } 
 int size(node *head)
 {
 	int a=0;
	 while (head != NULL)
	 {
	 	a++; 
	 	head=head->next; 
	  } 
	return a; 
  } 
 void sapxepnode(node *node )
 {
 	int a=size(node) ,i ;
 	int A[a];
	 printf("%d\n",a); 
	 while(node!=NULL) 
	 {	
		A[i]=node->val;	
		 i++; 
		 node=node->next; 
	}
//	printf("%d ", A[0] );
	for (i=0;i<=a-1;i++)
	 { 
	 printf("%d ", A[i] );
	//	 node=node->next; 
	 } 
	printf("\n" );
	 InterchangeSort(A, a);
 	for (i=0;i<=a-1;i++)
	 { 
	 printf("%d ", A[i] );
	//	 node=node->next; 
	 } 

 }
 static void InterchangeSort(int *a, int n)
 {  
   int i,  j;
    for (i = 0; i < n - 1; i++)
    {
      //j s? ðý?c duy?t t? v? trí c?a phân t? chýa s?p x?p t?i cu?i m?ng
        for (j = i + 1; j < n; j++)
        {
         //N?u ph?n t? ðang ki?m tra(a[i]) l?n hõn ph?n t? khi ta duy?t m?ng ð? ki?m tra(a[j])
             if(a[i] > a[j]) 
            {
               //Ta ð?o v? trí c?a 2 ph?n t?
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

