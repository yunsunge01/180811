#include<stdio.h>

//���ڹ迭�� �� ���
int f(char s[])
{
	int n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	return n;
}


//���� ���ڹ迭�� �Է��� ���ڹ迭�� ��ġ Ȯ��
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
//	printf("�迭 str�� ũ��: %d \n", sizeof(str));
//	printf("�� ���� ������ ���: %c \n", str[13]);
//	printf("�� ���� ������ ���: %d \n", str[13]);
//	
//	str[12] = '?';
//
//	printf("���ڿ� ���: %s \n", str);
//	
//	return 0;
//}



//int main()
//{
//	char str[50];
//	int idx = 0;
//
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);
//	printf("�Է¹��� ���ڿ� : %s \n", str);
//
//	printf("���� ���� ���: ");
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
//	printf("��й�ȣ �Է�:");
//	scanf("%s", a);
//
//	if (1 == c(pw,f(pw), a))
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("�ٸ�");
//	}
//}

