//���� �Է� ���α׷�(�⼮10%,�߰�40%,�⸻50%) // �Լ��������� ���ǹ��� ���� �غ��� 

#include <stdio.h>  //8 40 32
#define MID 0.4
#define ATTEND 0.1
#define FINAL 0.5


typedef unsigned char UCHAR;
//1.�Լ� ����
float GNumber(void);
void Show(float fFinal,char  cGrade);  


int main(void)  
{
	// ���� ������ ���� ���� //�Լ��������� ���ο� �����̱⿡  fprint�κ��� �����Ͽ���. 
	
	float fFinal = 0.0;
	char  cGrade = 0;//c�� �������� if������ ó �� 
	 //2. �Լ� ����  
     fFinal=GNumber();
     
      Show(fFinal,cGrade);
     
     
    return 0;
}

//2.�Լ� ���� ������ ����� �Խ� ó��   
float GNumber(void){
	float fAttend = 0.0; 
	float fMid   = 0.0; 
	float fFinalTest = 0.0;
	float fFinal = 0.0;
	
	printf("�⼮���� \n"); 
	scanf("%f", &fAttend);
	
	printf("�߰���� ����\n"); 
	scanf("%f", &fMid);
	
	printf("�⸻��� ���� \n"); 
	scanf("%f", &fFinalTest);
	
	fFinal=(fAttend*ATTEND)+(fMid*MID)+(fFinalTest*FINAL);
	printf("����� �б� ������ %.2f �̴�\n",fFinal);
	 
	return fFinal;
}
//2-2 ������޿� ���� ���ǹ� �ۼ�  
void Show(float fFinal,char  cGrade)
{
	
		//1 ����  ���� ����  90�̻� a 80�̻� b 70�̻� c 60�̻� d ������ f 
	if(fFinal>=90) 
    {
     printf("����� ������ A�Դϴ�.\n");
     cGrade = 'A';
    }
    else if(fFinal>=80) 
	{
	 printf("����� ������ B�Դϴ�.\n");
     cGrade = 'B';
	}
	 else if(fFinal>=70) 
	{
	 printf("����� ������ C�Դϴ�.\n");
     cGrade = 'C';
    }
     else if(fFinal>=60) 
	{
	 printf("����� ������ D�Դϴ�.\n");
     cGrade = 'D';
    }
    else
    {
	 printf("����� ������ f�Դϴ�.\n");
     cGrade = 'f';
    }
 }
