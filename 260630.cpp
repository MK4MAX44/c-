//#include <stdio.h>
//
//int main()
//{
//
//	int i_menu;
//	printf("1. 더하기 2. 빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//
//	case 1: // brace
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: // brace 
//	{
//		int number3, number4;
//
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//
//	}
//	return 0;
//}
//
		
//#include <stdio.h>
//
//int main()
//{
//	char key;
//	printf("방향키를 입력하세요\n");
//	scanf("%c", &key);
//	switch (key)
//	{
//	case 'w':
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	case 'a':
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	case 'd':
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	case 's':
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	}
//
//	}
//	return 0;
//}

	
#include <stdio.h>

int main()
{
    int number1, number2, number3;

   printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
    printf("mainDish 1.스테이크 2.생선요리 3.양갈비\n");
    printf("dessert 1.케이크 2.아이스크림 3.초콜릿무스\n");


    printf("숫자를 세개 입력하세요\n");
    scanf("%d%d%d", &number1, &number2, &number3);
    
    printf("주문한 음식은 ");
    switch (number1)

    {
    case 1:
        printf("캐비어");
        printf(",");
        break;
    case 2:
        printf("샐러드");
        printf(",");
        break;
    case 3:
        printf("푸아그라");
        printf(",");
        break;
        
    }
    switch (number2)
    {
    case 1:
        printf("스테이크");
        printf(",");
        break;
    case 2:
        printf("생선요리");
        printf(",");
        break;
    case 3:
        printf("양갈비");
        printf(",");
        break;
    }


    switch (number3)
    {
    case 1:
        printf("케잌");
        break;
    case 2:
        printf("아이스크림");
        break;
    case 3:
        printf("초코릿무스");
        break;
    }
        printf("입니다");
    
    return 0;
}

