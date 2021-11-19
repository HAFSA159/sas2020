#include<stdio.h>
    //////////////////////////////////////////////////////////////////////////////// 
   
int main(){
	
    printf("****************************************************************************\n");
	int nbrP  ;

	int choixV ;
	
	int nbrdeVote = 0 ;
	
	int i,j;
	int sum;
    
	printf("-------------------------------Entrer le nombre des presidents------------------------------:  ");
	
	scanf("%d",&nbrP);
	
	char  arrPresident[nbrP][50];
	
	
do
	
 	{
	  
			for(i = 0 ; i <nbrP ; i++)
			{
		
				
				printf("entrer le nom de president num %d : \n " ,i+1);
				scanf("%s",&arrPresident[i]);
		
			    
		       } 
	
   }
   
	while(nbrP<2);

  
	int nmbV;

	
	printf("SVP enter le nombre des voteurs: ");
	scanf("%d",&nmbV);
	
	char arrvoter[nmbV][50];
	
do
	{
	
	
			for( i=0 ; i<nmbV ; i++)
		
			   {

				printf(" \n entrer le nom des voteurs num %d :  " ,i+1);
				scanf("%s",&arrvoter[i]);
		
			    
		       }
   }
	while(nmbV<5);
	
      
	
    printf("voila la liste des presidents  : \n ");
     for ( i = 0 ; i < nbrP ;i++){
    	printf(" \n \t pour voter au presidents  %s tapez : %d  ",arrPresident[i],i+1);
    	}
    	
    	
    	
    	
    int arrforchoices[nmbV];
     for(j = 0 ; j< nmbV; j++){
	 
	printf("\n \n voter au nom %s entrer votre choix : ",arrvoter[j]);
	scanf("%d",&choixV);
	
    arrforchoices[j]=choixV;
     }	
     
     	int  arr_vote_counter[nbrdeVote];
     	
     for( i = 0; i <nbrP; i ++ ){
     	sum=0;
     	for( j= 0 ; j<nbrdeVote; j ++ ){
     	if(i+1== arrforchoices[j]){
		 
		 sum++;
		  
	   }
	    
	    
		 
		 }
		 arr_vote_counter[i]= sum;
		 printf("le president  %s avec le nombre   %d  a pris  %d votes . \n", arrPresident[i],i+1,arr_vote_counter[i]);
		 
	 }
	
	
	
}
	
