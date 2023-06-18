#include<stdio.h>
main(){
	int age;
	
	char cnic;
    printf("enter the your age and do you have cnic only answer in yes or no\n");
	scanf("%d %c",&age,&cnic);
	printf("yrea of expire\n");
	int y;
	scanf("%d",&y);
	if(age>=18){
		if(cnic=='yes'){
			if(y>=2022){
				printf("you can vote\n");
			}
			else{
				printf("yor id card is expired and you cannot vote\n");
			}
		}
		else{
			printf("you cannot vote because you donot have CNIC\n");
		}
	}
	else{
		
		printf("you cannot vote because yu are under 18\n");
	}
	
	
	
	
}
