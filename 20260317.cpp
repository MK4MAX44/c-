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

#include <stdio.h>
int main()
{
	printf("젤리의 값을 입력하세요");
	int coin1;
	scanf("%d %d", &coin1d);
	int coin2;
	
	printf("%d = coin1/600\n",coin1);





	//int Jcoin10000 = coin / 10000;
	//coin = coin % 10000;

	//int Jcoin5000 = coin / 5000;
	//coin = coin % 5000;

	//int Jcoin1000 = coin / 1000;
	//coin = coin % 1000;

	//int Jcoin100 = coin / 100;
	//coin = coin % 100;


	//printf("만원권 %d\n", Jcoin10000);
	//printf("오천원권 %d\n개", Jcoin5000);
	//printf("천원권 %d\n", Jcoin1000);
	//printf("백원권 %d\n", Jcoin100);
	//printf("나머머지는 동전입니다");

	return 0;

}
