#include<stdio.h>
int main(){
	char choice;
	int level_marks,test_marks,aggrigate;
    printf(" Which department do you want to chose\n To chose Software engineering press 'S'\n To chose Computer enginering engineering press 'C'\n To chose Computer scinece press 'E'\n ");
    scanf("%c",&choice);
    
	aggrigate = (20*level_marks/100) + test_marks*100/100;
	printf("aggrigate= %d",aggrigate);
    
	switch(choice){
    	case 'S':
    	printf("Enter your level marks in percentage");
		scanf("%d",&level_marks);
		
		printf("Enter your test marks");
		scanf("%d",&test_marks);
		
		if(aggrigate>86){
			printf("You obtained good marks. You are eligible for Software engneering ");
		}else{
			printf("Your makrs are less than merit.So you are not eligible for admission");
		}
		break;
		
		case 'C':
    	printf("Enter your level marks in percentage");
		scanf("%d",&level_marks);
		
		printf("Enter your test marks");
		scanf("%d",&test_marks);
		
		
		if(aggrigate>81){
			printf("You obtained good marks. You are eligible for Computer engneering ");
		}else{
			printf("Your makrs are less than merit.So you are not eligible for admission");
		}
		break;
		
		case 'E':
		printf("Enter your level marks in percentage");
		scanf("%d",&level_marks);
		
		printf("Enter your test marks");
		scanf("%d",&test_marks);
		
		
		if(aggrigate>76){
			printf("You obtained good marks. You are eligible for Computer Science ");
		}else{
			printf("Your makrs are less than merit.So you are not eligible for admission");
		}
		break;
	    
		default:
		printf("Your marks are too less to take admission here.");
	}
}
