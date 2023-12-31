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
8-1. 함수 3가지 상태
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
8-2. 함수의 핵심 포인트
- 처리할 데이터를 스스로 입력하는 함수에는 매개변수가 없어도 된다.
- 전달받은 데이터를 화면에 출력하는 함수는 반환형을 쓰지 않아도 된다.
- 같은 내용을 단지 화면에 출력하는 함수는 매개변수와 반환값을 둘 다 쓰지 않아도 된다.
- 매개변수와 반환값이 없을 때 빈 공간은 void를 적어준다.
- 재귀호출 함수는 자기 자신을 호출한다.

9. 배열의 선언과 사용
- 배열을 선언하면 많은 변구를 한번에 선언하는 효과가 있다.
- 배열을 초기화할 떄는 중괄호({})를 사용한다.
- 배열은 주로 반복문으로 처리한다.
- 배열 전체의 크기를 구할 때는 sizeof 연산자를 사용한다.

10. char 형 배열 선언시 주의할 점
- 배열의 크기는 최대한 넉넉하게 선언
- 배열의 요소의 개수는 최소한 (문자열의 길이 + 1) 이어야 한다.
- 문자열은 대입 연산자로 저장할 수 없다. 대신 strcpy함수를 사용하여 새로운 문자열을 복사
- gets 함수 :  문자열 입력 함수(배열의 크기보다 긴 문자열을 입력하면 메모리 영역을 침범)
- puts 함수 : 문자열 출력 함수
- 널 문자가 없는 문자열을 사용하면 메모리 접근 에러가 발생한다.

11-1. 포인터
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
11-2. 포인터 사용시 주의 점
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

12-2. 배열을 처리하는 함수
- 배열을 출력하는 함수에 필요한 것은 배열명이다.
- 배열에 입력하는 함수에 필요한 것도 배열명이다.
- 배열의 크기가 달라도 입출력이 가능하려면 배열 요소의 개수를 알아야 한다.

13-1. 문자
- 모든 문자 상수는 아스키 코드 값으로 바뀌어 숫자로 저장되고 연산된다.
- %c 변환 문자는 화이트 스페이스(공백 문자, 탭문자, 개행문자)도 입력하며, %c 앞에 공백을 사용하면 화이트 스페이스를 입력에서 제외할 수 있다.
- getchar, putchar 함수는 문자 전용 입출력 함수다.

13-2. 버퍼를 사용하는 입력 함수
- scanf 함수가 데이터를 입력할 때는 가장 먼저 버퍼의 상태를 확인한다.
- 버퍼에 저장되는 데이터의 끝에는 항상 개행 문자가 있다.
- scanf 함수는 컨으롤 + z를 누르면 EOF(-1)을 반환한다.

14-1. 문자열과 포인터
- 문자열은 첫번째 문자가 저장된 메모리의 주소로 바뀐다.
- scanf 함수는 중간에 공백이 포함된 문자열을 입력할 수 없다.
- gets 함수는 한줄의 데이터를  char 배열에 저장한다.
- fgets 함수는 배열의 크기를 검사하는 기능을 가진 문자열 입력 함수다.

14-2. 문자열 연산 함수
- strcpy(복사 받을 곳, 복사할 내용) : 문자열을 복사
- strcpy 함수 : 첫번째 인수는 char 배열이나 배열명을 저장한 포인터만 사용 가능
- strcpy 함수 : 두번째 인수는 문자열의 시작 위치를 알수 있다면 어떤 것이든 사용 가능
- strncpy(복사 받을 배열명, 복사할 문자열, 복사할 문자수) : 원하는 개수의 문자만을 복사 
- strcat(이어 붙일 문자열, 붙일 문자열)
- strncat(이어 붙일 문자열, 붙일 문자열, 붙일 문자열 문자수)
- 주의점 : 메모리를 침범할 수 있다. strcat 함수를 사용할 때는 배열을 초기화해야 한다.
- strcmp(인수1, 인수2) : 인수1과 인수2를 비교 사전순서를 판단하여 결과 반환
- strlen : 배열에 저장된 실제 문자열의 길이를 알고 싶을 때 사용

