#ifndef lib_h 
#define lib_h 

typedef struct
{
	int val;
	 struct node *next  ; 
 } node; 
node *taonode(int giatri);
void in(node *head);
void themdau(node **head,node *themdau);
// void themvao(node *head, int *c,node *thembatki);
void   themvaobatki(node **head,node *them);
node  *lienket(node* dau ,node *cuoi) ;
void xoabatki(node **head);
//int size(node *head);
int size(node *head);
void sapxepnode(node *node );
 static  void InterchangeSort(int *a, int n);
  #endif  
