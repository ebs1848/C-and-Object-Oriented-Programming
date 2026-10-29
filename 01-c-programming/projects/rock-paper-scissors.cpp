#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(void){
    int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    
	srand(time(NULL));
    
    printf("###### Welcome to Rock-Paper-Scissors Game ######\n");   
    printf("### Rules:\n### Press 1 for Rock\n### Press 2 for Paper\n### Press 3 for Scissors\n### First one to reach 3 points will win."); 
    
	for(i=0;i<50;i++){
        
        printf("\n\n\nInput your move:");
        scanf("%d",&choice); 
          
		  if(choice == 1){
		  printf("You picked ROCK\n");
		  }
		  else if(choice == 2){
		  printf("You picked Paper\n");	
		  }
		  else{
		  printf("You picked SCISSORS\n");
		  }
           
    int computer=rand()%3+1;
        
		if(computer == R){
        printf("The computer picked ROCK\n");
        }
	    else if(computer==S){
        printf("The computer picked SCISSORS\n");
        }
		else{
        printf("The computer picked PAPER\n");
        }
            
            if(choice==1){
                if(computer==1){
                    printf("Draw\n");
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
                if(computer==2){
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
                if(computer==3){
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
            }
              
		    else if(choice==2){
                if(computer==2){
                    printf("Draw\n");
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);  
                }
                if(computer==3){
                    printf("Computer Wins!\n");
                    Cscore = Cscore + 1;
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
                if(computer==1){
                    printf("Player Wins!\n");
                    Pscore= Pscore + 1;
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
            }
            
            else if(choice==3){
                if(computer==3){
                    printf("Draw\n");
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
                if(computer==2){
                    printf("Player Wins!\n");
                    Pscore= Pscore + 1;
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
                if(computer==1){
                    printf("Computer Wins!\n");
                    Cscore = Cscore + 1;
                    printf("Pscore %d\n",Pscore);
                    printf("Cscore %d\n",Cscore);
                }
        }
        else{
            printf("You entered an invalid value, please enter a valid value\n");
        }
        
        if(Cscore == 3 ){
                printf("Unfortunately you lose %d to %d\n",Cscore,Pscore);
                printf("game over");
                break;
            }
            else if( Pscore == 3){
                printf("Congratulations you win %d to %d\n",Pscore,Cscore);
                printf("game over");
                break;
        }
    }  
	
	return 0;
}