15-1. 변수 사용 영역
- 변수 선언 위치에 따라 전역변수/지역변수로 나뉜다.
- auto  : 지역 변수 선언시 사용(제외 가능)
- static :  정적 변수 선언시 사용(함수가 종료되어도 데이터 유지하여 전역 변수 처럼 사용 가능)
- register : cpu내 레지스터 메모리 사용하여 빠른 실행 가능
- 지역변수의 사용 범위는 블록으로 제한된다.
- 지역 변수와 전역 변수의 사용 범위가 겹치면 지역 변수를 먼저 사용한다.
- 지역 변수에 statice를 사용해서 정적 지역 변수로 만들면 프로그램 종료시까지 저장 공간이 유지된다.
- register 변수는 컴파일러가 레지스터에 생성할지 말지를 결정한다.

15-2. 함수의 데이터 공유 방법
- 값을 복사 해서 인수로 전달하면 호출하는 함수의 값은 바뀌지 않는다.
- 호출하는 함수의 값이 바뀌려면 주소를 인수로 전달해야 한다.
- 정적 지역 변수나 전역 변수와 같이 함수가 반환된 후에도 저장 공간이 유지되는 경우만 주소를 반환한다.
```c
// 1. 값을 넘겨주는 경우
int a = 10;
func(a);
void func(int b); //호출되는 함수

// 2. 값을 반환 받는 경우
int a; 
a = func(); 
return b; //호출되는 함수

// 3. 주소를 넘겨주는 경우
int a = 10;
func(&a);
void func(int *p); //호출되는 함수

// 4. 주소를 반환 받는 경우
int *p;
p = func();

//호출되는 함수
int b = 10;
return &b;
```
16-1. 다차원 배열
- 2차원 배열 요소는 행 첨자와 열 첨자로 쓰며 0부터 시작한다.
- 2차원 배열의 초기화는 중괄호를 두 번 사용한다.
- 2차원 배열은 주로 2중 for문으로 처리하여 행의 수와 열의 수만큼 반복한다.
- 2차원 char 배열의 초기화는 중괄호 안에 여러개의 문자열로 초기화 할 수 있다.
- 3차원 배열은 2차원 배열에 면을 더해 면, 행, 열로 이루어진다.

16-2. 포인터 배열
- 포인터 배열을 선언하고 사용하는 방법은 일반 배열과 같다.
- char 포인터 배열을 이용하면 여러 개의 문자열을 다루기에 편하다.
- 포인터 배열을 사용하면 1차원 배열을 모아 2차원 배열처럼 쓸 수 있다.

17-1. 이중 포인터와 배열 포인터
- 포인터도 하나의 변수이므로 그 주소가 있다.
- 이중 포인터에 간접 참조 연산자(*)를 사용하면 단일 포인터가 된다.
- 2차원 배열의 배열명은 첫 번 째 부분 배열의 주소가 된다.
- 배열 포인터에 간접 참조 연산자(*)를 사용하면 가리키는 배열이 된다.

17-2. 함수 포인터와 void 포인터
- 함수명의 의미부터 보자면 함수명은 함수 정의가 있는 메모리의 시작 주소다.
- 함수 포인터에 함수명을 대입하면 함수처럼 호출할 수 있다.
- void 포인터에는 임의의 주소를 저장할 수 있다.
- void 포인터는 간접 참조 연산과 주소에 대한 정수 연산이 불가능 하다.

