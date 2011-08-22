#define CONFIG_H_REVISION "config.h $Rev: 8$ $Date: 2011-08-21 21:29:19 -0700 (Sun, 21 Aug 2011) $"
#define PAKLEDFONTS_VERSION "0.0.1"
#define COLORS_VERSION "0.0.1"

#define TAB 4


//#define TNAME "st-256color"
#define TNAME "xterm"
#define BORDER 2
#define SHELL "/bin/sh"


/* Enable "bold-is-bright" */
/* See: http://lists.suckless.org/dev/1104/7414.html*/
#define BOLD_IS_BRIGHT

/* Begin pakledfonts */
static void makemyfontsgo(void);

typedef struct sfont {
    char font[256];
    char boldfont[256];
    struct sfont *smaller;
    struct sfont *bigger;
} Sfont;

Sfont *terminus12;
Sfont *terminus14;
Sfont *terminus16;
Sfont *terminus20;
Sfont *terminus22;
Sfont *terminus24;
Sfont *terminus28;
Sfont *terminus32;
Sfont *currentfont;

static void makemyfontsgo() {
    terminus12 = (Sfont *)malloc(sizeof(Sfont));
    terminus14 = (Sfont *)malloc(sizeof(Sfont));
    terminus16 = (Sfont *)malloc(sizeof(Sfont));
    terminus20 = (Sfont *)malloc(sizeof(Sfont));
    terminus22 = (Sfont *)malloc(sizeof(Sfont));
    terminus24 = (Sfont *)malloc(sizeof(Sfont));
    terminus28 = (Sfont *)malloc(sizeof(Sfont));
    terminus32 = (Sfont *)malloc(sizeof(Sfont));

    strncpy(terminus12->font,"-*-terminus-medium-r-*-*-12-*-*-*-*-*-*-*",255);
    strncpy(terminus12->boldfont,"-*-terminus-medium-r-*-*-12-*-*-*-*-*-*-*",255);
    terminus12->smaller=NULL;
    terminus12->bigger=terminus14;

    strncpy(terminus14->font,"-*-terminus-medium-r-*-*-14-*-*-*-*-*-*-*",255);
    strncpy(terminus14->boldfont,"-*-terminus-medium-r-*-*-14-*-*-*-*-*-*-*",255);
    terminus14->smaller=terminus12;
    terminus14->bigger=terminus16;

    strncpy(terminus16->font,"-*-terminus-medium-r-*-*-16-*-*-*-*-*-*-*",255);
    strncpy(terminus16->boldfont,"-*-terminus-medium-r-*-*-16-*-*-*-*-*-*-*",255);
    terminus16->smaller=terminus14;
    terminus16->bigger=terminus20;

    strncpy(terminus20->font,"-*-terminus-medium-r-*-*-20-*-*-*-*-*-*-*",255);
    strncpy(terminus20->boldfont,"-*-terminus-medium-r-*-*-20-*-*-*-*-*-*-*",255);
    terminus20->smaller=terminus16;
    terminus20->bigger=terminus24;

    strncpy(terminus24->font,"-*-terminus-medium-r-*-*-24-*-*-*-*-*-*-*",255);
    strncpy(terminus24->boldfont,"-*-terminus-medium-r-*-*-24-*-*-*-*-*-*-*",255);
    terminus24->smaller=terminus20;
    terminus24->bigger=terminus28;

    strncpy(terminus28->font,"-*-terminus-medium-r-*-*-28-*-*-*-*-*-*-*",255);
    strncpy(terminus28->boldfont,"-*-terminus-medium-r-*-*-28-*-*-*-*-*-*-*",255);
    terminus28->smaller=terminus24;
    terminus28->bigger=terminus32;

    strncpy(terminus32->font,"-*-terminus-medium-r-*-*-32-*-*-*-*-*-*-*",255);
    strncpy(terminus32->boldfont,"-*-terminus-medium-r-*-*-32-*-*-*-*-*-*-*",255);
    terminus32->smaller=terminus28;
    terminus32->bigger=NULL;




    currentfont=terminus12;
}
/* End pakledfonts */


