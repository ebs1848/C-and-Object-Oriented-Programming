#include <stdio.h>

int main()
{
    //variable to hold option
    int choice;
    
    //variables to hold student num, course code, final grade
    int snum;
    char courseCode[8];
    float grade;
    
    //variables to hold student num and course code
    int stnum;
    char course[8];
    
    //file pointers to existing and new file
    FILE *fp;
    FILE *fp1;

    //loop executes till user enters 0
    do
    {
    printf("1. Create a file.\n2. Add student record to the file.\n3. Print student records.\n4. List the record of a student.\n5. List the details for a course.\n6. Create a new file for school.\n0. Terminate program.\n");
    scanf("%d", &choice);

    switch(choice)
    {
        //to create file from scratch
        case 1: fp = fopen("ceng2021s.txt", "w");
                fclose(fp);
                printf("File created.\n\n");
                break;
        
        //to add data to file
        case 2: fp = fopen("ceng2021s.txt", "a+");
                
                printf("Enter student number: "); scanf("%d", &snum);
                fprintf(fp, "%d\t", snum);
                printf("Enter course code: "); scanf("%s", courseCode);
                fprintf(fp, "%s\t", courseCode);
                printf("Enter final grade: "); scanf("%f", &grade);
                fprintf(fp, "%.2f\n", grade);
                
                fclose(fp);
                printf("Record saved.\n\n");
                
                break;
        
        //to read data from file
        case 3: fp = fopen("ceng2021s.txt", "r+");
        
                while(fscanf(fp, "%d", &snum) != EOF)
                {
                    fscanf(fp, "%d", &snum);
                    fscanf(fp, "%s", courseCode);
                    fscanf(fp, "%f", &grade);
                    printf("%d %s %.2f\n", snum, courseCode, grade);
                }
                
                printf("\n");
                fclose(fp);
                break;
        
        //to compare and then display student details
        case 4: fp = fopen("ceng2021s.txt", "r+");
                printf("Enter student number: "); scanf("%d", &stnum);
                
                while(fscanf(fp, "%d", &snum) != EOF)
                {
                    fscanf(fp, "%s", courseCode);
                    fscanf(fp, "%f", &grade);
                    
                    if(stnum == snum)
                    {
                        printf("%d %s %.2f\n\n", snum, courseCode, grade);    
                    }
                }
                fclose(fp);
                break;
        
        //to compare and then display course details
        case 5: fp = fopen("ceng2021s.txt", "r+");
                printf("Enter course code: "); scanf("%s", course);
                
                while(fscanf(fp, "%d", &snum) != EOF)
                {
                    fscanf(fp, "%s", courseCode);
                    fscanf(fp, "%f", &grade);
                    
                    if ( !strncmp(courseCode, course, sizeof(course)) )
                    {
                        printf("%s %d %.2f\n\n", courseCode, snum, grade);    
                    }
                }
                
                fclose(fp);
                break;
         
        //to create new file for school       
        case 6: fp = fopen("ceng2021s.txt", "r+");
                fp1 = fopen("ceng2021_new.txt", "a+");
                
                char ch = fgetc(fp);
                while (ch != EOF)
                {
                    //write to new file
                    fputc(ch, fp1);

                    //read from existing file
                    ch = fgetc(fp);
                }
    
                printf("School file created.\n");
                fclose(fp);
                fclose(fp1);
                break;
        

        //to terminate program
        case 0: break;
    }
    }while(choice != 0);
    
    return 0;
}
