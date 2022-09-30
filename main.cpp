#include <iostream>

int main()
{

	// char c[6]{ 'd', 'o', 'g', 'g', 'y' };

	char c[6];

	c[0] = 'd';
	c[1] = 'o';
	c[2] = 'g';
	c[3] = 'g';
	c[4] = 'y';
	// 초기화가 아닌 일반 대입


 	std::cout << c << std::endl;
	
	char* pC;
	pC = c;
	// pC = &c[0]; 와 같은 표기

	std::cout << pC << std::endl;



	// null character의 필요성이다!!
	// 배열의 크기를 알려주기 위해, 즉 배열의 끝을 알려주기 위해
	// null character가 있는 것이다.


	// 그래서 문자열 리터럴 " " 이 등장한 것이다.
	// " "에는 \0이 자동적으로 포함되어 있다.
	// char c[6] = { "doggy" };


	// char * pC2 { "doggy" }; 은 안된다.
	// 위의 포인터는 char 1개만 가리킬 수 있기 때문이다.
	// 배열 -> 포인터 (O)
	// 포인터 -> 배열 (X)

	/*	"const char *" 형식의 값을 사용하여
		 "char *" 형식의 엔터티를 초기화할 수 없습니다. */
	//    라고 에러가 뜬다.
			
	//  entity = 개체 != 객체
	//  배열의 리터럴은 const char *로 만들어진다
	//  const char * 타입인 리터럴은 이름이 없기에 역참조로 값을 못바꿈

	// const char pC2 { "doggy" }; 는 가능하다
	// 참조는 가능하지만, 역참조로 값을 바꿀 수는 없다.
}