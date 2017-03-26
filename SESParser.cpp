#include "SESParser.h"

SESParser::SESParser(std::string _path)
	:Doc( _path.c_str() )
{
	bool loadOkay = Doc.LoadFile();

	if ( !loadOkay )
	{
	    std::cout<<"Could not load test file "<< _path.c_str() <<" Error='"<< Doc.ErrorDesc() <<"'. Exiting."<<std::endl;
		exit( 1 );
	}
}

SESParser::~SESParser()
{
}

void SESParser::print_structure() const
{
}

void SESParser::traverse(TiXmlElement* element)
{
	//traverse and print current level element
	while(element = element->NextSiblingElement())
	{
		element->Print(stdout, 0);
		std::cout<<std::endl;
	}
}

void SESParser::traverse_manager()
{
	char input;
	TiXmlHandle docHandle( &Doc );
	current_element = docHandle.FirstChildElement();
	traverse(current_element);
	
	do{
		std::cin>>input;
		switch(input)
		{
			case 'u':
				current_element = current_element->Parent()->ToElement();
				traverse(current_element);
				break;
			case 'd':
				current_element = current_element->FirstChildElement();
				traverse(current_element);
				break;
			case 's':
				current_element = current_element->NextSiblingElement();
				traverse(current_element);
				break;
			case 'e':
				break;
		}
	}while(input != 'e');
}

// const 멤버 함수
// const 키워드로 멤버 함수를 선언하면 함수가 자신이 호출되는 개체를 수정하지 않는 "읽기 전용" 함수로 지정됩니다. 상수 멤버 함수는 비정적 데이터 멤버를 수정하거나 상수가 아닌 멤버 함수를 호출할 수 없습니다. 상수 멤버 함수를 선언하려면 인수 목록의 닫는 괄호 뒤에 const 키워드를 배치합니다. const 키워드는 선언과 정의 모두에서 필요합니다.