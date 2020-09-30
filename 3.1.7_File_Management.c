# include <stdio.h> 
# include <string.h> 
   
int main( ) 
{  
    FILE *file_pointer;
    char file_data[50]; 
    char write_data[50] = "Words";
    file_pointer = fopen("examplefile.txt", "r+");


    if (file_pointer == NULL) 
    { 
        printf("Could not open the file.\n") ; 
    } 

    else
    {   
        //printf("The file has been opened.\n\n") ; 

        while(fgets(file_data, 50, file_pointer) != NULL) 
        { 
            printf("%s\n", file_data); 
        } 

        printf("File was read.\n\n"); 

        if (strlen(write_data) > 0) 
        { 
            fputs(write_data, file_pointer);    
            rewind(file_pointer);
            fgets(file_data, 100, file_pointer);
            printf("Newly written: %s\n", file_data); 
        } 

        fclose(file_pointer) ; 
        //printf("The file has been closed.") ; 
    }

    return 0;         
} 