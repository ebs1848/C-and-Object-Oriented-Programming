/* Emir Behiç Sağlam
   000000000*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
	int process;
    
    int snumber;
    char courseCode[8];
    float graduationGrade;
    
    int stdnumber;
    char course[8];
    
    int i;
    float avarage, sum;
    
    FILE *fp;
    FILE *fp1;
    
	printf("Welcome to this program\n");
    
	do{
    
	printf("Please select a process you want to do\n\n");
	
	printf("1. Create a student file.\n2. Add a new student record to the file.\n3. Print the recorded student data.\n4. List the record of a student.\n5. List the details for a course.\n6. Create a new file for school.\n0. Terminate the program\n\n");
    scanf("%d", &process);

    switch(process){
        
        case 1: fp = fopen("ceng2021s.txt", "w");
                fclose(fp);
                printf("File created.\n\n");
                break;
        
        case 2: fp = fopen("ceng2021s.txt", "a+");
                
                printf("Enter the student number: "); 
				scanf("%d", &snumber);
                fprintf(fp, "%d\t", snumber);
                
				printf("Enter the course code: "); 
				scanf("%s", courseCode);
                fprintf(fp, "%s\t", courseCode);
                
				printf("Enter the final graduationGrade: "); 
				scanf("%f", &graduationGrade);
                fprintf(fp, "%.3f\n", graduationGrade);
                
                fclose(fp);
                printf("Record saved.\n\n");
                
                break;
        
        case 3: fp = fopen("ceng2021s.txt", "r+");
        
                while(fscanf(fp, "%d", &snumber) != EOF){
                	
                    fscanf(fp, "%d", &snumber);
                    fscanf(fp, "%s", courseCode);
                    fscanf(fp, "%f", &graduationGrade);
                    printf("%d %s %.3f\n", snumber, courseCode, graduationGrade);
                }
                
                printf("\n");
                fclose(fp);
                break;
        
        case 4: fp = fopen("ceng2021s.txt", "r+");
                printf("Enter the student number: "); scanf("%d", &stdnumber);
                
                while(fscanf(fp, "%d", &snumber) != EOF){
                	
                    fscanf(fp, "%s", courseCode);
                    fscanf(fp, "%f", &graduationGrade);
                    
                    if(stdnumber == snumber){
                    	
                        printf("%d %s %.3f\n\n", snumber, courseCode, graduationGrade);    
                    }
                
				}
                
				fclose(fp);
                break;
        
        case 5: fp = fopen("ceng2021s.txt", "r+");
                printf("Enter the course code: "); scanf("%s", course);
                
                while(fscanf(fp, "%d", &snumber) != EOF){
                	
                    fscanf(fp, "%s", courseCode);
                    fscanf(fp, "%f", &graduationGrade);
                    i++;
                    
                    if ( !strncmp(courseCode, course, sizeof(course)) ){
                    	
                        printf("%s %d %.3f\n\n", courseCode, snumber, graduationGrade);    
                    }
                    sum = graduationGrade + sum;
				}
                avarage = sum/i;
                printf("ave : %2.f\n", avarage);
                fclose(fp);
                break;
                
        case 6: fp = fopen("ceng2021s.txt", "r+");
                fp1 = fopen("ceng2021_new.txt", "a+");
                
                char ch = fgetc(fp);
                while (ch != EOF){
                    
                    fputc(ch, fp1);

                    ch = fgetc(fp);
                }
    
                printf("School file created.\n");
                fclose(fp);
                fclose(fp1);
                break;
        
        case 0: break;
        
        default:printf("Invalid value please enter a defined value\n\n");
				break;
    }
    
	}
	
	while(process != 0);
    
    return 0;
}
