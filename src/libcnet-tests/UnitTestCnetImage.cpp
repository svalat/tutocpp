/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetImage.h"
#include "CnetCppUnitExtra.h"
#include <stdio.h>

const unsigned int IMAGE_WIDTH = 120;
const unsigned int IMAGE_HEIGHT = 60;

const char CNET_TEST_TO_ASCII_EXPECTED[] = "+----------------+\n\
|################|\n\
|#$$$$$$$$$$$$$$$|\n\
|$$88888888888888|\n\
|888&&&&&&&&&&&&&|\n\
|&&&&%%%%%%%%%%%%|\n\
|%%%%%00000000000|\n\
|000000OOOOOOOOOO|\n\
|OOOOOOO=========|\n\
|========????????|\n\
|?????????1111111|\n\
|1111111111!!!!!!|\n\
|!!!!!!!!!!!;;;;;|\n\
|;;;;;;;;;;;;,,,,|\n\
|,,,,,,,,,,,,,...|\n\
|..............  |\n\
|                |\n\
+----------------+\n";

const char CNET_TEST_TO_ASCII_EXPECTED2[] = "################\n\
#$$$$$$$$$$$$$$$\n\
$$88888888888888\n\
888&&&&&&&&&&&&&\n\
&&&&%%%%%%%%%%%%\n\
%%%%%00000000000\n\
000000OOOOOOOOOO\n\
OOOOOOO=========\n\
========????????\n\
?????????1111111\n\
1111111111!!!!!!\n\
!!!!!!!!!!!;;;;;\n\
;;;;;;;;;;;;,,,,\n\
,,,,,,,,,,,,,...\n\
..............  \n\
                \n";

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetImage );

void UnitTestCnetImage::setUp()
{
	this->image=new CnetImage(IMAGE_WIDTH,IMAGE_HEIGHT,CNET_WHITE_COLOR);
}

void UnitTestCnetImage::tearDown()
{
	delete this->image;
}

void UnitTestCnetImage::test_constructor_width_height_color()
{
	//setup
	CnetImage img1(IMAGE_WIDTH,IMAGE_HEIGHT,CNET_WHITE_COLOR);
	CnetImage img2(IMAGE_WIDTH,IMAGE_HEIGHT);

	//test
	CPPUNIT_ASSERT_EQUAL(IMAGE_WIDTH,img1.getWidth());
	CPPUNIT_ASSERT_EQUAL(IMAGE_HEIGHT,img1.getHeight());
	CPPUNIT_ASSERT_EQUAL(CNET_WHITE_COLOR,img1.getPixel(1,1));

	CPPUNIT_ASSERT_EQUAL(IMAGE_WIDTH,img2.getWidth());
	CPPUNIT_ASSERT_EQUAL(IMAGE_HEIGHT,img2.getHeight());
	CPPUNIT_ASSERT_EQUAL(CNET_WHITE_COLOR,img2.getPixel(1,1));
}

void UnitTestCnetImage::test_constructor_cnet_image()
{
	//setup
	CnetImage img(*this->image);
	//test
	CPPUNIT_ASSERT_EQUAL(IMAGE_WIDTH,img.getWidth());
	CPPUNIT_ASSERT_EQUAL(IMAGE_HEIGHT,img.getHeight());
	CPPUNIT_ASSERT_EQUAL(CNET_WHITE_COLOR,img.getPixel(1,1));
}

