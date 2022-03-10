#include<stdio.h>
#include<conio.h>
#include<windows.h>
main(){
char pass[55],get,answer[3];
int i,k=0,j=0;
printf("\t\t\t\t\t\t\tPASSWORD");
	again:
	printf("\nUse atleast one number and one uppercase letter. . .");
	printf("\n_______________________________________________________\n");
	printf("\nenter the password:");	
	i=0;
while(1){
		get=getch();
		if(isupper(get))
		{
			k=1;
		} if(isdigit(get))
		{
			j=1;
		}
		if(get==13)
		{ 
			pass[i]='\0';
			break;
		}if(get==8)
		{ 
			if(i==0)
			{
				continue;
			}
			else
			{
		
				pass[--i];
				printf("\b \b");
				continue;
			}
		}
		if(get==32 || get==9)
		{
			continue;
		}
		
		pass[i++]=get;
		printf("*");	
}

	if(k==1 && j==1)
	{
		printf("\nthe password you enterd is:%s",pass);
	}
		else
		{
			j=0;
			k=0;
			printf("\nRequirements are not complete\nTry again (yes/no):");
			scanf("%s",&answer);
			if(strcmp(answer,"yes")==0)
			{
				system("cls");
				goto again;		
			}

		}

}
