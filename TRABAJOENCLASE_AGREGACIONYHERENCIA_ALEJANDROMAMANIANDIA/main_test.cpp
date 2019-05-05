//
// Created by albin on 04/05/2019.
//
#include <iostream>
#include <string>
#include "catch.hpp"
#include "Library.h"
#include "Volume.h"
#include "Book.h"
#include "Magazine.h"
SCENARIO("Aggregation and Inheritance in C++")
{
    GIVEN("VOLUME OF BOOKS AND MAGAZINES")
    {
        WHEN("INSTANCE A BOOK")
        {
            Book* sample_book = new Book(1,"PHYSICS", 1);
            THEN("BOOK DETAILS")
            {
                cout<<"BOOKS"<< endl;
                sample_book-> show();

            }
        }
        WHEN("INSTANCE A MAGAZINE")
        {
            Magazine* sample_magazine = new Magazine(1,"BABYS", 2);
            THEN("MAGAZINE DETAILS")
            {
                cout<<"MAGAZINE"<< endl;
                sample_magazine-> show();

            }
        }

    }
    GIVEN("LIBRARY")
    {
        WHEN("ADDING MANY BOOKS AND MAGAZINES")
        {
            bool ok = true;
            Library UTEC_library(3,3);
            string names[]={"Rome", "300 SPARTANS", "PAIN AND GLORY", "PEOPLE", "DC", "COMICS NEWS"};

            for(int i=1; i<=6; i+=2)
            {
                Book *book=new Book(i/2 + 1, names[i/2], i);
                Magazine *magazine=new Magazine(i/2 + 1, names[1+ i/2], i+1);
                ok = ok && UTEC_library.include(magazine);
                ok = ok && UTEC_library.include(book);
            }
            THEN("LIBRARY INFORMATION")
            {
                UTEC_library.show_library();
                REQUIRE(ok);
            }

        }
    }
}

