#include <iostream>
#include "tinyxml.h"
#include "SESParser.h"

int main()
{
 //   TiXmlDocument doc( "basic.xml" );
	// bool loadOkay = doc.LoadFile();

	// if ( !loadOkay )
	// {
	// 	printf( "Could not load test file 'demotest.xml'. Error='%s'. Exiting.\n", doc.ErrorDesc() );
	// 	exit( 1 );
	// }
	
	// //doc.Print(stdout);
	
	// TiXmlNode* node = 0;
	// TiXmlElement* SESElement = 0;
	// TiXmlElement* SystemElement = 0;
	// TiXmlElement* Element = 0;
	// TiXmlElement* SubElement = 0;
	
	// // node = doc.FirstChild( "SystemEntityStructure" );
	// // SESElement = node->ToElement();
	// SESElement = doc.FirstChildElement("SystemEntityStructure");
	// SystemElement = SESElement->FirstChildElement();	
	// Element = SystemElement->FirstChildElement("AttributeNodeList");
	
	// SubElement = Element->FirstChildElement("Attribute");
	// SubElement->Print(stdout, 0);
	// std::cout<<std::endl;

	// while(SubElement = SubElement->NextSiblingElement("Attribute"))
	// {
	// 	SubElement->Print(stdout, 0);
	// 	std::cout<<std::endl;
	// }
	
	SESParser parser("basic.xml");
	parser.traverse_manager();
	
    return 0;
}