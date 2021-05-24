//성적 입력 프로그램(출석10%,중간40%,기말50%) // 함수선언으로 조건문을 변경 해보기 

#include <stdio.h>  //8 40 32
#define MID 0.4
#define ATTEND 0.1
#define FINAL 0.5


typedef unsigned char UCHAR;
//1.함수 선언
float GNumber(void);
void Show(float fFinal,char  cGrade);  


int main(void)  
{
	// 시험 성적의 변수 선언 //함수문으로의 새로운 선언이기에  fprint부분은 삭제하였다. 
	
	float fFinal = 0.0;
	char  cGrade = 0;//c는 학점으로 if문으로 처 리 
	 //2. 함수 선언  
     fFinal=GNumber();
     
      Show(fFinal,cGrade);
     
     
    return 0;
}

//2.함수 정의 변수로 선언된 함식 처리   
float GNumber(void){
	float fAttend = 0.0; 
	float fMid   = 0.0; 
	float fFinalTest = 0.0;
	float fFinal = 0.0;
	
	printf("출석점수 \n"); 
	scanf("%f", &fAttend);
	
	printf("중간고사 점수\n"); 
	scanf("%f", &fMid);
	
	printf("기말고사 점수 \n"); 
	scanf("%f", &fFinalTest);
	
	fFinal=(fAttend*ATTEND)+(fMid*MID)+(fFinalTest*FINAL);
	printf("당신의 학기 점수는 %.2f 이다\n",fFinal);
	 
	return fFinal;
}
//2-2 학점등급에 대한 조건문 작성  
void Show(float fFinal,char  cGrade)
{
	
		//1 학점  조건 생성  90이상 a 80이상 b 70이상 c 60이상 d 나머지 f 
	if(fFinal>=90) 
    {
     printf("당신의 학점은 A입니다.\n");
     cGrade = 'A';
    }
    else if(fFinal>=80) 
	{
	 printf("당신의 학점은 B입니다.\n");
     cGrade = 'B';
	}
	 else if(fFinal>=70) 
	{
	 printf("당신의 학점은 C입니다.\n");
     cGrade = 'C';
    }
     else if(fFinal>=60) 
	{
	 printf("당신의 학점은 D입니다.\n");
     cGrade = 'D';
    }
    else
    {
	 printf("당신의 학점은 f입니다.\n");
     cGrade = 'f';
    }
 }
