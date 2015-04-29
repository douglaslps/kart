#include "point.h"

static const struct point coordinates_[] = {
    {381, 350},
    {481, 350}, {659, 353}, {664, 325},
    {703, 278}, {667, 149}, {700, 73},
    {675, 28}, {544, 25}, {439, 27},
    {356, 51}, {326, 87}, {290, 121},
    {275, 193}, {291, 224}, {381, 225},
    {421, 225}, {442, 220}, {482, 220},
    {500, 210}, {516, 196}, {490, 159},
    {445, 166}, {401, 179}, {395, 135},
    {416, 91}, {452, 80}, {557, 107},
    {598, 188}, {632, 207}, {607, 264},
    {582, 287}, {576, 298}, {530, 299},
    {411, 265}, {272, 315}, {215, 261},
    {190, 228}, {207, 153}, {256, 102},
    {252, 69}, {251, 51}, {194, 22},
    {139, 31}, {125, 22}, {59, 57},
    {24, 123}, {26, 199}, {35, 243},
    {52, 321}, {114, 342}, {158, 355},
    {273, 356}, {306, 351}, {381, 350}
};
const struct point* coordinates = coordinates_;

extern const int ncoordinates =
    sizeof(coordinates_) / sizeof(*coordinates_);

#define NRUNNERS 11
#define NLAPS 21

static const char *names_[NRUNNERS] = {
    "3-rtrevisan",
    "8-rcastanho",
    "9-mrusso",
    "21-fgeneroso",
    "22-vmeira",
    "23-lvivo",
    "24-fprado",
    "25-dpereira",
    "27-lleite",
    "28-evandro",
    "30-ernani"
};
const char **names = (const char**) names_;

static const int colors_[NRUNNERS][3] = {
    { 186, 149, 177 },
    { 218, 218, 161 },
    { 27, 77, 17 },
    { 236, 108, 218 },
    { 99, 13, 44 },
    { 74, 141, 225 },
    { 64, 113, 216 },
    { 161, 207, 75 },
    { 20, 95, 1 },
    { 31, 226, 86 },
    { 209, 192, 118 },
};
const int* colors = (const int*) colors_;

static const double laptimes_[NRUNNERS][NLAPS] =  {
    {65907,62609,157342,69641,63639,63198,62359,64527,63054,60705,61120,62100,61560,61627,61299,62154,62808,62920},
    {73229,64277,65202,64790,63783,65368,64432,63731,65701,62609,64217,63412,63794,62591,62016,62199,62896,64329,67874},
    {70888,64097,65001,63490,63056,63901,61823,62302,62155,61662,61225,62392,62337,62014,60418,61049,61063,60691,61016,64681},
    {63219,61119,59150,59287,59135,60076,58945,59750,59720,59907,59253,59571,59352,59070,59545,59657,59520,59423,59095,58754,59611},
    {61675,58186,58814,58420,58720,59016,59133,58260,59345,58080,58499,57952,57505,57158,57014,58876,57209,57767,57126,57345,57391},
    {227336,60313,64138,62137,60223,57842,58862,58205,60018,59296,57319,60428,57627,57642,57778,57724,57071,57277},
    {61987,58661,59717,58440,58379,58956,59727,57649,145610,58943,58772,59338,59445,58635,58594,58299,58769,58707,58707},
    {62826,59814,58844,58521,58228,59079,58703,58278,58533,58296,57977,58187,57513,58054,57769,58061,57842,56786,57072,57043,58657},
    {66100,61717,60924,61735,61857,62918,71945,61259,62194,61113,60911,61062,60967,61031,63283,60467,60730,60343,61129,60474},
    {69817,60890,97037,59642,103049,60186,68674,58777,59187,68046,59941,59903,59825,59486,58695,58253,59036,60819,58982},
    {73865,63173,64954,63472,62238,64233,61748,63399,67810,62642,61726,63424,69514,61708,60594,60043,74281,61899,66704}
};

const double* laptimes = (const double*) laptimes_;

extern const int nrunners = NRUNNERS;
extern const int nlaps = NLAPS;