// NordeaTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/xml_parser.hpp"
#include "boost/foreach.hpp"
#include "XMLProcessor.h"



int main()
{
	XMLProcessor m;
	m.findfiles("E:\\test\\");
	m.processFile();
    return 0;
}

