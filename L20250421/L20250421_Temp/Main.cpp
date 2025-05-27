#include <iostream>
#include <vector>
#include <list>	// 추가, 삭제 빠른데, 검색 비용이 비싸다 (Linked List 기법, 포인터 주소로 찾아가는 구조라)
#include <map>
#include <set>
#include <stack>
#include <queue>


#include "World.h"
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "Player.h"
#include "Floor.h"
#include "Wall.h"

using namespace std;

// STL, Standard Template Library
// 
// (C++ -> template) == (java, C# -> Generic), (C++ -> container) == (java -> collection) 용어가 언어마다 조금 다를수잇다


//meta programming
//C++ -> complier -> (template) + make -> object : 단점 디버깅할때 안보여줌, 컴파일한 이후 make 생성하기 때문에 원인파악을 못함


// 보통 템플릿 클래스를 작성할때 헤더파일에다가 쓰지않고 cpp에 몰아서 구현한다. <vector> 컨테이너도 보면 헤더파일에 탬플릿 문법을 쓰진 않았다.

//오버로딩은 (1. 함수이름이 똑같고 2. 원본과 인자 타입이 달라야만 한다.)
//template <typename T>
//T Add(T A, T B)
//{
//	return A + B;
//}


int main()
{

	UWorld* MyWorld = new UWorld();

	//MyWorld->SpawnActor(new ASlime());
	//MyWorld->SpawnActor(new AGoblin());
	//
	////Player, Boar
	//MyWorld -> SpawnActor(new APlayer());
	MyWorld -> SpawnActor(new ABoar());
	//MyWorld->SpawnActor(new AWall());
	//MyWorld->SpawnActor(new AFloor());

	MyWorld->Run();

	delete MyWorld;
	MyWorld = nullptr;


	return 0;
}