18-1. 동적 할당 함수
- 동적 할당한 공간은 변수와 달리 이름이 없으므로 포인터에 주소를 대입하여 사용한다.
- 동적 할당을 요청한 후에는 제대로 할당되었는지 반환값을 확인해야 한다.
- 사용이 끝난 동적 할당 공간은 재활용을 위해 반환한다.
- 동적 할당한 저장 공간을 배열처럼 쓸 때는 포인터가 배열명의 역할을 한다.
- calloc 함수는 동적 할당한 저장 공간을 0으로 초기화 하고, realloc 함수는 크기를 바꿔 재할당 한다.
```c
//size 바이트 수 만큼 할당하고 시작 위치 반환
malloc : void *malloc(unsigned int size); 

//(count * size)바이트 수 만큼 할당하고 0으로 초기화 후 시작 위치 반환
calloc : void *calloc(unsigned int count, unsigned int size); 

//p가 연결한 영역의 크기를 size 바이트의 크기로 조정하고 시작 위치 반환
realloc : void *realloc(void  *p, unsigned int size);

//p가 연결한 영역 반환
free : void free(void *p)'
```

18-2. 동적 할당 저장 공간의 활용
- 입력하는 문자열의 길이에 딱 맞는 가변 메모리 공간을 확보할 수 있다.
- 명령행 인수의 구현 방식을 이해할 수 있다.
- 동적 할당 방식이 복잡할수록 할당 영역은 빠짐없이 반환해야 한다.

19-1. 구조체
- 구조체 변수는 구조체 선언 후에 멤버 접근 연산자(.)으로 원하는 멤버의 이름을 직접 사용한다.
- 구조체는 배열, 포인터, 다른 구조체 등도 멤버로 넣어 확장할 수 있다.
- 자료형이 같은 구조체 변수는 대입 연산이 가능하며 함수의 매개변수에 쓸 수 있다.

19-2. 구조체 활용, 공용체, 열거형
- 구조체 변수의 주소를 포인터에 저장하면 포인터로 멤버를 사용할 수 있다.
- 구조체도 자료형이 같으면 배열을 선언할 수 있다.
- 자기 참조 구조체는 연결 리스트를 만들 때 사용한다.
- 공용체 변수의 크기는 멤버의 수에 비례하지 않는다.
- 열거형의 멤버는 열거형 변수에 저장될 값들을 나열한다.

20-1. 파일 열기와 입출력
- fopen 함수가 파일을 열면 메모리에 스트림 파일을 만든다.
- 스트림 파일은 프로그램과 장치를 연결하여 버퍼에 데이터를 저장한다.
- 파일 입출력 함수는 스트림 파일을 통해 입출력을 수행한다.
- fclose 함수는 개방한 스트림 파일을 메모리에서 제거한다.

20-2. 다양한 파일 입출력 함수
- fgets 함수는 한 줄씩 입력하여 데이터를 모두 읽으면 NULL을 반환한다.
- fscanf  함수와 fprintf 함수는 scanf, printf 함수와 사용법이 비슷하다.
- fflush 함수는 출력할 때 사용며 스트림 버퍼의 내용을 즉시 장치로 기록한다.
- fread와 fwrite 함수는 데이터의 크기를 지정해 입출력할 수 있다.

21-1. 전처리 지시자
- #include 는 지정한 파일을 소스 코드에 적절하게 포함 시킨다.
- #define 는 매크로 상수와 매크로 함수를 만들 때 사용한다.
- #if, #else, #elif, #ifdef, #ifndef, #endif 는 조건부 컴파일을 사용하는 조건부 컴파일 지시자다.
- #pragma, #error, #line 등 컴파일 과정을 돕는 지시자가 있다.
- defined, #, ##은 전처리 지시자와 함께 사용하는 전처리 연산자다.

21-2. 분할 컴파일
- 모듈은 독립적으로 컴파일과 디버깅이 가능한 하나의 파일이다.
- 분할 컴파일된 개체 파일은 링크 되어 하나의 프로그램(파일)이 된다.
- 파일간 의 전역 변수를 공유할 때는 extern을 쓰고, 공유를 제한할 때는 static를 쓴다.
- 헤더 파일의 중복 포함 문제는 조건부 컴파일 지시자로 해결할 수 있다.