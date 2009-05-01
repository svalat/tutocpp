<?xml version='1.0' encoding='ISO-8859-1' standalone='yes' ?>
<tagfile>
  <compound kind="page">
    <name>index</name>
    <title></title>
    <filename>index</filename>
  </compound>
  <compound kind="file">
    <name>CnetBenchmarkImage.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/benchmark/</path>
    <filename>a00023</filename>
    <includes id="a00024" name="CnetBenchmarkImage.h" local="yes" imported="no">CnetBenchmarkImage.h</includes>
    <includes id="a00042" name="CnetImage.h" local="yes" imported="no">CnetImage.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetBenchmarkImage.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/benchmark/</path>
    <filename>a00024</filename>
    <includes id="a00026" name="CnetBenchmarkRunner.h" local="yes" imported="no">CnetBenchmarkRunner.h</includes>
    <class kind="class">CnetBenchmarkImage</class>
  </compound>
  <compound kind="file">
    <name>CnetBenchmarkRunner.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/benchmark/</path>
    <filename>a00025</filename>
    <includes id="a00026" name="CnetBenchmarkRunner.h" local="yes" imported="no">CnetBenchmarkRunner.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetBenchmarkRunner.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/benchmark/</path>
    <filename>a00026</filename>
    <class kind="class">CnetBenchmarkRunner</class>
  </compound>
  <compound kind="file">
    <name>CnetCppUnitExtra.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00027</filename>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <namespace>CppUnit</namespace>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>43a56bf21b48b263e0188239b7e715eb</anchor>
      <arglist>(const char *expected, const CnetString &amp;actual, CppUnit::SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>78e86c84a67a243000dc284bde7f9452</anchor>
      <arglist>(const char *expected, const std::string &amp;actual, CppUnit::SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>4aecaae529835a99cb8728951a79b02a</anchor>
      <arglist>(int expected, unsigned int actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>e62fedcd21ddfbf8f662b0fc08c21620</anchor>
      <arglist>(CnetColor expected, CnetColor actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>53ccc4ea6b0b4434e5c7278ef36290ef</anchor>
      <arglist>(CnetImage expected, CnetImage actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>save_image_to_file</name>
      <anchorfile>a00027.html</anchorfile>
      <anchor>ee90eb978af8692d19ea20288433b1b9</anchor>
      <arglist>(const CnetImage &amp;image, CnetString filename, bool verbose, const char *dataPath)</arglist>
    </member>
    <member kind="function">
      <type>CnetImage</type>
      <name>load_image_from_file</name>
      <anchorfile>a00027.html</anchorfile>
      <anchor>79d9eef23fb256e9c6b862bbbb051f7c</anchor>
      <arglist>(CnetString filename, const char *dataPath)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>CnetCppUnitExtra.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00028</filename>
    <includes id="a00044" name="CnetString.h" local="yes" imported="no">CnetString.h</includes>
    <includes id="a00042" name="CnetImage.h" local="yes" imported="no">CnetImage.h</includes>
    <namespace>CppUnit</namespace>
    <member kind="define">
      <type>#define</type>
      <name>CNET_TEST_IMAGE_VERBOSE_LOAD</name>
      <anchorfile>a00028.html</anchorfile>
      <anchor>ed71a1f873997a092439dedc3e669db6</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>CNET_TEST_IMAGE_VERBOSE_SAVE</name>
      <anchorfile>a00028.html</anchorfile>
      <anchor>7f9a3a2eb5e5cd729126c647f1bce130</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>43a56bf21b48b263e0188239b7e715eb</anchor>
      <arglist>(const char *expected, const CnetString &amp;actual, CppUnit::SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>78e86c84a67a243000dc284bde7f9452</anchor>
      <arglist>(const char *expected, const std::string &amp;actual, CppUnit::SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>4aecaae529835a99cb8728951a79b02a</anchor>
      <arglist>(int expected, unsigned int actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>e62fedcd21ddfbf8f662b0fc08c21620</anchor>
      <arglist>(CnetColor expected, CnetColor actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>53ccc4ea6b0b4434e5c7278ef36290ef</anchor>
      <arglist>(CnetImage expected, CnetImage actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>save_image_to_file</name>
      <anchorfile>a00028.html</anchorfile>
      <anchor>e71a0c0b1c558771d9e20fdd5c5b4b5c</anchor>
      <arglist>(const CnetImage &amp;image, CnetString filename, bool verbose=false, const char *dataPath=CNET_DATA_TEST_PATH)</arglist>
    </member>
    <member kind="function">
      <type>CnetImage</type>
      <name>load_image_from_file</name>
      <anchorfile>a00028.html</anchorfile>
      <anchor>0c3e3cbe47f917aa3a3e4d5e7ff84851</anchor>
      <arglist>(CnetString filename, const char *dataPath=CNET_DATA_TEST_PATH)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>CnetEvent.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase/</path>
    <filename>a00029</filename>
    <includes id="a00030" name="CnetEvent.h" local="yes" imported="no">CnetEvent.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetEvent.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase/</path>
    <filename>a00030</filename>
    <class kind="class">CnetEvent</class>
  </compound>
  <compound kind="file">
    <name>CnetEventMock.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00031</filename>
    <includes id="a00032" name="CnetEventMock.h" local="yes" imported="no">CnetEventMock.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetEventMock.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00032</filename>
    <includes id="a00030" name="CnetEvent.h" local="yes" imported="no">CnetEvent.h</includes>
    <class kind="class">CnetEventMockDefaultImpl</class>
    <class kind="class">CnetEventMockChecker</class>
  </compound>
  <compound kind="file">
    <name>CnetExceptions.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00033</filename>
    <includes id="a00034" name="CnetExceptions.h" local="yes" imported="no">CnetExceptions.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetExceptions.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00034</filename>
    <class kind="class">CnetException</class>
    <class kind="class">CnetOutOfBoundException</class>
    <class kind="class">CnetNullPointerException</class>
    <class kind="class">CnetNotFoundException</class>
  </compound>
  <compound kind="file">
    <name>CnetFont.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00035</filename>
    <includes id="a00036" name="CnetFont.h" local="yes" imported="no">CnetFont.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetFont.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00036</filename>
    <includes id="a00042" name="CnetImage.h" local="yes" imported="no">CnetImage.h</includes>
    <includes id="a00034" name="CnetExceptions.h" local="yes" imported="no">CnetExceptions.h</includes>
    <class kind="class">CnetFont</class>
  </compound>
  <compound kind="file">
    <name>CnetFontForTest.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00037</filename>
    <includes id="a00038" name="CnetFontForTest.h" local="yes" imported="no">CnetFontForTest.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetFontForTest.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00038</filename>
    <includes id="a00036" name="CnetFont.h" local="yes" imported="no">CnetFont.h</includes>
    <class kind="class">CnetFontForTest</class>
  </compound>
  <compound kind="file">
    <name>CnetFontSimple.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00039</filename>
    <includes id="a00040" name="CnetFontSimple.h" local="yes" imported="no">CnetFontSimple.h</includes>
    <includes id="a00049" name="font.h" local="yes" imported="no">font.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetFontSimple.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00040</filename>
    <includes id="a00036" name="CnetFont.h" local="yes" imported="no">CnetFont.h</includes>
    <class kind="class">CnetFontSimple</class>
  </compound>
  <compound kind="file">
    <name>CnetImage.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00041</filename>
    <includes id="a00042" name="CnetImage.h" local="yes" imported="no">CnetImage.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>CNET_REAPEAT_CHAR</name>
      <anchorfile>a00041.html</anchorfile>
      <anchor>4b1d1972911b86b2c78c82b5a10ad90d</anchor>
      <arglist>(c)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>min</name>
      <anchorfile>a00041.html</anchorfile>
      <anchor>bb702d8b501669a23aa0ab3b281b9384</anchor>
      <arglist>(x, y)</arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>max</name>
      <anchorfile>a00041.html</anchorfile>
      <anchor>c39d9cef6a5e030ba8d9e11121054268</anchor>
      <arglist>(x, y)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator==</name>
      <anchorfile>a00041.html</anchorfile>
      <anchor>4886e32bb68ac97c0c477cbeefcad18f</anchor>
      <arglist>(const CnetImage &amp;img1, const CnetImage &amp;img2)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>a00041.html</anchorfile>
      <anchor>0a1d948fb42c179caa629d84c289ec52</anchor>
      <arglist>(const CnetImage &amp;img1, const CnetImage &amp;img2)</arglist>
    </member>
    <member kind="variable">
      <type>const char</type>
      <name>CNET_COLOR_TO_ASCII</name>
      <anchorfile>a00041.html</anchorfile>
      <anchor>4a6f3b5a930b651a1b81c18c07944120</anchor>
      <arglist>[]</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>CnetImage.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00042</filename>
    <includes id="a00034" name="CnetExceptions.h" local="yes" imported="no">CnetExceptions.h</includes>
    <includes id="a00044" name="CnetString.h" local="yes" imported="no">CnetString.h</includes>
    <class kind="class">CnetImage</class>
    <member kind="typedef">
      <type>unsigned char</type>
      <name>CnetColor</name>
      <anchorfile>a00042.html</anchorfile>
      <anchor>c19ef9d286fd13e767c73dce83a6fbba</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const CnetColor</type>
      <name>CNET_WHITE_COLOR</name>
      <anchorfile>a00042.html</anchorfile>
      <anchor>3355fb0fe7cf2cdd0aae1fc743b0d094</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const CnetColor</type>
      <name>CNET_GRAY_COLOR</name>
      <anchorfile>a00042.html</anchorfile>
      <anchor>b784eedf76ea801a1ea671f907cadb91</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const CnetColor</type>
      <name>CNET_BLACK_COLOR</name>
      <anchorfile>a00042.html</anchorfile>
      <anchor>0f44bdd58f8f6a94e05c6696e9eba1d1</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>CnetString.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00043</filename>
    <includes id="a00044" name="CnetString.h" local="yes" imported="no">CnetString.h</includes>
    <member kind="function">
      <type>bool</type>
      <name>operator==</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>06afc0160708d4f5cdd0163b07d6c9bd</anchor>
      <arglist>(const CnetString &amp;value1, const CnetString value2)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator==</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>f28facaeb469395e14b615ad3a571b62</anchor>
      <arglist>(const char *value1, const CnetString value2)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator==</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>a07ef62ff9d0ac8c8cc64c00e14e06f5</anchor>
      <arglist>(const CnetString &amp;value1, const char *value2)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>34b06e3afe53ee8744629377cf3a1328</anchor>
      <arglist>(const CnetString &amp;value1, const CnetString value2)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>753b8232982b0f10ae4bc6466948289d</anchor>
      <arglist>(const char *value1, const CnetString value2)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator!=</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>6391c79fcee9be2b5d8cb7c6db7859b9</anchor>
      <arglist>(const CnetString &amp;value1, const char *value2)</arglist>
    </member>
    <member kind="function">
      <type>std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>889ad43a0ecd8160aeaf63aabec968a9</anchor>
      <arglist>(std::ostream &amp;out, const CnetString &amp;value)</arglist>
    </member>
    <member kind="function">
      <type>std::istream &amp;</type>
      <name>operator&gt;&gt;</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>c8b729dddd3511887e1c2704a3d4a4e8</anchor>
      <arglist>(std::istream &amp;in, CnetString &amp;value)</arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>operator+</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>fcec7565add554dc61a3a77624f5e512</anchor>
      <arglist>(const CnetString &amp;value1, const CnetString &amp;value2)</arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>operator+</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>39d1c06799906fc383daeef31934ca9d</anchor>
      <arglist>(const char *value1, const CnetString &amp;value2)</arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>operator+</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>e198b44fc583b91ac476a046c3c908fd</anchor>
      <arglist>(const CnetString &amp;value1, const char *value2)</arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>operator+</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>18bf721ef2398a2e939553da819acc6c</anchor>
      <arglist>(const CnetString &amp;value1, char value2)</arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>operator+</name>
      <anchorfile>a00043.html</anchorfile>
      <anchor>7b5d35d584dc144a336b6993511a4764</anchor>
      <arglist>(char value1, const CnetString &amp;value2)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>CnetString.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00044</filename>
    <includes id="a00034" name="CnetExceptions.h" local="yes" imported="no">CnetExceptions.h</includes>
    <class kind="class">CnetString</class>
  </compound>
  <compound kind="file">
    <name>CnetWidget.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase/</path>
    <filename>a00045</filename>
    <includes id="a00046" name="CnetWidget.h" local="yes" imported="no">CnetWidget.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetWidget.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase/</path>
    <filename>a00046</filename>
    <includes id="a00030" name="CnetEvent.h" local="yes" imported="no">CnetEvent.h</includes>
    <includes id="a00042" name="CnetImage.h" local="yes" imported="no">CnetImage.h</includes>
    <class kind="class">CnetWidget</class>
  </compound>
  <compound kind="file">
    <name>CnetWidgetForTest.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00047</filename>
    <includes id="a00048" name="CnetWidgetForTest.h" local="yes" imported="no">CnetWidgetForTest.h</includes>
  </compound>
  <compound kind="file">
    <name>CnetWidgetForTest.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00048</filename>
    <includes id="a00046" name="CnetWidget.h" local="yes" imported="no">CnetWidget.h</includes>
    <class kind="class">CnetWidgetForTest</class>
  </compound>
  <compound kind="file">
    <name>font.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet/</path>
    <filename>a00049</filename>
    <member kind="define">
      <type>#define</type>
      <name>SVFONT_CHAR_HEIGHT</name>
      <anchorfile>a00049.html</anchorfile>
      <anchor>fa39c91dd7ca751cce13c9ef3a3d790b</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SVFONT_HEIGHT</name>
      <anchorfile>a00049.html</anchorfile>
      <anchor>85bd2cf65aaafcb0b20cf9c98151926f</anchor>
      <arglist></arglist>
    </member>
    <member kind="define">
      <type>#define</type>
      <name>SVFONT_CHAR_WIDTH</name>
      <anchorfile>a00049.html</anchorfile>
      <anchor>081c155820b28c2aa077ccc5d354d5c5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const unsigned char</type>
      <name>SVFONT</name>
      <anchorfile>a00049.html</anchorfile>
      <anchor>781ee48be634f08b71f11eb0b5bc03a0</anchor>
      <arglist>[]</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>benchmark/main.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/benchmark/</path>
    <filename>a00050</filename>
    <includes id="a00024" name="CnetBenchmarkImage.h" local="yes" imported="no">CnetBenchmarkImage.h</includes>
    <member kind="function">
      <type>int</type>
      <name>main</name>
      <anchorfile>a00050.html</anchorfile>
      <anchor>0ddf1224851353fc92bfbff6f499fa97</anchor>
      <arglist>(int argc, char *argv[])</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>libcnetguibase-tests/main.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00051</filename>
    <member kind="function">
      <type>int</type>
      <name>main</name>
      <anchorfile>a00051.html</anchorfile>
      <anchor>0ddf1224851353fc92bfbff6f499fa97</anchor>
      <arglist>(int argc, char *argv[])</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>mainpage.dox</name>
    <path>/home/sebv/documents/c++/tutocpp/src/doc/</path>
    <filename>a00052</filename>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetEvent.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00053</filename>
    <includes id="a00054" name="UnitTestCnetEvent.h" local="yes" imported="no">UnitTestCnetEvent.h</includes>
    <includes id="a00032" name="CnetEventMock.h" local="yes" imported="no">CnetEventMock.h</includes>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <member kind="function">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_REGISTRATION</name>
      <anchorfile>a00053.html</anchorfile>
      <anchor>07e3336d9708cd7c140f86de740f4a69</anchor>
      <arglist>(UnitTestCnetEvent)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetEvent.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00054</filename>
    <includes id="a00030" name="CnetEvent.h" local="yes" imported="no">CnetEvent.h</includes>
    <includes id="a00032" name="CnetEventMock.h" local="yes" imported="no">CnetEventMock.h</includes>
    <class kind="class">UnitTestCnetEvent</class>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetFont.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00055</filename>
    <includes id="a00056" name="UnitTestCnetFont.h" local="yes" imported="no">UnitTestCnetFont.h</includes>
    <includes id="a00038" name="CnetFontForTest.h" local="yes" imported="no">CnetFontForTest.h</includes>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <member kind="function">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_REGISTRATION</name>
      <anchorfile>a00055.html</anchorfile>
      <anchor>76f47f8e784a9815e05ca126bab02224</anchor>
      <arglist>(UnitTestCnetFont)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetFont.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00056</filename>
    <includes id="a00036" name="CnetFont.h" local="yes" imported="no">CnetFont.h</includes>
    <class kind="class">UnitTestCnetFont</class>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetFontSimple.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00057</filename>
    <includes id="a00058" name="UnitTestCnetFontSimple.h" local="yes" imported="no">UnitTestCnetFontSimple.h</includes>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <member kind="function">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_REGISTRATION</name>
      <anchorfile>a00057.html</anchorfile>
      <anchor>08917326fbc83ff6bb48dd5799b77187</anchor>
      <arglist>(UnitTestCnetFontSimple)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetFontSimple.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00058</filename>
    <includes id="a00040" name="CnetFontSimple.h" local="yes" imported="no">CnetFontSimple.h</includes>
    <class kind="class">UnitTestCnetFontSimple</class>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetImage.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00059</filename>
    <includes id="a00060" name="UnitTestCnetImage.h" local="yes" imported="no">UnitTestCnetImage.h</includes>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <member kind="function">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_REGISTRATION</name>
      <anchorfile>a00059.html</anchorfile>
      <anchor>04c5a392d075a6719f4a6ff88209b2ce</anchor>
      <arglist>(UnitTestCnetImage)</arglist>
    </member>
    <member kind="variable">
      <type>const unsigned int</type>
      <name>IMAGE_WIDTH</name>
      <anchorfile>a00059.html</anchorfile>
      <anchor>1ccd883c43c8cd28a1a689eded09558c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const unsigned int</type>
      <name>IMAGE_HEIGHT</name>
      <anchorfile>a00059.html</anchorfile>
      <anchor>621adfffb1b61e02099d1c4271e7919d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const char</type>
      <name>CNET_TEST_TO_ASCII_EXPECTED</name>
      <anchorfile>a00059.html</anchorfile>
      <anchor>aa41cd6ad859ea29264182a2be2d51fe</anchor>
      <arglist>[]</arglist>
    </member>
    <member kind="variable">
      <type>const char</type>
      <name>CNET_TEST_TO_ASCII_EXPECTED2</name>
      <anchorfile>a00059.html</anchorfile>
      <anchor>3fd3d749733aafc377d984cabeaa48cc</anchor>
      <arglist>[]</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetImage.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00060</filename>
    <includes id="a00042" name="CnetImage.h" local="yes" imported="no">CnetImage.h</includes>
    <class kind="class">UnitTestCnetImage</class>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetString.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00061</filename>
    <includes id="a00062" name="UnitTestCnetString.h" local="yes" imported="no">UnitTestCnetString.h</includes>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <member kind="define">
      <type>#define</type>
      <name>MY_SETUP</name>
      <anchorfile>a00061.html</anchorfile>
      <anchor>7d4c5e215ad401e05a21270bdfeb28ca</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_REGISTRATION</name>
      <anchorfile>a00061.html</anchorfile>
      <anchor>62a17c8a4459912713cd9ba5a28273d8</anchor>
      <arglist>(UnitTestCnetString)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetString.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00062</filename>
    <includes id="a00044" name="CnetString.h" local="yes" imported="no">CnetString.h</includes>
    <class kind="class">UnitTestCnetString</class>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetWidget.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00063</filename>
    <includes id="a00064" name="UnitTestCnetWidget.h" local="yes" imported="no">UnitTestCnetWidget.h</includes>
    <includes id="a00028" name="CnetCppUnitExtra.h" local="yes" imported="no">CnetCppUnitExtra.h</includes>
    <member kind="function">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_REGISTRATION</name>
      <anchorfile>a00063.html</anchorfile>
      <anchor>bf2d4f9cfc1f4be2b3829bc5b36549cb</anchor>
      <arglist>(UnitTestCnetWidget)</arglist>
    </member>
  </compound>
  <compound kind="file">
    <name>UnitTestCnetWidget.h</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnetguibase-tests/</path>
    <filename>a00064</filename>
    <includes id="a00046" name="CnetWidget.h" local="yes" imported="no">CnetWidget.h</includes>
    <includes id="a00048" name="CnetWidgetForTest.h" local="yes" imported="no">CnetWidgetForTest.h</includes>
    <class kind="class">UnitTestCnetWidget</class>
  </compound>
  <compound kind="file">
    <name>UnitTestMain.cpp</name>
    <path>/home/sebv/documents/c++/tutocpp/src/libcnet-tests/</path>
    <filename>a00065</filename>
    <member kind="function">
      <type>int</type>
      <name>main</name>
      <anchorfile>a00065.html</anchorfile>
      <anchor>0ddf1224851353fc92bfbff6f499fa97</anchor>
      <arglist>(int argc, char *argv[])</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetBenchmarkImage</name>
    <filename>a00001.html</filename>
    <base>CnetBenchmarkRunner</base>
    <member kind="function">
      <type></type>
      <name>CnetBenchmarkImage</name>
      <anchorfile>a00001.html</anchorfile>
      <anchor>7ed0cc142b282b36b447ce35df296b33</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetBenchmarkImage</name>
      <anchorfile>a00001.html</anchorfile>
      <anchor>f90e7491c45f560ffd162685ac922a92</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>run</name>
      <anchorfile>a00001.html</anchorfile>
      <anchor>b5c66e9bb0075f56f6ca19940a234ffe</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>benchmarkSquare</name>
      <anchorfile>a00001.html</anchorfile>
      <anchor>bba9de5ea9a068e8d63341183e9beeb3</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetBenchmarkRunner</name>
    <filename>a00002.html</filename>
    <member kind="function">
      <type></type>
      <name>CnetBenchmarkRunner</name>
      <anchorfile>a00002.html</anchorfile>
      <anchor>8e83d3ea3cb2f8bdddd086efa3a93c2f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetBenchmarkRunner</name>
      <anchorfile>a00002.html</anchorfile>
      <anchor>a4c245a7b16172dbd4a4920634676f0d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="pure">
      <type>virtual void</type>
      <name>run</name>
      <anchorfile>a00002.html</anchorfile>
      <anchor>b8995361e91d7b22568d04d383e385fe</anchor>
      <arglist>()=0</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>startBenchmark</name>
      <anchorfile>a00002.html</anchorfile>
      <anchor>10d19b02fae16335a1b7604749ad582a</anchor>
      <arglist>(const char *name)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>endBenchmark</name>
      <anchorfile>a00002.html</anchorfile>
      <anchor>cde885b4b1dca5a6b56a4bd709083c2d</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>clock_t</type>
      <name>startClock</name>
      <anchorfile>a00002.html</anchorfile>
      <anchor>93a7ebdb5dd8b8b62aab8a93fce33403</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetEvent</name>
    <filename>a00003.html</filename>
    <member kind="function">
      <type></type>
      <name>CnetEvent</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>5af1f4f590ae05f1f87369058d8cc0b4</anchor>
      <arglist>(CnetEvent *parent)</arglist>
    </member>
    <member kind="function" virtualness="pure">
      <type>virtual</type>
      <name>~CnetEvent</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>a71b4017dfec2aa6690606fcf8584dd7</anchor>
      <arglist>()=0</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>clic</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>4c5afee319c9d710fecdf21d6fc6bfcd</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>keyPress</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>b6e98ecd27b425538ccbd1d5f4d01310</anchor>
      <arglist>(char c)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>getFocus</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>07c38aedb80103c88063b386cdcbc866</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>lostFocus</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>82853bde7e64b1818b66725670e54840</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setEnable</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>f647c8d730eaaca87ae229c69b613999</anchor>
      <arglist>(bool value=true)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>getEnable</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>7661cdf528b5e69eb62a9dd59e04760c</anchor>
      <arglist>(void) const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseDown</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>3e596eb610026c7507f2e639f4896637</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseUp</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>a972c4e7a743cfc59613918b979e6e89</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseMove</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>96e519eeed630d685b25a338da7a2f69</anchor>
      <arglist>(int dx, int dy)</arglist>
    </member>
    <member kind="function">
      <type>CnetEvent *</type>
      <name>getParent</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>cb33185da9daf14ceee4e79f1b81122d</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>enable</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>f373a7a79726a54ec45f143aa1bbbec1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetEvent *</type>
      <name>parent</name>
      <anchorfile>a00003.html</anchorfile>
      <anchor>9ded719553852241e945cea203989d86</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetEventMockChecker</name>
    <filename>a00004.html</filename>
    <base>CnetEvent</base>
    <member kind="function">
      <type></type>
      <name>CnetEventMockChecker</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>802a84e7e5b74388e6da6efc2bd76f6c</anchor>
      <arglist>(CnetEvent *parent)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetEventMockChecker</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>3f0f08a4a0bb8deda013641ee7d6256a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>clic</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>2c06d6ffad6ecfd530ce9e7ec038eec7</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>keyPress</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>0da32e7a45c816d9bfd40e7092c817e4</anchor>
      <arglist>(char c)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>getFocus</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>87dfa16514ffbc54fb76fd0fb3eb5a27</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>lostFocus</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>cd55e0f148b6425bd0f9b3e178a1d9d0</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseDown</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>da394532c22bbf461500b6be6d5d3aa6</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseUp</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>510b5948f9475ed602690d27b3a3dad2</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseMove</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>fa363355f3f19006b31e94570e4431e3</anchor>
      <arglist>(int dx, int dy)</arglist>
    </member>
    <member kind="function">
      <type>std::string</type>
      <name>getLastAction</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>c931204fd4169b4d5031863909c78729</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>std::string</type>
      <name>lastAction</name>
      <anchorfile>a00004.html</anchorfile>
      <anchor>a016f57af8d012665cd5e32a40501edd</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetEventMockDefaultImpl</name>
    <filename>a00005.html</filename>
    <base>CnetEvent</base>
    <member kind="function">
      <type></type>
      <name>CnetEventMockDefaultImpl</name>
      <anchorfile>a00005.html</anchorfile>
      <anchor>31c57127934f01004227a7b5004f38c5</anchor>
      <arglist>(CnetEvent *parent)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetEventMockDefaultImpl</name>
      <anchorfile>a00005.html</anchorfile>
      <anchor>c48f0fbdc1eb7ad43e2386b651938e9f</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetException</name>
    <filename>a00006.html</filename>
    <member kind="function">
      <type></type>
      <name>CnetException</name>
      <anchorfile>a00006.html</anchorfile>
      <anchor>cefc15c51238d04a8d95fe64dddf7177</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetException</name>
      <anchorfile>a00006.html</anchorfile>
      <anchor>786f9bc2739622ff6463283d1883b69a</anchor>
      <arglist>(const std::exception &amp;orig)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetException</name>
      <anchorfile>a00006.html</anchorfile>
      <anchor>83cdc3818c0fad7f5591d45be471d1dd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual const char *</type>
      <name>what</name>
      <anchorfile>a00006.html</anchorfile>
      <anchor>e1698a4053c52547e9e5be4f631d3a93</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>std::string</type>
      <name>message</name>
      <anchorfile>a00006.html</anchorfile>
      <anchor>70dfaa69a5e84f0fd8382d51f7211e99</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetFont</name>
    <filename>a00007.html</filename>
    <member kind="function">
      <type></type>
      <name>CnetFont</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>6c9d866448fab27c3eb0e98e73fdf13c</anchor>
      <arglist>(CnetImage &amp;image, CnetColor color=CNET_BLACK_COLOR)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetFont</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>aa34eed75156a29fd841219b669210d3</anchor>
      <arglist>(const CnetFont &amp;font)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetFont</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>86cd703cca889a065b12edd8f988979c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>CnetImage &amp;</type>
      <name>getImage</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>9212e0735e1129e4eac1ea5968f6ea88</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setImage</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>5e111a5379796e1aed213013fdc2f6b2</anchor>
      <arglist>(CnetImage &amp;image)</arglist>
    </member>
    <member kind="function">
      <type>CnetColor</type>
      <name>getColor</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>6bc8038f90f5c292c117b5e25b625e7a</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setColor</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>f81fd47a5d0070a97fcb0ff17229d05e</anchor>
      <arglist>(CnetColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>print</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>0eb18e814fac0f948ba944119b9245a4</anchor>
      <arglist>(unsigned int x, unsigned int y, CnetString text)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="pure">
      <type>virtual unsigned int</type>
      <name>print</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>9c0b5986005800a09c33afeeea1b7ecd</anchor>
      <arglist>(unsigned int x, unsigned int y, char character)=0</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>setPixel</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>81d8d72c95ebe10b894fa25c1a23ba13</anchor>
      <arglist>(unsigned int x, unsigned int y, CnetColor color)</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetImage *</type>
      <name>image</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>3d1aad3250dca94db30391be1364b3b0</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetColor</type>
      <name>color</name>
      <anchorfile>a00007.html</anchorfile>
      <anchor>8c034e0c642d099d13d3aaacd1bb2707</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetFontForTest</name>
    <filename>a00008.html</filename>
    <base>CnetFont</base>
    <member kind="function">
      <type></type>
      <name>CnetFontForTest</name>
      <anchorfile>a00008.html</anchorfile>
      <anchor>0849c9bce63ab04d614d5e70ba334ea3</anchor>
      <arglist>(CnetImage &amp;image, CnetColor color=CNET_BLACK_COLOR)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetFontForTest</name>
      <anchorfile>a00008.html</anchorfile>
      <anchor>691e265487a3448297b1f96e7f887c0e</anchor>
      <arglist>(CnetFontForTest &amp;font)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetFontForTest</name>
      <anchorfile>a00008.html</anchorfile>
      <anchor>219ddb04294ff2a81c041148b9e272a9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual unsigned int</type>
      <name>print</name>
      <anchorfile>a00008.html</anchorfile>
      <anchor>ed54fda903b83d3cd26ea373c77a12f0</anchor>
      <arglist>(unsigned int x, unsigned int y, char character)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetFontSimple</name>
    <filename>a00009.html</filename>
    <base>CnetFont</base>
    <member kind="function">
      <type></type>
      <name>CnetFontSimple</name>
      <anchorfile>a00009.html</anchorfile>
      <anchor>af0246956f72b2c7fc327b9d34a78858</anchor>
      <arglist>(CnetImage &amp;image, CnetColor color=CNET_BLACK_COLOR)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetFontSimple</name>
      <anchorfile>a00009.html</anchorfile>
      <anchor>47f8fda3a3a3ffb630e27b1ae9a4b245</anchor>
      <arglist>(const CnetFontSimple &amp;font)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetFontSimple</name>
      <anchorfile>a00009.html</anchorfile>
      <anchor>4c3ad4a4ba2b9464ee9430d34b6ed1e4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual unsigned int</type>
      <name>print</name>
      <anchorfile>a00009.html</anchorfile>
      <anchor>52018d51b320f84cc27de76c1d7944d9</anchor>
      <arglist>(unsigned int x, unsigned int y, char character)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetImage</name>
    <filename>a00010.html</filename>
    <member kind="function">
      <type></type>
      <name>CnetImage</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>c22cb8080e0e7d48bad9934ff30d7986</anchor>
      <arglist>(unsigned int width, unsigned int height, CnetColor background=CNET_WHITE_COLOR)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetImage</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>62d8667611c68a80db519667a70967ed</anchor>
      <arglist>(const CnetImage &amp;image)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetImage</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>ba855550ccae24fe5faab1c1a83e04f7</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>CnetColor</type>
      <name>getPixel</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>c671bffce0ce323dc6609befbc2c05c2</anchor>
      <arglist>(unsigned int x, unsigned int y) const </arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setPixel</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>6652aa931a6def3ac13f9f479b0bc5ec</anchor>
      <arglist>(unsigned int x, unsigned int y, CnetColor color)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>clear</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>d6d89047a35b03bbc1d33ad5db3fbd71</anchor>
      <arglist>(CnetColor color)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>line</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>868013031110cc9ea7e1aeca51654cb8</anchor>
      <arglist>(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, CnetColor color=CNET_BLACK_COLOR)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>square</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>76cb16c8242b06064e52f46ed4eab558</anchor>
      <arglist>(unsigned int x, unsigned int y, unsigned int width, unsigned int height, CnetColor borderColor=CNET_BLACK_COLOR, CnetColor backgroundColor=CNET_GRAY_COLOR)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>paintImage</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>42a688a704ccee815a8bc77310d00133</anchor>
      <arglist>(const CnetImage &amp;image, unsigned int x, unsigned int y)</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getWidth</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>f569de974feea1fbc07fb839850fb1f3</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getHeigh</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>6eb16deb170f474f79b5a0b044042d72</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>toAscii</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>62db45e187ee2c05e32f60aee5b8d25f</anchor>
      <arglist>(bool border=false) const </arglist>
    </member>
    <member kind="function" protection="protected">
      <type>bool</type>
      <name>checkCoord</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>2fb67a6079a7c689944eb8579ca4c2c0</anchor>
      <arglist>(unsigned int x, unsigned int y) const </arglist>
    </member>
    <member kind="function" protection="protected">
      <type>bool</type>
      <name>checkCoordWithException</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>5cdfbc4b59b7a5b0b0386575cd7aee79</anchor>
      <arglist>(unsigned int x, unsigned int y) const </arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>init</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>ab8f8c954a0f97ed6af9d6aac9ab5e47</anchor>
      <arglist>(unsigned int width, unsigned int height)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>unsigned int</type>
      <name>coord</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>f88b0b4981ffd4a1590daf632c14d5c6</anchor>
      <arglist>(unsigned int x, unsigned int y) const </arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>bresenhamLine</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>d034f1aa0b64c5606ecdaa4bd0eb8608</anchor>
      <arglist>(unsigned int xmin, unsigned int xmax, unsigned int y, int dx, int dy, CnetColor color, bool permutXY=false)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>bool</type>
      <name>compare</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>4366b79029ed307ac22da1bb1ed3d90d</anchor>
      <arglist>(const CnetImage &amp;image) const </arglist>
    </member>
    <member kind="function" protection="private" static="yes">
      <type>static void</type>
      <name>permut</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>12347081f94b56830532339bdc150da7</anchor>
      <arglist>(T &amp;a, T &amp;b)</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>CnetColor *</type>
      <name>bitmap</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>422eab9fa6da47ee6db0e9ad6ca97108</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>unsigned int</type>
      <name>width</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>757b36b57651f78ad0b34bb06fa6a24c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>unsigned int</type>
      <name>height</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>57e455430d6f026a1351b85421facd2d</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator==</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>4886e32bb68ac97c0c477cbeefcad18f</anchor>
      <arglist>(const CnetImage &amp;img1, const CnetImage &amp;img2)</arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator!=</name>
      <anchorfile>a00010.html</anchorfile>
      <anchor>0a1d948fb42c179caa629d84c289ec52</anchor>
      <arglist>(const CnetImage &amp;img1, const CnetImage &amp;img2)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetNotFoundException</name>
    <filename>a00011.html</filename>
    <base>CnetException</base>
    <member kind="function">
      <type></type>
      <name>CnetNotFoundException</name>
      <anchorfile>a00011.html</anchorfile>
      <anchor>e02228a2a1920b097be10248030c4bb5</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetNullPointerException</name>
    <filename>a00012.html</filename>
    <base>CnetException</base>
    <member kind="function">
      <type></type>
      <name>CnetNullPointerException</name>
      <anchorfile>a00012.html</anchorfile>
      <anchor>0838275ad4456a7436e6d39e7efc5b48</anchor>
      <arglist>(std::string message)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetOutOfBoundException</name>
    <filename>a00013.html</filename>
    <base>CnetException</base>
    <member kind="function">
      <type></type>
      <name>CnetOutOfBoundException</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>ddf6133260a9e1ca41be1130420c97bf</anchor>
      <arglist>(long value, long min, long max)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetOutOfBoundException</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>7350492113919b52a0d1354455fbc001</anchor>
      <arglist>(std::string message, long value, long min, long max)</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>getValue</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>93aabcdbb206e082ff3c85ce9d702bd9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>getMin</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>648b4e099dee7e9dae45aa717525cc3e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>getMax</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>35cdc4098d0e4b2f842cd3bfb2ba3e5e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>long</type>
      <name>value</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>cadf9ae0c170b05f80de2da9397a1eac</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>long</type>
      <name>min</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>f5a083ac3af3c3a47a5c54a89c2d4f29</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>long</type>
      <name>max</name>
      <anchorfile>a00013.html</anchorfile>
      <anchor>123705a29cad180bd0ebea7f9b204832</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetString</name>
    <filename>a00014.html</filename>
    <member kind="function">
      <type></type>
      <name>CnetString</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>3af17ea70067668244649c1d5e9b1a77</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetString</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>d3715d7a2d2378f78aa4646a035086ef</anchor>
      <arglist>(const CnetString &amp;value)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetString</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>fcf6630280c9933c537b3919ee9059eb</anchor>
      <arglist>(const char *value)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CnetString</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>14c5bcd6d578c9c4c4f73e144b43d1df</anchor>
      <arglist>(const std::string &amp;value)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetString</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>c3a9d1f16a3c8e18316b4997d8972d34</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getCStr</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>e3e67135d2be74f7030bc029409f0340</anchor>
      <arglist>(void) const </arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getSize</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>226fa38454b54752c0d20736f562f8c3</anchor>
      <arglist>(void) const </arglist>
    </member>
    <member kind="function">
      <type>char</type>
      <name>getChar</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>1874e23aaf9382eb9178853918afaa34</anchor>
      <arglist>(unsigned int pos) const </arglist>
    </member>
    <member kind="function">
      <type>CnetString</type>
      <name>getSubStr</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>12dab9cb5b2435ef0119f6a5ce889d22</anchor>
      <arglist>(unsigned int begin, unsigned int length) const </arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>find</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>ab57d15ecbdd280060ca1349cd054a00</anchor>
      <arglist>(const char *value, bool caseSensible=true) const </arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>find</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>800ebf97070398c10c98ad605bb927ec</anchor>
      <arglist>(const CnetString &amp;value, bool caseSensible=true) const </arglist>
    </member>
    <member kind="function">
      <type>CnetString &amp;</type>
      <name>operator=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>32ea566095db636856b97e799bc50f5c</anchor>
      <arglist>(const CnetString &amp;value)</arglist>
    </member>
    <member kind="function">
      <type>CnetString &amp;</type>
      <name>operator=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>e425a6f5323f68ce590315fd4794e769</anchor>
      <arglist>(const char *value)</arglist>
    </member>
    <member kind="function">
      <type>CnetString &amp;</type>
      <name>operator+=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>2a90406d96e4dba1c727a69a6af6cf4e</anchor>
      <arglist>(const CnetString &amp;value)</arglist>
    </member>
    <member kind="function">
      <type>CnetString &amp;</type>
      <name>operator+=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>2b96540a90569644c567167cc501e64a</anchor>
      <arglist>(const char *value)</arglist>
    </member>
    <member kind="function">
      <type>CnetString &amp;</type>
      <name>operator+=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>2a384f87ad1222907e26fc4a6fb6d326</anchor>
      <arglist>(char value)</arglist>
    </member>
    <member kind="function">
      <type>char &amp;</type>
      <name>operator[]</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>3dc48ddc502f392aab315054c3abd1bc</anchor>
      <arglist>(unsigned int pos)</arglist>
    </member>
    <member kind="function">
      <type>const char</type>
      <name>operator[]</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>ef0e509cb5ebbaef3598e639f16b534d</anchor>
      <arglist>(unsigned int pos) const </arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>add</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>faab24871cadf5d90a5ca727009bf3e6</anchor>
      <arglist>(const char *value, int size)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>add</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>329e0899b17578b2ded9f5b28ec46e8f</anchor>
      <arglist>(char value)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>set</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>28c71f2a67bc9e587886c3ed4b65ed8b</anchor>
      <arglist>(const char *value, int size)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>init</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>407172927eecb915b67a36bc08bb700f</anchor>
      <arglist>(const char *value=NULL, int size=0)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>updateMemSize</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>5e8fad09a2975ade3c358a02f15dd212</anchor>
      <arglist>(unsigned int newSize, bool canRedure=false)</arglist>
    </member>
    <member kind="function" protection="private" static="yes">
      <type>static unsigned int</type>
      <name>strcopy</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>d93371dfce02f2540fad3b27828c4b2e</anchor>
      <arglist>(const char *source, char *dest, unsigned int size)</arglist>
    </member>
    <member kind="function" protection="private" static="yes">
      <type>static char</type>
      <name>min</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>4dfb64bdc14983fe99d4f0da2e40c8fc</anchor>
      <arglist>(char c)</arglist>
    </member>
    <member kind="function" protection="private" static="yes">
      <type>static bool</type>
      <name>compare</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>0fb2283c105d6116fbc8460b6a64daac</anchor>
      <arglist>(const char *value1, unsigned int size1, const char *value2, unsigned int size2, bool caseSensible=true)</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>unsigned int</type>
      <name>size</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>0a3ab60cd9f589fee940451f989bfd2f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>unsigned int</type>
      <name>allocSize</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>ddc1f4924355a38de336428a7a520509</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>char *</type>
      <name>str</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>d37127dd57c05c06cf4eec00dece5f59</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator==</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>06afc0160708d4f5cdd0163b07d6c9bd</anchor>
      <arglist>(const CnetString &amp;value1, const CnetString value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator==</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>f28facaeb469395e14b615ad3a571b62</anchor>
      <arglist>(const char *value1, const CnetString value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator==</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>a07ef62ff9d0ac8c8cc64c00e14e06f5</anchor>
      <arglist>(const CnetString &amp;value1, const char *value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator!=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>34b06e3afe53ee8744629377cf3a1328</anchor>
      <arglist>(const CnetString &amp;value1, const CnetString value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator!=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>753b8232982b0f10ae4bc6466948289d</anchor>
      <arglist>(const char *value1, const CnetString value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend bool</type>
      <name>operator!=</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>6391c79fcee9be2b5d8cb7c6db7859b9</anchor>
      <arglist>(const CnetString &amp;value1, const char *value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend CnetString</type>
      <name>operator+</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>fcec7565add554dc61a3a77624f5e512</anchor>
      <arglist>(const CnetString &amp;value1, const CnetString &amp;value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend CnetString</type>
      <name>operator+</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>39d1c06799906fc383daeef31934ca9d</anchor>
      <arglist>(const char *value1, const CnetString &amp;value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend CnetString</type>
      <name>operator+</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>e198b44fc583b91ac476a046c3c908fd</anchor>
      <arglist>(const CnetString &amp;value1, const char *value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend CnetString</type>
      <name>operator+</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>18bf721ef2398a2e939553da819acc6c</anchor>
      <arglist>(const CnetString &amp;value1, char value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend CnetString</type>
      <name>operator+</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>7b5d35d584dc144a336b6993511a4764</anchor>
      <arglist>(char value1, const CnetString &amp;value2)</arglist>
    </member>
    <member kind="friend">
      <type>friend std::ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>889ad43a0ecd8160aeaf63aabec968a9</anchor>
      <arglist>(std::ostream &amp;out, const CnetString &amp;value)</arglist>
    </member>
    <member kind="friend">
      <type>friend std::istream &amp;</type>
      <name>operator&gt;&gt;</name>
      <anchorfile>a00014.html</anchorfile>
      <anchor>c8b729dddd3511887e1c2704a3d4a4e8</anchor>
      <arglist>(std::istream &amp;in, CnetString &amp;value)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetWidget</name>
    <filename>a00015.html</filename>
    <base>CnetEvent</base>
    <member kind="function">
      <type></type>
      <name>CnetWidget</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>2c31ea5e6aad294e678bb059bd13d1e5</anchor>
      <arglist>(CnetWidget *parent, unsigned int width, unsigned int height)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetWidget</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>17408f21b613b67758d5cfac0b4276c5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>resize</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>48bb37cd3b8c79c98806834ca9c8c056</anchor>
      <arglist>(unsigned int width, unsigned int height)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setPosition</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>69b72a1ff66bdd6b41ef3a94afc27cae</anchor>
      <arglist>(unsigned int x, unsigned int y)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setZIndex</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>9241e3900b1c81d59c372957cc2504fd</anchor>
      <arglist>(int z)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>moveUp</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>1425316aca4722d6fdf216001fde7f61</anchor>
      <arglist>(int dz=1)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>moveDown</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>ef4f24a7633e218421d5ab5650a2149e</anchor>
      <arglist>(int dz=1)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>move</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>3bae318787e88117b791f7d1a84e64ee</anchor>
      <arglist>(int dx, int dy)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>show</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>5bbb59e482d4d56250a164f2827ff0bb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hide</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>ae102060756ee66da2f4f2414a2f88a2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>getVisibility</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>a626362680daa098a6dfb0b4dc87139a</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getX</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>97cc5830d2f48d15cbaaad68c230a82d</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getY</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>f6c1ad78c2240903f5163c006e5f0c1e</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getZIndex</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>37362f65c0576b6a89d9dce4f1e4d0af</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getWidth</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>14675483e59833062a1dfb8d3a902411</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getHeight</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>8b33c468d29036f41fba03f181fc1330</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>unsigned int</type>
      <name>getAbsoluteX</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>d1189e0079b5335f01f83039598c7da6</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>unsigned int</type>
      <name>getAbsoluteY</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>b097caa8219349252ed326ca40fca942</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="pure">
      <type>virtual void</type>
      <name>redraw</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>287b2fbba3a2738d2a82e8c860bb4a90</anchor>
      <arglist>(void)=0</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetImage *</type>
      <name>image</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>9c012945a39f7d255db471cc93575347</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>std::vector&lt; CnetWidget * &gt;</type>
      <name>childs</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>09250c554110ac1071553321304433b0</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>init</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>d39e2bce1a0b9cd5239580a1f6746802</anchor>
      <arglist>(CnetWidget *parent, unsigned int width, unsigned int height)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>updateZOfChild</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>7e3e9f7289c0e1fbdfe9766edf35e68f</anchor>
      <arglist>(CnetWidget *widget)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>addChild</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>e14e89b04eda72d382d851d1e9984c89</anchor>
      <arglist>(CnetWidget *child)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>bool</type>
      <name>delChild</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>99331dc1b571bbaff628f9493cd4fa6b</anchor>
      <arglist>(CnetWidget *child)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>reorderChilds</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>69b8450b6feaadc97bfcbdeed7cab89a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>CnetWidget *</type>
      <name>parent</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>c92b3ee7bd14df93ba9e445296c10676</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>int</type>
      <name>zIndex</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>36a49efb066eea22e335ecbfd15ac7fb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>bool</type>
      <name>visible</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>e7bc26fbc17c06b7f3cbab4d6b838332</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>unsigned int</type>
      <name>px</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>705cb3b23aacdca85134de067723730d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>unsigned int</type>
      <name>py</name>
      <anchorfile>a00015.html</anchorfile>
      <anchor>45991170ac3162053e97b7ee6544d08a</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CnetWidgetForTest</name>
    <filename>a00016.html</filename>
    <base>CnetWidget</base>
    <member kind="function">
      <type></type>
      <name>CnetWidgetForTest</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>d3e15bc61226b76674d91ca240851e60</anchor>
      <arglist>(CnetWidget *parent, unsigned int width, unsigned int height)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual</type>
      <name>~CnetWidgetForTest</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>3cc44b2e1c548e516e5298f6d4ee004c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const CnetImage &amp;</type>
      <name>getImage</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>97f30d038d3ebe5c8e38f28145076c3a</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>CnetImage</type>
      <name>screenshot</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>e264b8de98bfe1bc73ad7bd205f55d4a</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getAbsoluteX</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>f61fb4da099cbdcd391e1948c22ff2e3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>getAbsoluteY</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>81665103712f9fd3668811d2879aa29b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>CnetWidget *</type>
      <name>getChild</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>a30473deb621dd6aa7ba5053649b1ed9</anchor>
      <arglist>(unsigned int index)</arglist>
    </member>
    <member kind="function">
      <type>unsigned int</type>
      <name>countChilds</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>a4334a0fe2b95e2710334cf37db71d81</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>redraw</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>cc9c54ac7714d7b07aaf12c345872f70</anchor>
      <arglist>(void)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>screenshot</name>
      <anchorfile>a00016.html</anchorfile>
      <anchor>43cb0692ae4374b3ec7f49a4305529b5</anchor>
      <arglist>(CnetImage &amp;screenshot, unsigned int x, unsigned int y) const </arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UnitTestCnetEvent</name>
    <filename>a00017.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setUp</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>1f5f008e5cdde4cd66de7354a3a985b8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>tearDown</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>a287882829e5d4f5154b69e44342d0bb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>8eff6cb06b45d14b26797047b239f706</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_clic</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>b59c9c0b8ce4e9663b13cb268e73a5e9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_key_press</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>0428a21194fec80f8c20a96450a44a0d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_focus</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>0c94fc17fa01a743e1ee66f986dc9cab</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_lost_focus</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>9dca96bd22ad0bb163bd1f556d77f252</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_set_enable</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>012f78245fcde3f431db1f40ff25121b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_enable</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>5163531be7988c521eddb93ab2b12a27</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_mouse_down</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>24042f3a3d2dc78db7b778b1392b6b3a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_mouse_up</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>89b2823d4b129d199c597454e7a7780e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_mouse_move</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>0045c225b37bbfbceb15f4fd7af637e0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetEvent *</type>
      <name>event</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>d32ce65e52dc78061b5dfe1604d9b011</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetEventMockChecker *</type>
      <name>eventParent</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>a61244d7fa7b500b4465192689a0c3c9</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>626c1efbd54e01a393056713a78b46f9</anchor>
      <arglist>(UnitTestCnetEvent)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>43b898dd3c55d57346033170219a3712</anchor>
      <arglist>(test_constructor)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>477f129dddf026baefab5de0131177da</anchor>
      <arglist>(test_clic)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>c5ad429cc226b08cd50bae23647ea91f</anchor>
      <arglist>(test_key_press)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>efddc482e39861457b518478e27465b0</anchor>
      <arglist>(test_get_focus)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>9bf3dfb2a8c2939ee640e15c705972cc</anchor>
      <arglist>(test_lost_focus)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>60b5b20258b5f37fc6fa624c8a6ffad5</anchor>
      <arglist>(test_set_enable)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>45a7821924949486d5a6e0740270cd79</anchor>
      <arglist>(test_get_enable)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>a20df1a16e5b0122c713fa65c2a24825</anchor>
      <arglist>(test_mouse_down)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>b2abe6ac445a997b57327883927be0d5</anchor>
      <arglist>(test_mouse_up)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>110563efdf0cd04d662dc4a83f063b9c</anchor>
      <arglist>(test_mouse_move)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_END</name>
      <anchorfile>a00017.html</anchorfile>
      <anchor>41637e57dcbc83c970c80c0dd6b05adc</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UnitTestCnetFont</name>
    <filename>a00018.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setUp</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>5b222729f455a8bdd024f4168bb327e2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>tearDown</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>41382183d803247a7c57d5f90305ce63</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_image_color</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>480ad8039348408a1735d6bec667cd6c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_cnet_font</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>e35d760fc8f89e9c7dccb0718c103c69</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_image</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>1e77e60b48b40a33ed592b3a17411832</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_set_image</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>160a610ccfabdbcfa11fb489b74c34cc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_color</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>e926c04d4c20ae63cb36307e038f0197</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_set_color</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>2bc2d2db00d879566594b72f0be28423</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_print_x_y_text</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>ce8be2b22a616ed2684843bc82127b7d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetImage *</type>
      <name>image</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>d3c7cee70dc1bd84321670c6c33d9b29</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetFont *</type>
      <name>font</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>77b526223f530046a67e759b044e885a</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>b29183d5b0503bf14ab983863ecff279</anchor>
      <arglist>(UnitTestCnetFont)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>0060d8e44ad2dba23b18ff220ccecca8</anchor>
      <arglist>(test_constructor_image_color)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>2f7b5a68e64858999a14451a63174d42</anchor>
      <arglist>(test_constructor_cnet_font)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>6c6fd08eb3f8a73a703e6ca3eb06081a</anchor>
      <arglist>(test_get_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>9f6667867c7f010c51f4112f87988c52</anchor>
      <arglist>(test_set_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>367556f65a7ae306edc8e8d1b7d28bce</anchor>
      <arglist>(test_get_color)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>9a3033271295965f75129219c897bebf</anchor>
      <arglist>(test_set_color)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>d606f6b64ada89331b566b5ca657109f</anchor>
      <arglist>(test_print_x_y_text)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_END</name>
      <anchorfile>a00018.html</anchorfile>
      <anchor>e5883cfc01c7e7d342fc9086f8691d81</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UnitTestCnetFontSimple</name>
    <filename>a00019.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setUp</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>352bbbc0017f6e0bf208e7eda20e93cb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>tearDown</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>611ea64f7ca5e747a6a8bf44a00e5ab4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_image_color</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>7790e1e19e496b48bfd81a7acaad690f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_cnet_font</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>3b6a198f4ee52ad1fb3c318e921b7c2e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_print_cnet_string</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>9d9c4d4c9fdb189026c6ae155b1d461b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetImage *</type>
      <name>image</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>344ef7eb023b0e9190cc7d2bd2ce858c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetFont *</type>
      <name>font</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>e0cd6d3d0e5dffceb56a8e34086f9276</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>0bb34396b0ec740a3582bc85e81eee62</anchor>
      <arglist>(UnitTestCnetFontSimple)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>d4f5ce3e93b10aa4b038892dd7f7bebd</anchor>
      <arglist>(test_constructor_image_color)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>f204966ed80ac0ffe405d9ff7a370990</anchor>
      <arglist>(test_constructor_cnet_font)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>2b6b3813f145e285a9dc0685ed163855</anchor>
      <arglist>(test_print_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_END</name>
      <anchorfile>a00019.html</anchorfile>
      <anchor>fb34c031a037649e725caf18bdb89774</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UnitTestCnetImage</name>
    <filename>a00020.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setUp</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>f53a4493525a4751fb37870fcf63aa75</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>tearDown</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>440c6e20cecd448a0ceb91d3c513bc95</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_width_height_color</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>a6cb5d4bc21d2ac89292cb9456f659c4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_cnet_image</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>6e6eeb05d56130afd69cd602d2709546</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_pixel</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>7924b94914bbbaae6f3e6aa034afd57f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_set_pixel</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>6e5d1081a939910a2308814fa954705f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_clear</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>aeb09cb0357cfdcb5cb8c929f88a2444</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_horiz</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>189443c7dca0354628040b84a29a7538</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_horiz_invert</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>315be70d9927b404c2dd435c035fe8b1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_vert</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>73dd376849c26d95bfbbe9fa889f1195</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_vert_invert</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>141d0129b965affa3bb7a9837cf84cd0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_diag</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>aab5185897ad728146d29909e67402c8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_diag_invert</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>a962f4ad2cc9fa9abe1baa635506740b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_diag2</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>ec8d9a4bb17df9a43e3ea6c7ef39389a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_diag2_invert</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>8fd41d7466729282ea9efed06420ffed</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_point</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>020f5c283935c12da7247d5c719eb699</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_line_out</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>a81bcf6bbcc19cd97887fcc22255428b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_square</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>ad9b628e683a277dc1176ef241a8c2ee</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_square_out_right_down</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>95ee5bdd2f837f3f06225f296019bf2e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_paint_image</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>e75867ed5341708f6440d748002f565a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_paint_image_out</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>83f3c95a229526b375be437ff4420eaf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_paint_image_out2</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>5138ec2ee82dfcfa00eb484455e112ad</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_getWidth</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>9b8d3351a44c1a72c47d29f1e3949b57</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_getHeight</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>e6a3de4d87470ac543efdf54a2738b92</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_pass_to_function</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>c846b66036766a60df2625919824df0d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_to_ascii</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>1bd44c0fff4b9b33900e3c7e11caf5b9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_equal_equal_cnet_image</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>38d464229c33ec74cfa4968c1599a2bd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_not_equal_cnet_image</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>740702cccaedf8de62f4fc6a22f81870</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_unit_test_save_and_load_image</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>083a1626757e8c7fe967a6945a43d902</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetImage *</type>
      <name>image</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>4ae31ad87fe129c6dce1c4ea86dc0d22</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>4a7166036655de194fd5f564e5b44691</anchor>
      <arglist>(UnitTestCnetImage)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>95df25bca0f5c29a5ed07d305224d53a</anchor>
      <arglist>(test_constructor_width_height_color)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>597164306dbf4d04b6cc2ed0e061b0f2</anchor>
      <arglist>(test_constructor_cnet_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>73aaf06a4458bbe5baac54d2209a358b</anchor>
      <arglist>(test_get_pixel)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>67b3278a943cd89431efd535924c8dee</anchor>
      <arglist>(test_set_pixel)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>062498ad924f487928da590c76262c5d</anchor>
      <arglist>(test_clear)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>deaff93eb2750c68a58ed66feb233224</anchor>
      <arglist>(test_line_horiz)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>fede4acf1c1ddee552b070bd03f3eb08</anchor>
      <arglist>(test_line_horiz_invert)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>101e376f71f54fed8f345ed985647198</anchor>
      <arglist>(test_line_vert)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>9b27b6bc7d189dc30e28df579cac6200</anchor>
      <arglist>(test_line_vert_invert)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>ee863d7b15d46fa637a13e535ba11a72</anchor>
      <arglist>(test_line_diag)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>c8b4daa8714925e1af00ea3e14254272</anchor>
      <arglist>(test_line_diag_invert)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>b7a510773694f7e90f7626364e3e539f</anchor>
      <arglist>(test_line_diag2)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>95c8d4eb06b54a5096e4616dc4fe1082</anchor>
      <arglist>(test_line_diag2_invert)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>2bb5b99ce3c473a60930f948087f867f</anchor>
      <arglist>(test_line_point)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>e069b0920330eb75d8fbf7855d1bf9c4</anchor>
      <arglist>(test_line_out)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>d287642b23ab02cbd942c296993ea8e1</anchor>
      <arglist>(test_square)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>5dbd247994149e55df2d548eb58b8f3e</anchor>
      <arglist>(test_square_out_right_down)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>043802af14c2a90e562cdd35bb434b16</anchor>
      <arglist>(test_paint_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>7629773e35b20524fd7bedcc0a51aff6</anchor>
      <arglist>(test_paint_image_out)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>63d03148c5ae9fdd37523c565e5a0209</anchor>
      <arglist>(test_paint_image_out2)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>967e64d2a5f6c1434304b00e86baf4d1</anchor>
      <arglist>(test_getWidth)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>f9035700b9eede5e440b06612af6dc74</anchor>
      <arglist>(test_getHeight)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>78e9a1b6fd113d4cdcff7f8d9ba610a7</anchor>
      <arglist>(test_pass_to_function)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>95cd323bfe07fe57bf7d4f2abd639db1</anchor>
      <arglist>(test_to_ascii)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>280da6ff66aa103855c2de96413eee4d</anchor>
      <arglist>(test_operator_equal_equal_cnet_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>39e12da855efefd832b9ccc08612d79d</anchor>
      <arglist>(test_operator_not_equal_cnet_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>e9f5b7ae4a6460b19a97aaa63199e47c</anchor>
      <arglist>(test_unit_test_save_and_load_image)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_END</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>027e41fecb3ac420281b0375f214d625</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type>CnetImage</type>
      <name>pass_to_function_by_copy</name>
      <anchorfile>a00020.html</anchorfile>
      <anchor>e9c8fa82c6eacb18df1394ba0d981ee9</anchor>
      <arglist>(CnetImage img)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UnitTestCnetString</name>
    <filename>a00021.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setUp</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>e4d28d067582e15a68224cbca6b74ec2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>tearDown</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>73cab3db108c4f27a7b7b8c0ba95a7b5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_void</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>702bbcb803a9cad8c94d94ba9cc754f5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_chars</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>695b4802d8b21d49a8a04c6183866d92</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>042df2dafed95bab505e35990a6e5eab</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor_std_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>1492006c33d80637de044113a8e5d6f3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_getcstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>27838aeb222a61f8744dcae6797c8670</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_getsize</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>ce78b831a25f50608eb4dbb960d10973</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_getchar</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>94a54f49e8c08726988f1091cf3925d1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_getsubstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>e95f35343ee8a96e9b0efca80c06d3cc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_find_cstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>eabfeeffab65209e1f7d6287773cd5e5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_find_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>70cc022f04550079b979947e3bfe33a0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_equal_equal_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>f6067e372836028b5b3a8b7ad3888ef5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_equal_equal_cstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>a01c02bcfa8d98962a528b2bafe5b9a8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_not_equal_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>84fcd6155b5549ed0fed444eef8d2a98</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_not_equal_cstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>41f8d41160fe6bf32a6d6ffd8d1daaa7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_opeartor_equal_cstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>bd6e91d4ca9721585665987863641d18</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_opeartor_equal_cstr_me</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>c21368720c6501a61d123c55afd8b27a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_equal_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>bcfea0b06b53a6280c2f843b40cc8812</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_equal_cnet_string_me</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>e486fac7690a4790f8fe82971189a6d4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>db9d910a00757b967150d7fe70e72283</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_cnet_string_me</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>d9a42906cad0831ce24aef6bb2a530ca</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_cstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>65ae79a899b45616ecfd1dc2664b6f03</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_cstr_me</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>081a53f73a742910390004197323bc60</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_char</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>63e42a6d9316f7d3c6aca7b2775afaea</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_equal_cnet_string</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>a313f2457ac49d1848b2a2666df8bdd7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_equal_cnet_string_me</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>db23b2c59bc2e645deab4449ccbc83c1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_equal_cstr</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>b7fbc6f373ec0d3c615ed60f94c7a3e7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_equal_cstr_me</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>2724f3b04d707e8312a6583e784f91e7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_plus_equal_char</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>45d9d6addb4613aff6456577320ebe6f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_operator_indexor</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>fce821837a44c3bc7e0e1f4515c7c206</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_pass_to_function</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>e348d2acfd0b4167b632957b81024cd7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>2e141940baaad9c216fd4394edc54839</anchor>
      <arglist>(UnitTestCnetString)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>cbca06b271eb6f9fb080501a7a91e3f4</anchor>
      <arglist>(test_constructor_void)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>0b87d7686a156e4c66cc8c9c03b58746</anchor>
      <arglist>(test_constructor_chars)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>9c88bc20f9bfa34f361326cf53f0d63e</anchor>
      <arglist>(test_constructor_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>9071cae5c10cd867f42ae41a44b904ed</anchor>
      <arglist>(test_constructor_std_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>439f6f1aa372f105501c2909640378a8</anchor>
      <arglist>(test_getcstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>e5015c1e75b01fb920ce3d45eccc1bd6</anchor>
      <arglist>(test_getsize)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>153796e20fe5402c6c7f1aac4991a9be</anchor>
      <arglist>(test_getchar)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>5d28f430069b8d5e28069f591a258f64</anchor>
      <arglist>(test_getsubstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>02b2f086eceb5aa08ff230f89d4df611</anchor>
      <arglist>(test_find_cstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>0352bd62e027de74e59e4ed8f48a1c3c</anchor>
      <arglist>(test_find_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>6d8054fa8c8c9b805f2c2ec78a8ed2e2</anchor>
      <arglist>(test_operator_equal_equal_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>51a5bd46db20090ea88b686526a58e91</anchor>
      <arglist>(test_operator_equal_equal_cstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>fca596ef84aa43a4e5c68fb03679ecfe</anchor>
      <arglist>(test_operator_not_equal_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>300114c382df440ba755ac5817d793c1</anchor>
      <arglist>(test_operator_not_equal_cstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>01246673480dcb088548e639f055dfe6</anchor>
      <arglist>(test_opeartor_equal_cstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>19cada9edc79695c4da65f6d06be3865</anchor>
      <arglist>(test_operator_equal_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>040002b6cda6b1b41e9f58d7fe1599c3</anchor>
      <arglist>(test_opeartor_equal_cstr_me)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>b8c2e03987e0fe074a4167398142634d</anchor>
      <arglist>(test_operator_equal_cnet_string_me)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>2c6b7f83b1d1d4297a7b874b68a4e207</anchor>
      <arglist>(test_operator_plus_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>386511a4347f083d2013883acb81f591</anchor>
      <arglist>(test_operator_plus_cnet_string_me)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>0ebb6feef3d109459cc2e50c52548c5d</anchor>
      <arglist>(test_operator_plus_cstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>3d1ea890143cc6e9076fb0c6d86d1c00</anchor>
      <arglist>(test_operator_plus_cstr_me)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>127323fdfaf6258f1ef695d0a4ba21dc</anchor>
      <arglist>(test_operator_plus_equal_cnet_string)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>7e0083f7a740c642b3dced9a7ad8d087</anchor>
      <arglist>(test_operator_plus_equal_cnet_string_me)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>10275b964b03a56036fc129e1278abed</anchor>
      <arglist>(test_operator_plus_equal_cstr)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>bdfeb05abf24c3b6959f9763862b26c9</anchor>
      <arglist>(test_operator_plus_equal_cstr_me)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>faa769254c506c093d34e79fe1063e10</anchor>
      <arglist>(test_operator_indexor)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>757842ac1042196413f4b1d8719240fb</anchor>
      <arglist>(test_operator_plus_equal_char)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>37346e1bdb2a7942c6c51b823217fc12</anchor>
      <arglist>(test_operator_plus_char)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>8dbbb7692ffacd54b570bdac26f12968</anchor>
      <arglist>(test_pass_to_function)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_END</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>5168b57a67cb8fd0aab6ab099f553d3b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type>CnetString</type>
      <name>to_test_pass_to_function</name>
      <anchorfile>a00021.html</anchorfile>
      <anchor>f5a7540879bbfed30ead1874bd3e9b17</anchor>
      <arglist>(CnetString value)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UnitTestCnetWidget</name>
    <filename>a00022.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setUp</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>0c57d5bb7787b58583954802df7ca02d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>tearDown</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>682c4963001036ac0992eccc870d9f72</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_constructor</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>469e5689685ee905b8f8d131a53641c4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_destructor</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>4c5964619819a2e2200fd90c490fe2b1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_screenshot</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>6a5e760bbdc63473206e62bc741d6fb0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_resize</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>74fe3742794c9f311bb80a266d8a832d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_set_position</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>e9d917db62404cc56638dbe907570dcd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_set_z_index</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>73ad355974f48acb75bc0ebc0437d1cf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_move_up</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>e340dfd5aba18c198b6726b8403bd8b3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_move_down</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>d3b0f37802f24d2916b233d64dfdb087</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_move</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>1a1736a6e870e8296e8a9490638791cf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_show</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>0076124c57768500635d8b14301d4251</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_hide</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>9c76d3ce1dde89ad3b0a61df6183c2b2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_visibility</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>9cbba7401c8ba53024e0e52dde5394a0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_x</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>6b2e1617d6cf48be05fef3e50b3638bf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_y</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>b584c18e2045a58b654c91e920922297</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_z</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>b72f212b73732f81666897026b7c6ed0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_width</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>59dabca08b64a37f2285cf453dd39538</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>test_get_height</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>33de5d15e1718775ab258b9210e0ed1f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetWidgetForTest *</type>
      <name>root</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>be23fcf2c66f70f4097d779605ad4976</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetWidgetForTest *</type>
      <name>widget1</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>e9eeb5c70fe8d140df880afc34922492</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>CnetWidgetForTest *</type>
      <name>widget2</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>f0f031754f389c9fae4dd34bed21d6c0</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>f62c59af4382a6fea5d9f1aecb4c3a58</anchor>
      <arglist>(UnitTestCnetWidget)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>d5df11657761518fd198495027691d4f</anchor>
      <arglist>(test_constructor)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>44def3ee20badd385b7cc8e3a7822165</anchor>
      <arglist>(test_destructor)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>63157930b23208f6fb829ef64ff00bb2</anchor>
      <arglist>(test_screenshot)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>b06029eb34c6a629d12663eda31cdaad</anchor>
      <arglist>(test_resize)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>3504b0e96afa6722dc961f3d4d960f6f</anchor>
      <arglist>(test_set_position)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>2a599ed61ead920fd38bdc54de58a6a3</anchor>
      <arglist>(test_set_z_index)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>0409e7ce04b0e68833496f4242ecbcfe</anchor>
      <arglist>(test_move_up)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>36ae38477b1e505427a5e61b7777927d</anchor>
      <arglist>(test_move_down)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>55956eca25979c75d1f22ff5e0224e9e</anchor>
      <arglist>(test_move)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>01af2932a835c940791ec80e67365728</anchor>
      <arglist>(test_show)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>a97a2cfcf8eeaa2cf98aacd37872f7ca</anchor>
      <arglist>(test_hide)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>a92efdc0f91433f575c8b26b9d3539b2</anchor>
      <arglist>(test_get_visibility)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>7de9a4a5a8d829ce456765e1c2db031f</anchor>
      <arglist>(test_get_x)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>0559f91913ceabe2cc77ac7b5f97ccf5</anchor>
      <arglist>(test_get_y)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>e10d8444a844ba7565cc11ba352263d8</anchor>
      <arglist>(test_get_z)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>87fc9def24732daa79d9f5401bc365f2</anchor>
      <arglist>(test_get_width)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>aa17c11ffbcc5723a3b6506195ef8081</anchor>
      <arglist>(test_get_height)</arglist>
    </member>
    <member kind="function" protection="private">
      <type></type>
      <name>CPPUNIT_TEST_SUITE_END</name>
      <anchorfile>a00022.html</anchorfile>
      <anchor>19ac5513f3b45dad5d6de500b0969618</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="namespace">
    <name>CppUnit</name>
    <filename>a00066.html</filename>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>43a56bf21b48b263e0188239b7e715eb</anchor>
      <arglist>(const char *expected, const CnetString &amp;actual, CppUnit::SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>78e86c84a67a243000dc284bde7f9452</anchor>
      <arglist>(const char *expected, const std::string &amp;actual, CppUnit::SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>4aecaae529835a99cb8728951a79b02a</anchor>
      <arglist>(int expected, unsigned int actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>e62fedcd21ddfbf8f662b0fc08c21620</anchor>
      <arglist>(CnetColor expected, CnetColor actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>assertEquals</name>
      <anchorfile>a00066.html</anchorfile>
      <anchor>53ccc4ea6b0b4434e5c7278ef36290ef</anchor>
      <arglist>(CnetImage expected, CnetImage actual, SourceLine sourceLine, const std::string &amp;message)</arglist>
    </member>
  </compound>
</tagfile>
