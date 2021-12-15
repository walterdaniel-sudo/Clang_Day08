#include <stdio.h>

// ---- 삼항 연산자 ----
// 다른 연산자들과는 다르게 피연산자가 3개이다.
// 삼항 연산자의 원형 : 조건식 ? 참을 때의 반환 값 : 거짓일 때의 반환 값

// ---- sizeof 연산자 ----
// 넘겨준 값의 크기를 구해주는 연산자
// sizeof 연산자의 원형: sizeof(크기를 구해줄 값);

// ---- 조건문 ----
// 조건식을 비교하고 해당 조건식이 참이면 종속 문장을 실행, 거짓이면 탈출
// if ~ else, switch ~ case 두 개가 존재
// 
// if ~ else의 원형:
//		if (조건식)
//		{
//			종속 문장;
//		}
//		
//		else
//		{
//			종속 문장;
//		}
// 
// if ~ else문에서 조건식 뒤에 ;(세미 콜론)을 작성하게 되면 종속 문장이 사라지게 된다.
// if ~ else문에서 종속 문장이 한 줄 일때는 {}(중괄호)를 생략할 수 있다.
// 


int main()
{
	// printf("연산 결과: %d\n", 3 == 5 ? 11: 22);

	int num;

	printf("입력 : ");
	scanf("%d", &num);

	printf("출력: %p\n", num >= 14 ? "14보다 크거나 같은 수" : "14보다 작거나 같은 수");

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	printf("출력: %s\n", num % 3 == 0 ? "참" : "거짓");

	// 3 -> 0
	// 4 -> 1
	// 5 -> 2
	// 6 -> 0
	// 7 -> 1*/

	// printf("크기: %d\n", sizeof(10.12));

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	if (num > 10)
	{
		printf("num은 10보다 큽니다.\n");
	}

	else if (num > 5)
	{
		printf("num은 5보다 큽니다.\n");
	}

	else
	{
		printf("num은 5보다 작거나 같습니다.\n");
	} */

	/*int num;

	printf("입력: ");
	scanf("%d", &num);

	if (num == 5);
	{
		printf("num은 5입니다.\n");
		printf("");
	}*/

	return 0;
}