static const char norm_fg[] = "#e9cabf";
static const char norm_bg[] = "#12121e";
static const char norm_border[] = "#a38d85";

static const char sel_fg[] = "#e9cabf";
static const char sel_bg[] = "#9C6368";
static const char sel_border[] = "#e9cabf";

static const char urg_fg[] = "#e9cabf";
static const char urg_bg[] = "#B65F48";
static const char urg_border[] = "#B65F48";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
