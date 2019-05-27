//
// Created by bebecito on 26/05/2019.
//
#include "catch.hpp"
#include "Unionfind.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
SCENARIO("UNION FIND")
{
     GIVEN("MAKING SET")
     {
         WHEN(" TAKES VALUES")
         {
             Unionfind obj(5);
             THEN("MAKES UNION")
             {
                 obj.Union(4, 2);
                 REQUIRE(obj.find(4)==obj.find(2));
             }
             THEN("MAKES UNION")
             {
                 obj.Union(0, 1);
                 REQUIRE(obj.find(2)!=obj.find(1));
             }
         }
     }


}