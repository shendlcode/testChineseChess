#ifndef CHINESECHESSUTILS_H
#define CHINESECHESSUTILS_H
#include <QColor>
#define CMDS_LENGTH  1024
#define STR_LEN 256
#define ARRAY_LEN  256
#define MAX_HORIZONTAL  100
#define MAX_VERTICAL  100

enum ChineseChessType{
    ChineseChessType_NONE,
     ChineseChessType_BLACK,
    ChineseChessType_RED
};
extern const char *g_ChineseChessTypeCStr[];
extern QColor g_ChineseChessTypeColor[];



#endif // CHINESECHESSUTILS_H
