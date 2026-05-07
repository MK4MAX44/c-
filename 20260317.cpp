//#include <stdio.h>
//int main()
//{
//
//	double pi;
//	pi = 3.14;
//	int radius = 5;
//
//	//pi*반지름*반지름
//
//
//	float extent = pi * radius * radius;
//
//	printf("원의 넓이: %f ", extent);
//
//	//circumference= 2 * pi * int redius(반지름);
//
//	float circumference = 2 * pi * radius;
//
//	printf("원의 둘레 : %f", circumference);
//	
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	double area_of_a_circle;
//	
//    area_of_a_circle: 
//
//	int upper_change = 5;
//
//	int height = 7;
//
//	int base = 3;
//	//밑변
//
//
//	upper_change = 5;
//	//윗변
//
//
//	height = 7;
//	//높이
//
//
//	area_of_a_circle = (base + upper_change) * height / 2;
//	//넓이
//
//	printf("사다리꼴의 넓이: %f", area_of_a_circle);
//
//	return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d" , &k);  //vs:scanf_s
//	printf("입력한 숫자는 : %d\n" , k);
//		return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int y, x;
//	printf("더하고 샆은 값 2개 입력 : ");
//    scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자를 두 개 입력: ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력: %c%c%c\n",a,b,c);
//	return 0;
//
//}




// 2026 3월 24일 


//#include <stdio.h>
//int main()
//{
//	int radius; //반지름=radiu
//	double pi;
//	pi = 3.14;
//	
//	printf("반지름 길이:");
//	scanf("%d", &radius);
//	 //3.14*r*r
//
//	double area_of_a_circle;
//	area_of_a_circle = pi * radius * radius;
//	printf("원의 넓이 : %lf\n" , area_of_a_circle);
//
//	double circumference;
//	circumference = 2 * pi * radius;
//
//		printf("원의 둘레 : %lf\n", circumference);
//	//circumference:원의 둘레
//
//
//		double the_length_of_a_circle;
//		the_length_of_a_circle = 2 * radius;
//
//	printf("원의 길이 :%lf", the_length_of_a_circle);
//	//원의 길이 2r



/*
#include <stdio.h>
int main()
{
	int  w1;
	int  w2;
	double H;
	double Area_of_​​a_trapezoid;

	printf("밑변의 길이: ");
	scanf("%d", &w1);

	printf("윗변의 길이: ");
	scanf("%d", &w2);

	printf("사다리꼴의 높이: ");
	scanf("%lf", &H);

	Area_of_​​a_trapezoid = (w1 + w2) * H / 2;
	printf("사다리꼴의 넓이: %lf", Area_of_​​a_trapezoid);

	 // the length of the upper side 윗변의 길이
	 // trapezoid area scanf("%lf%lf%lf", &w1, &w2, &H);
	 // length of the base 밑변의 길이


//}*/


//#include <stdio.h>
//
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; 
//	printf("%2d\n", number);//하나 내려서 써도 가능함
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main() 
//{
//	int A,B;
//
//	scanf("%d %d", &A,&B);
//
//	printf("%d", A - B);
//
//	return 0;
//
//}

//#include <stdio.h>;
//int main()
//{
//	int a = 0;
//
//	printf("%d\n", a++);
//
//	printf("%d\n", a);
//
//	return 0;
//
//}



//#include <stdio.h>
// 
//int main()
// 
//{
//	int a = 0;
//	printf("%d\n", ++a);
//
//	printf("%d\n", a);
//
//	return 0;
//
//
//
//}

//#include <stdio.h>;

//int main()
//{
//	int a = 10, b = 20;
//
//	scanf("%d %d", &a, &b, a, b);
//	
//printf("%d + %d = %d\n", a,b, a+b);
//
//
//printf("%d - %d = %d\n", a, b, a - b);
//
//
//printf("%d * %d = %d\n", a,b, a*b);
//
//
//printf("%d / %d = %d\n", a,b, a/b);
//
//
//printf("%d %% %d = %d", a,b, a%b);
//
//
//
//return 0;
//
//}


//#include <Stdio.h>
//int main()
//{
//	int first = 1 % 4;
//
//	printf("%d =1%%4\n", first);
//
//	int second = 5 % 3;
//
//	printf("%d = 5%%3\n", second);
//
//	int third = 4 % 2;
//
//	printf("%d = 4%%2\n", third);
//
//	return 0;
//
//
//}

//#include <stdio.h>
//int main()
//{
//
//	int number1, number2;
//
//	scanf("%d %d", &number1, &number2);
//
//	printf("%d = number1%%4\n", number1 % 4);
//
//	printf("%d = number2%%3\n", number2 % 3);
//	
//
//	return 0;
//
//}



//#include <stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n",fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//
//
//}



//#include <stdio.h>
//
//
//int main()
//
//{
//	int number;
//	printf("임의 숫자를 입력:");
//	scanf("%d", &number);
//	printf("임의 숫자 %d%%50\n", number);
//		
//		return 0;
//
//		
//
//
//}


