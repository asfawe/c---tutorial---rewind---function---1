#include <stdio.h>

// rewind() 함수가 선언되어 있는 stdio.h를 포함합니다. 

// rewind() 함수의 원형은 다음과 같습니다. 

// void rewind(FILE *stream);

// 파일 포인터의 위치를 처음으로 이동합니다. 

void main(void)
{
	FILE *fp;
	
	fp = fopen("c:\\temp\\file.txt", "w+");
	
	if(fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		printf("파일 포인터의 위치 : %d \n", ftell(fp)); // 위치 : 0
		fputs("abcde", fp);
		printf("파일 포인터의 위치 : %d \n", ftell(fp)); // 위치 : 5
		rewind(fp);
		printf("파일 포인터의 위치 : %d \n", ftell(fp)); // 위치 : 0
		fclose(fp); 
	}
}