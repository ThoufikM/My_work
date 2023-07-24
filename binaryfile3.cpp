#include<stdio.h>
int main()
{
	struct employee
	{
		char Name[20];
		int Id;
		long MobNo;	
	}E1,E2;
	
	
    FILE *bin;
    bin = fopen("binary.bin","wb");
    if(bin == NULL)
    {
        printf("FILE NOT CREATED\n");
    }
    else
    {
        printf("FILE SUCCESSFULLY CREATED\n");
    }
    
    printf("ENTER THE NAME:");
   	gets(E1.Name);
    printf("ENTER THE ID:");
    scanf("%d",&E1.Id);
    printf("ENTER THE MOBLIE NO:");
    scanf("%d",&E1.MobNo);
    
    fwrite(&E1,sizeof(E1),1,bin);
    fseek(bin,0,SEEK_SET);
    fread(&E1,sizeof(E1),1,bin);
    
    printf("READING FILE:\n");
    printf("NAME : %s\n",E1.Name);
    printf("ID : %d\n",E1.Id);
	printf("MOBLIE NO : %ld\n",E1.MobNo);   
    fclose(bin); 
    
	return 0;
    
}