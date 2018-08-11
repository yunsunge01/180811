#include<stdio.h>

//문자배열의 수 계산
int f(char s[])
{
	int n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	return n;
}


//원본 문자배열과 입력한 문자배열의 일치 확인
int c(char a[],int len, char b[])
{
	for (int i = 0; i < len ; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}




//int main()
//{
//	char str[] = "good morning!";
//	printf("배열 str의 크기: %d \n", sizeof(str));
//	printf("널 문자 문자형 출력: %c \n", str[13]);
//	printf("널 문자 정수형 출력: %d \n", str[13]);
//	
//	str[12] = '?';
//
//	printf("문자열 출력: %s \n", str);
//	
//	return 0;
//}



//int main()
//{
//	char str[50];
//	int idx = 0;
//
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("입력받은 문자열 : %s \n", str);
//
//	printf("문자 단위 출력: ");
//	while (str[idx] != '\0')
//	{
//		printf("%c", str[idx]);
//		idx++;
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	char s[50];
//	scanf("%s", s);
//	
//	printf("%d", f(s));
//}

//int main()
//{
//	char a[50];
//	char pw[] = "passw@rd";
//	printf("비밀번호 입력:");
//	scanf("%s", a);
//
//	if (1 == c(pw,f(pw), a))
//	{
//		printf("같음");
//	}
//	else
//	{
//		printf("다름");
//	}
//}