void UnitTestCnetImage::test_get_pixel()
{
	CnetImage expected = load_image_from_file("/CnetImage/test_get_pixel.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(CNET_WHITE_COLOR,expected.getPixel(10,10));
	CPPUNIT_ASSERT_EQUAL(CNET_WHITE_COLOR,expected.getPixel(20,20));
	CPPUNIT_ASSERT_EQUAL(CNET_GRAY_COLOR,expected.getPixel(50,50));
	CPPUNIT_ASSERT_THROW(image->getPixel(1024,50),CnetOutOfBoundException);
	CPPUNIT_ASSERT_THROW(image->getPixel(40,1024),CnetOutOfBoundException);
}

void UnitTestCnetImage::test_set_pixel()
{
	//process
	image->setPixel(50,50,CNET_GRAY_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_set_pixel.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_set_pixel.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);

	CPPUNIT_ASSERT_THROW(image->setPixel(1024,50,CNET_BLACK_COLOR),CnetOutOfBoundException);
	CPPUNIT_ASSERT_THROW(image->setPixel(40,1024,CNET_BLACK_COLOR),CnetOutOfBoundException);
}

void UnitTestCnetImage::test_clear()
{
	//process
	image->clear(CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_clear.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_clear.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_horiz()
{
	//process
	image->line(10,10,100,10,CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_lines_horiz.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_lines_horiz.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_horiz_invert()
{
	//process
	image->line(100,10,10,10,CNET_BLACK_COLOR);
	CnetImage expected = load_image_from_file("/CnetImage/test_lines_horiz.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_vert()
{
	//process
	image->line(10,10,10,50,CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_line_vert.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_vert.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_vert_invert()
{
	//process
	image->line(10,50,10,10,CNET_BLACK_COLOR);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_vert.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_diag()
{
	//process
	image->line(10,10,50,50,CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_line_diag.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_diag.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_diag_invert()
{
	//process
	image->line(50,50,10,10,CNET_BLACK_COLOR);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_diag.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_diag2()
{
	//process
	image->line(10,50,50,10,CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_line_diag2.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_diag2.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_diag2_invert()
{
	//process
	image->line(50,10,10,50,CNET_BLACK_COLOR);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_diag2.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_point()
{
	//process
	image->line(10,10,10,10,CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_line_point.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_point.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_line_out()
{
	//process
	image->line(80,30,200,200,CNET_BLACK_COLOR);
	//save_image_to_file(*image,"/CnetImage/test_line_out.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_line_out.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
	//CPPUNIT_ASSERT_THROW(image->line(500,500,1000,1000,CNET_BLACK_COLOR),CnetOutOfBoundException);
}

void UnitTestCnetImage::test_square()
{
	//process
	image->square(10,10,10,10);
	//save_image_to_file(*image,"/CnetImage/test_square.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_square.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_square_out_right_down()
{
	//process
	image->square(115,55,10,10);
	//save_image_to_file(*image,"/CnetImage/test_square_out_right_down.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetImage/test_square_out_right_down.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_paint_image()
{
	//process
	CnetImage square(40,40);
	square.square(0,0,40,40);
	image->paintImage(square,20,10);
	//save_image_to_file(*image,"/CnetImage/test_paint_image.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
	
}

void UnitTestCnetImage::test_paint_image_out()
{
	//process
	CnetImage square(40,40);
	square.square(0,0,40,40);
	image->paintImage(square,100,40);
	//save_image_to_file(*image,"/CnetImage/test_paint_image_out.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image_out.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_paint_image_out2()
{
	//process
	CnetImage square(40,40);
	square.square(0,0,40,40);
	image->paintImage(square,-20,-20);
	//save_image_to_file(*image,"/CnetImage/test_paint_image_out2.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image_out2.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_getWidth()
{
	CPPUNIT_ASSERT_EQUAL(IMAGE_WIDTH,image->getWidth());
}

void UnitTestCnetImage::test_getHeight()
{
	CPPUNIT_ASSERT_EQUAL(IMAGE_HEIGHT,image->getHeight());
}

void UnitTestCnetImage::test_pass_to_function()
{
	pass_to_function_by_copy(*image);
}

CnetImage UnitTestCnetImage::pass_to_function_by_copy(CnetImage img)
{
	return img;
}

void UnitTestCnetImage::test_to_ascii()
{
	//setup
	CnetImage img(16,16);
	CnetColor color=0;
	
	for (unsigned int y=0;y<16;y++)
		for (unsigned int x=0;x<16;x++)
			img.setPixel(x,y,color++);
	//printf("%s",img.toAscii(true).getCStr());
	CPPUNIT_ASSERT_EQUAL(CNET_TEST_TO_ASCII_EXPECTED,img.toAscii(true));
	CPPUNIT_ASSERT_EQUAL(CNET_TEST_TO_ASCII_EXPECTED2,img.toAscii(false));
}

void UnitTestCnetImage::test_operator_equal_equal_cnet_image()
{
	//setup
	CnetImage img(*image);
	CnetImage img2(100,100);

	CPPUNIT_ASSERT(*image==img);
	CPPUNIT_ASSERT(!(*image==img2));
}

void UnitTestCnetImage::test_operator_not_equal_cnet_image()
{
	//setup
	CnetImage img(*image);
	CnetImage img2(100,100);

	CPPUNIT_ASSERT(!(*image!=img));
	CPPUNIT_ASSERT(*image!=img2);
}

void UnitTestCnetImage::test_unit_test_save_and_load_image()
{
	image->setPixel(20,20,CNET_BLACK_COLOR);
	save_image_to_file(*image,"/CnetImage/test_save_methode_for_test.bincnetimage");
	CnetImage res=load_image_from_file("/CnetImage/test_save_methode_for_test.bincnetimage");

	CPPUNIT_ASSERT_EQUAL(*image,res);
}

void UnitTestCnetImage::test_paint_image_square()
{
	//process
	CnetImage square(40,40);
	CnetSquare zone0={0,0,40,40};
	CnetSquare zone1={0,0,20,20};
	CnetSquare zone2={20,20,20,20};
	square.square(0,0,40,40);
	image->paintImage(square,2,2,zone0);
	image->paintImage(square,50,2,zone1);
	image->paintImage(square,50,2,zone2);
	//save_image_to_file(*image,"/CnetImage/test_paint_image_square.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image_square.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
	
}

void UnitTestCnetImage::test_paint_image_square_out()
{
	//process
	CnetImage square(40,40);
	square.square(0,0,40,40);
	CnetSquare zone0={0,0,40,40};
	image->paintImage(square,100,40,zone0);
	//save_image_to_file(*image,"/CnetImage/test_paint_image_square_out.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image_square_out.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_paint_image_square_out2()
{
	//process
	CnetImage square(40,40);
	square.square(0,0,40,40);
	CnetSquare zone0={0,0,40,40};
	image->paintImage(square,-20,-20,zone0);
	//save_image_to_file(*image,"/CnetImage/test_paint_image_square_out2.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image_square_out2.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetImage::test_paint_image_square_out3()
{
	//process
	CnetImage square(40,40);
	CnetSquare zone0={20,20,40,40};
	CnetSquare zone1={-2,-2,40,40};
	square.square(0,0,40,40);
	image->paintImage(square,2,2,zone0);
	image->paintImage(square,50,2,zone1);
	//save_image_to_file(*image,"/CnetImage/test_paint_image_square_out3.bincnetimage",true);
	//CPPUNIT_FAIL("test");
	CnetImage expected = load_image_from_file("/CnetImage/test_paint_image_square_out3.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
	
}
