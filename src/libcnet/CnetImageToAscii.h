/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_IMAGE_TO_ASCII_H
#define CNET_IMAGE_TO_ASCII_H

//pour l'exportation en String
#define CNET_REAPEAT_CHAR(c) c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c,c
const char CNET_COLOR_TO_ASCII[]={CNET_REAPEAT_CHAR('#'),CNET_REAPEAT_CHAR('$'),CNET_REAPEAT_CHAR('8'),
                       CNET_REAPEAT_CHAR('&'),CNET_REAPEAT_CHAR('%'),CNET_REAPEAT_CHAR('0'),
                       CNET_REAPEAT_CHAR('O'),CNET_REAPEAT_CHAR('='),CNET_REAPEAT_CHAR('?'),
                       CNET_REAPEAT_CHAR('1'),CNET_REAPEAT_CHAR('!'),CNET_REAPEAT_CHAR(';'),
                       CNET_REAPEAT_CHAR(','),CNET_REAPEAT_CHAR('.'),CNET_REAPEAT_CHAR(' '),
                       ' '};

#endif
