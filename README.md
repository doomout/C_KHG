# 혼자 공부하는 C언어  
1. 컴파일 과정 3단계 : 전처리 -> 컴파일 -> 링크
2. printf 함수 : 데이터를 화면에 출력할 때 사용
3. 제어문자 
- \n : 줄 바꿈
- \t  : 출력 위치를 탭 위치로 이동
- \r  : 출력 위치를 맨 앞으로 이동
- \b : 출력 위치를 한칸 왼쪽으로 이동
4. 상수(const)는 변경 불가, 10은 정수, 10.0은 실수, 'a' 문자, "a"는 문자열
5. 실수(double) : 첫 비트: 부호비트, 11개 비트는 지수부, 52 비트는 소수부를 표현
6. 예약어는 컴파일러와 약속된 단어, 식별자는 사용자가 만들어낸 단어
7. scanf 함수 : 키보드로 데이터를 입력할 때 사용(변수 앞에 &를 사용, 문자열 입력시에는 &사용안함.) 
8. 함수 3가지 상태
```c 
//함수 선언
int sum(int a, int b);
   
//함수 정의
int sum(int a, int b)
{
	return a + b;
}

//함수 호출
sum(10, 20);
```
9. 함수의 핵심 포인트
- 처리할 데이터를 스스로 입력하는 함수에는 매개변수가 없어도 된다.
- 전달받은 데이터를 화면에 출력하는 함수는 반환형을 쓰지 않아도 된다.
- 같은 내용을 단지 화면에 출력하는 함수는 매개변수와 반환값을 둘 다 쓰지 않아도 된다.
- 매개변수와 반환값이 없을 때 빈 공간은 void를 적어준다.
- 재귀호출 함수는 자기 자신을 호출한다.
10. 배열의 선언과 사용
- 배열을 선언하면 많은 변구를 한번에 선언하는 효과가 있다.
- 배열을 초기화할 떄는 중괄호({})를 사용한다.
- 배열은 주로 반복문으로 처리한다.
- 배열 전체의 크기를 구할 때는 sizeof 연산자를 사용한다.
10-1. char 형 배열 선언시 주의할 점
- 배열의 크기는 최대한 넉넉하게 선언
- 배열의 요소의 개수는 최소한 (문자열의 길이 + 1) 이어야 한다.
- 문자열은 대입 연산자로 저장할 수 없다. 대신 strcpy함수를 사용하여 새로운 문자열을 복사
- gets 함수 :  문자열 입력 함수(배열의 크기보다 긴 문자열을 입력하면 메모리 영역을 침범)
- puts 함수 : 문자열 출력 함수
- 널 문자가 없는 문자열을 사용하면 메모리 접근 에러가 발생한다.
11. 포인터
- 포인터는 메모리를 사용하는 또 다른 방법
- 주소 연산자 (&)로 변수가 할당된 메모리의 위치를 확인한다.
- 포인터로 가르키는 변수를 사용할 때 간접 참조 연산자(*)를 사용한다.
```c
#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;   //변수 선언과 초기화
	double avg;                    //평균을 저장할 변수
	int* pa, * pb;                   //포인터 동시 선언
	int* pt = &total;              //포인터 선언과 초기화
	double* pg = &avg;        //double 형 포인터 선언과 초기화

	pa = &a;                       //포인터 pa에 변수 a의 주소 대입
	pb = &b;                       //포인터 pb에 변수 b의 주소 대입

	*pt = *pa + *pb;              //a 값과 b 값을 더해 total에 저장
	*pg = *pt / 2.0;                //total 값을 2.0으로 나눈 값을 avg에 저장

	printf("두 정수의 값  : %d, %d\n", *pa, *pb);   //a 값과 b값 출력
	printf("두 정수의 합 :  %d\n", *pt);                //total 값 출력
	printf("두 정수의 평균 :  %.1lf\n", *pg);          //avg 값 출력

	return 0;
}
```
11-1. 포인터 사용시 주의 점
- 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 한다.
- 형 변환을 사용한 포인터의 대입은 가능하긴 하다. 
- 하지만 크기가 다른 자료형 같은 경우엔 저장 방식이 달라 주의해야 한다.  
- 주소와 포인터는 상수와 변수의 차이가 있다.
- 포인터의 크기는 주소의 크기와 같다.
- 포인터에 주소를 저장할 때는 가리키는 자료형이 같아야 한다.
- 포인터의 주요 기능 중 하나는 함수 간에 효과적으로 데이터를 공유 하는 것이다.
12-1. 배열과 포인터의 관계
- 포인터는 값이 변할수 있으므로 유효한 값인지 확인하는 습관이 필요하다.
- 포인터에 증가 연산자와 간접  참조 연산자를 함께 사용할 때 전위 표현을 사용하면 안된다.
- 배열명은 첫번째 요소의 주소이다.
- 포인터에 배열명을 저장하면 포인터를 배열명처럼 사용할 수 있다.
- 배열명의 정수 덧셈은 가리키는 자료형의 크기를 곱해서 더한다.
- 포인터의 뺄셈 결과는 배열 요소 간의 간격 차이를 의미한다.