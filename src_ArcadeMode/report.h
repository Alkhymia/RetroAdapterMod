#ifndef uchar
#define uchar   unsigned char
#endif

#define HAT_UP      0x01
#define HAT_RIGHT   0x02
#define HAT_DOWN    0x04
#define HAT_LEFT    0x08

typedef struct {
	char	reportid;	// 0
	char	x;			// 1
	char	y;			// 2
	char	rx;			// 3
	char	ry;			// 4
	uchar	hat;		// 5
	uchar	b1;			// 6
	uchar	b2;			// 7
} report_t;

typedef struct{
	char	reportid;
    uchar   b1;
    char    x;
    char    y;
    char    w;
}reportMouse_t;