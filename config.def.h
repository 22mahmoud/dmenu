/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace 10";

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char normfgfuzzy[]  =  "#ffc978";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSelHighlight] = { selfgcolor, selbgcolor},
	[SchemeNormHighlight] = { normfgfuzzy, normbgcolor },
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
  { "background",   STRING,  &normbgcolor },
  { "foreground",   STRING,  &normfgcolor },
  { "color8",       STRING,  &selbgcolor },
  { "foreground",   STRING,  &selfgcolor },
  { "color3",       STRING,  &normfgfuzzy },
  { "prompt",       STRING,  &prompt        },
};
