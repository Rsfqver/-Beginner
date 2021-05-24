#include <stdio.h>
#define MAXSIZE 75
// n번동안 담는 프로그램 
//구조체를 활용 
// 변수 type을 정의하는 코드:typedef
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int  UINT;

struct Student
{
	UINT uiNum; //학생의번호  
	UINT uiKor; //학생의국어  성적  
	UINT uiEng; //학생의 영어 성적  
	UINT uiMath;// 학생의 수학 성적 
	float ave;//학생의 평균 	 
};
//함수 정의 
void OneShow(UINT ui, Student*Score);  //uiOne==1을 바꾸어 주는 함수정의  
void TwoShow(UINT ui, Student* Score);//uiOne==2를 바꾸어 주는 함수정의 
// 배열에 대한 변수 선언을 전역변수로 선언  
Student Score[MAXSIZE];

int main(void)
{   
	 //구조체를 저장해주고 배열을 저장해주는함수선언 
	UINT ui=0; //학생 정보와 구조체 정보를 담는 변수 선언   
	UINT uiOne = 0; //반복문을 실행시키는 시작 변수 선언
	
	while(1)
	{		
		printf("\n 메뉴\n ");
		printf("1.학생 성적 추가\n ");
		printf("2.전체  성적 보기\n ");
		printf("3.프로그램 종료 \n ");
		printf("\n 원하는 작업 번호를 입력 하세요 \n ");	 
		 
		scanf("%d",&uiOne);
		
		if(uiOne==1) //함수 호출  
		{		
			 printf("\n 성적 추가를 선택하셧습니다 학생의 국어 영어 수학 성적순으로 입력해주세요\n ");
		   	OneShow(ui,Score); 	//정의한 함수 호출 
			  ui++;
			  
			if(ui==MAXSIZE) 
			{
				printf("한도를초과 하였습니다 더 이상 1번의 실행은 불가합니다 \n ");
				continue;
			}	
		
		}
		else if(uiOne==2) 
		{
		   		printf("\n 성적 보기를 입력 하셧습니다 \n "); //for문 선언으로 입력된 성적들이 계속 나올수 있게 반복
		   	 	TwoShow(ui,Score); ////정의한 함수 호출
		}		
		else if(uiOne==3)
		{
			
			printf("3.작업을 종료합니다\n ");
			break;
		}
		else
		{
			printf("올바른 수를 입력해주세요\n ");	
		}
	
}
    return 0;
}
//함수 구성  
void OneShow(UINT ui,Student*Score)
{
	Score[ui].uiNum=ui+1;
	UINT uiKor,uiEng,uiMath; //  반복문안에 성적에 사용될 변수 선언
	scanf("%d %d %d", &Score[ui].uiKor, &Score[ui].uiEng, &Score[ui].uiMath); 
	printf("\n 성적이 저장 되었습니다 \n ");
	Score[ui].ave=(float)(Score[ui].uiKor+Score[ui].uiEng+Score[ui].uiMath)/3;
				
}
void TwoShow(UINT ui, Student*Score)
{
			
	for(UINT uiGarde=0; uiGarde<ui; uiGarde++)
	{
	printf("\n학생의 학번은 %d 국어 점수는 %d 영어 점수는 %d 수학점수는 %d 평균은 %2.f입니다\n ",Score[uiGarde].uiNum , Score[uiGarde].uiKor, Score[uiGarde].uiEng,Score[uiGarde].uiMath, Score[uiGarde].ave);
	}	
				
}
