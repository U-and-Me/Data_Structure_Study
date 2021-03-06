// 메모리
/*
	데이터를 보관하는 장소 - 8bits로 주소가 지정됨
 	모든 변수는 주소를 가짐
*/

// 포인터
/*
	메모리 주소를 값으로 가지는 변수
	type-name * variable-name ;

	연산자 & => 해당 변수의 주소를 추출하는 연산자
* /


// 배열
/*
	배열의 이름은 배열의 시작 주소를 저장하는 포인터 변수
		- 값을 변경할 수 없다
*/

// 배열과 포인터
/*
	*a 와 a[0]은 동일한 의미
	a[1]은 *(a+1)과 동일 => a[i] == *(a+i)
*/

// 동적 메모리 할당
/*
	변수를 선언하는 대신 프로그램의 요청으로 메모리를 할당하는 것

	malloc()을 호출하여 동적메모리 할당을 요청하면 요구하는 크기의 메모리를
	할당하고 그 시작 주소를 반환함

	* malloc()
	 반환하는 주소 타입 - void *  => 정수를 저장하기 위해서 (int *)로 변환
	 매개변수 - byte단위로 지정 => 할당받을 메모리의 크기 지정

	동적으로 할당된 배열은 공간이 부족할 경우 더 큰 배열을 할당하여 사용할 수 있음
*/