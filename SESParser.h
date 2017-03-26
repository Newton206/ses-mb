#pragma once
#include <iostream>
#include <string>
#include "tinyxml.h"

class SESParser
{
public:
	SESParser(std::string _path);
	~SESParser();

private:
	SESParser(){};
	
public:
	// Vaildate funtion
	// int validate();
	
	void print_structure() const;
	
	//
	void traverse(TiXmlElement* element);
	void traverse_manager();
	
private:
	TiXmlDocument Doc;
	
	// a cursor point for pointing current node position
	
	
	// print single node
	TiXmlElement* current_element;/* current node object */
};

// int a;       <=>  SESParser a;  // private: SESParser();
// int a = 10;  <=>  SESParser a("basic.xml");
// a = a;		<=>  a = a;  <= operator= overloading
// int b = a;   <=>  SESParser b = a; <= Copy Constructor