/* Terminal colors */
 /*static const char *colorname[] = {
	"black",
	"red3",
	"green3",
	"yellow3",
	"blue2",

	"magenta3",
	"cyan3",
	"gray90",
	"gray50",
	"red",

	"green",
	"yellow",
	"#5c5cff",
	"magenta",
	"cyan",

	"white"
};*/

/*
urxvt*color10: #00ba00
urxvt*color12:     #2F78A8
urxvt*color13:     #A55B8C
urxvt*color14:  #1db6dc
urxvt*color1: #A00000
urxvt*color2:  #00a000
urxvt*color6:  #0073B0
urxvt*color9: #EA3200



*/
	//"#ea3200",  // 1 red text
	//"#2f78a8",  // 4 cyan text ( ls directories) -- CORRECT
    //"#1db6dc", // bright cyan -- symlinks

static const char *colorname[] = {
// color0       (black)            = Black
    "#000000",  // 0
// color1       (red)              = Red3
	"#a00000",  // 1 red text
// color2       (green)            = Green3
	"#00a000",   // 2 green text
// color3       (yellow)           = Yellow3
    "#cdcd00", // 3 yellow text -- CORRECT

// color4       (blue)             = Blue3
	"#191970",  // 4 blue text ( ls directories) -- CORRECT
// color5       (magenta)          = Magenta3
	"#A55B8C",  // 5 magenta text
// color6       (cyan)             = Cyan3
	"#0073B0",  // 6 cyan text ( in vim ) 2  ( also links in ls? )
// color7       (white)            = AntiqueWhite
    "#bebebe", // 7 normal grey text

/* "bright" colors (remember to set BOLD_IS_BRIGHT) */

// color8       (bright black)     = Grey25
	"#8b8f93",
// color9       (bright red)       = Red
    "#EA3200",
// color10      (bright green)     = Green
	"#00ba00",
// color11      (bright yellow)    = Yellow
	"#FFFF00",

// color12      (bright blue)      = Blue
	"#2F78A8",
// color13      (bright magenta)   = Magenta
	"#A55B8C",
// color14      (bright cyan)      = Cyan
	"#1db6dc",
// color15      (bright white)     = White
	"#FFFFFF",
	
    //// "gray50",
	//// "#EA3200",

	//// "red",
	//// "#2F78A8", // cyan ish
	//// "#A55B8C",
	//// "#1DB6DC",
	//// "cyan",

	//// "white"
};

/* Default colors (colorname index) */
/* foreground, background, cursor */
#define DefaultFG 7
#define DefaultBG 0
#define DefaultCS 7

/* Special keys */
static Key key[] = {
	{ XK_BackSpace, "\177" },
	{ XK_Insert,    "\033[2~" },
	{ XK_Delete,    "\033[3~" },
	{ XK_Home,      "\033[1~" },
	{ XK_End,       "\033[4~" },
	{ XK_Prior,     "\033[5~" },
	{ XK_Next,      "\033[6~" },
	{ XK_F1,        "\033OP"   },
	{ XK_F2,        "\033OQ"   },
	{ XK_F3,        "\033OR"   },
	{ XK_F4,        "\033OS"   },
	{ XK_F5,        "\033[15~" },
	{ XK_F6,        "\033[17~" },
	{ XK_F7,        "\033[18~" },
	{ XK_F8,        "\033[19~" },
	{ XK_F9,        "\033[20~" },
	{ XK_F10,       "\033[21~" },
	//{ XK_F11,       "\033[23~" },
	//{ XK_F12,       "\033[24~" },
};

/* Line drawing characters (sometime specific to each font...) */
static char gfx[] = {
	['f'] = 'o',
	['g'] = '+',
	['i'] = '#',
	[255] = 0,
};
