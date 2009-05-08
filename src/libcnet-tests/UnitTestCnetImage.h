/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_H
#define UNIT_TEST_CNET_H

#include "CnetImage.h"
#include <cppunit/extensions/HelperMacros.h>

class UnitTestCnetImage : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetImage );
	CPPUNIT_TEST( test_constructor_width_height_color );
	CPPUNIT_TEST( test_constructor_cnet_image );
	CPPUNIT_TEST( test_get_pixel );
	CPPUNIT_TEST( test_set_pixel );
	CPPUNIT_TEST( test_clear );
	CPPUNIT_TEST( test_line_horiz );
	CPPUNIT_TEST( test_line_horiz_invert );
	CPPUNIT_TEST( test_line_vert );
	CPPUNIT_TEST( test_line_vert_invert );
	CPPUNIT_TEST( test_line_diag );
	CPPUNIT_TEST( test_line_diag_invert );
	CPPUNIT_TEST( test_line_diag2 );
	CPPUNIT_TEST( test_line_diag2_invert );
	CPPUNIT_TEST( test_line_point );
	CPPUNIT_TEST( test_line_out );
	CPPUNIT_TEST( test_square );
	CPPUNIT_TEST( test_square_out_right_down );
	CPPUNIT_TEST( test_paint_image );
	CPPUNIT_TEST( test_paint_image_out );
	CPPUNIT_TEST( test_paint_image_out2 );
	CPPUNIT_TEST( test_paint_image_square );
	CPPUNIT_TEST( test_paint_image_square_out );
	CPPUNIT_TEST( test_paint_image_square_out2 );
	CPPUNIT_TEST( test_paint_image_square_out3 );
	CPPUNIT_TEST( test_getWidth );
	CPPUNIT_TEST( test_getHeight );
	CPPUNIT_TEST( test_pass_to_function );
	CPPUNIT_TEST( test_to_ascii );
	CPPUNIT_TEST( test_operator_equal_equal_cnet_image );
	CPPUNIT_TEST( test_operator_not_equal_cnet_image );
	CPPUNIT_TEST( test_unit_test_save_and_load_image );
	CPPUNIT_TEST_SUITE_END();
	
	public:
		void setUp();
		void tearDown();
		void test_constructor_width_height_color();
		void test_constructor_cnet_image();
		void test_get_pixel();
		void test_set_pixel();
		void test_clear();
		void test_line_horiz();
		void test_line_horiz_invert();
		void test_line_vert();
		void test_line_vert_invert();
		void test_line_diag();
		void test_line_diag_invert();
		void test_line_diag2();
		void test_line_diag2_invert();
		void test_line_point();
		void test_line_out();
		void test_square();
		void test_square_out_right_down();
		void test_paint_image();
		void test_paint_image_out();
		void test_paint_image_out2();
		void test_paint_image_square();
		void test_paint_image_square_out();
		void test_paint_image_square_out2();
		void test_paint_image_square_out3();
		void test_getWidth();
		void test_getHeight();
		void test_pass_to_function();
		void test_to_ascii();
		void test_operator_equal_equal_cnet_image();
		void test_operator_not_equal_cnet_image();
		void test_unit_test_save_and_load_image();
	protected:
		CnetImage * image;
	private:
		CnetImage pass_to_function_by_copy(CnetImage img);
};

#endif