//#include <stdio.h>
//
//int main()
//{
//	//input변수를 만든다.
//	int input;
//	
//		//임의의 값을 input에 넣는다.
//		
//		scanf("%d", &input);
//		
//
//	//result 변수를 만든다.
//		int result;
//
//	// input을 50으로 나눈다. 그걸 result에 넣는다.
//		result = input % 50;
//	
//	//result를 출력한다.
//	
//		printf("임의 숫자를 나눈 나머지 %d\n", result );
//
//



















	//int input;
	////remainder: 나머지
	//
	//printf("임의 숫자를 입력:");
	//
	//scanf("%d %d", &input);
	//
	//	int first = input % 50;


	//	printf("임의 숫자 %d%%50\n", input );
	//	printf("50으로 나눈 나머지 %d\n", result % 50);

	//return 0;



//}

//4월14일 

//#include <stdio.h>;
//
//int main()
//{
//	int datal  = 6 / 2;
//	printf("%d = 6/2\n", datal);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4; 
//	printf("%d = 6/4\n", data3);
//
//	return 0;
//
//}


//4월 14일
// 
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//
//}




//4월 13일

//#include <stdio.h>
//
//int main()
//{
//
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//
//	printf("만원권 %d개", coin10000);
//	printf("오천원권 %d개", coin5000);
//	printf("천원권 %d개",coin1000);
//	printf("나머지는 동전입니다.");
//	
//	return 0;
//
//}


//4월 14일

//#include <stdio.h>
//int main()
//{
//	printf("젤리의 값을 입력하세요\n:");
//
//	int Cjelly; //C=coin
//	scanf("%d", &Cjelly);
//	int  coin;
//	coin = 1000 - Cjelly;
//
//
//
//	int jcoin500 = coin / 500;
//	coin = coin % 500;
//
//	int jcoin100 = coin / 100;
//	coin = coin % 100;
//
//	int jcoin50 = coin / 50;
//	coin = coin % 50;
//
//	int jcoin10 = coin / 10;
//	coin = coin % 10;
//
//
//	printf("오백원 %d개\n", jcoin500);
//	printf("백원 %d개\n", jcoin100);
//	printf("오십원 %d개\n", jcoin50);
//	printf("십원 %d개\n", jcoin10);
//
//	printf("나머머지는 동전입니다");
//
//	return 0;
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int randint = rand() % 10;
//	int nextInt = rand() % 10;
//
//	printf("첫숫자: %d\n", randint);
//	printf("다음숫자: %d", nextInt);
//
//	return 0;
//
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//unsigned int 0~42억 
//	// 시간은 항상 양수여서 NULL
//
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	int afterInt = (rand() % 10) + 50;
//	printf("첫숫자: %d\n", randInt);// 0~9
//	printf("다음숫자: %d\n", nextInt);// 0~9
//	printf("그 다음숫자 : %d", afterInt);// 50~59
//
//	return 0;
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	printf("내 주머니에 있는 돈은");
//
//	int myMoney = (rand() % 10 + 1) * 1000; // rand() % 10= 0~9 거기서 +1했으니깐 1~10 그리고 곱하면 1000~10000이다 
//
//	printf("%d원이다.\n", myMoney);
//
//	int coin500 = rand() % 4 * 500; //0~3 , 500 곱하면 int coin500= 최소0 ~최대1500원
//	int coin100 = rand() % 5000; //  int coin100 = 0~4999
//
//	coin100 = (coin100 / 100) * 100; // )0~49 이고 거기에 100을 곱하면 4900원이다
//
//	
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100); 
//	printf("\n나는 과자를 살 수 있을까?");
//	
//	return 0;
//
//
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)//apple이 15이면 실행
//	{
//
//		printf("apple은 15개 있습니다.\n");
//	}
//
//	return 0;
//
//
//}


//#include <stdio.h>

//int main()
//{
//	int apple = 15;
//	if (apple != 17)//apple이 17이 아니면 실행 ,!= 같지않다
//	{
//		// { = 브레이스 1.코드를 묶어서 하나의 코드를 취급한다\
//		               2.변수의 사용범위 
//
//		printf("apple은 17개가 아닙니다.\n");
//
//		return 0;
//	}
//
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)//apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{	
//		int apple = 15;
//		if (apple < 20)//apple이 20보다 적으면 실행
//		{
//
//			printf("apple은 20개보다 적습니다.\n");
//	}
//		return 0;
//
//


//#include <stdio.h>

//int main()
//{
//
//
//	int apple = 1;
//	if (apple)//apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	if (!apple)//apple이 0이면 실행
//		//!= 참과 거짓을 뒤바꾸는 논리연산자
//
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
// return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10) //apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0) // apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)//apple이 0이면 실행
//
//	{
//		printf("apple은 하나도 없습니다./n");
//	}
//
//	else //if가 틀리면 (apple이 0이 아니면) 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
// 
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int coin = 50;
//
//	scanf("%d", &coin);
//
//	if (10 <= coin && coin <= 99)
//	{
//		printf("coin이 두 자리 숫자이다.\n");
//
//	}
//	//else if (coin < 10)
//	//{
//
//	//	printf("coin이 1o보다 작으면 두 자리 숫자가 아니다.\n");
//	//}
//	//else if (coin > 99)
//	//{
//
//	//	printf("coin이 99보다 크면 두 자리 숫자가 아니다.\n");
//	//}
//	else {
//		printf("coin이 두 자리 숫자가 아니다.\n");
//	}
//
//
//	return 0;
//
//}


#include <stdio.h>
int main()
{

	int height = 170;
	if (height > 150) 
	{
		printf("키가 150 이상입니다.\n")



	}





}