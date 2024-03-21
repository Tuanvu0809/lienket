#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  node* bien1=taonode(1);
  node* bien2=taonode(2);
  node* bien3=taonode(3);
  node *bien4=taonode(4);
  node *bien5= taonode(5);
   node *bien6= taonode(10);
    node *bien7= taonode(8);
    node *bien8= taonode(100);
   node *bien9= taonode(21);
    node *bien10= taonode(81);
 bien1=lienket(bien1,bien2); 
 bien2=lienket(bien2,bien3); 
  bien3=lienket(bien3,bien6);
   bien6=lienket(bien6,bien7);  
 bien7=lienket(bien7,bien8); 
 bien8=lienket(bien8,bien9); 
 bien9=lienket(bien9,bien10);
  // printf("%d",bien1->val); 
// themdau(&bien1,bien4); 
 in(bien1); 

 printf("chon ");
int c;
scanf("%d",&c); 
 switch (c)
 {
    case 1:
    	{
    themvaobatki(&bien1,bien5);
    break; 
		}
    case 2: 
  	{
	xoabatki(&bien1);
    break; 
}
}
 
// int a; 
// a = size(bien1); 
sapxepnode(bien1 ) ;
printf("\n"); 
// printf("%d\n ",a);  
 in(bien1);

 printf ("ket "); 
	return 0;
}
