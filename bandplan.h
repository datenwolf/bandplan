/*************************************************************************************************/
// Bands configuration
typedef struct
{   
  char *name; // name of the band
  long low;
  long high; // band boundaries
  byte mode;  // main mode for this band
} t_band;

// NB   1800 -> 180030 Hz
// =>   3500 -> 350000

// structure of the actual configured bands
const t_band bands[] = {
  {"80m",    350000,    358000, FT817_MODE_CW_NARROW},
  {"40m",    700000,    710000, FT817_MODE_CW_NARROW},
  {"30m",   1010000,   1020000, FT817_MODE_CW_NARROW},
  {"20m",   1400000,   1407000, FT817_MODE_CW_NARROW},
  {"17m",   1806800,   1809500, FT817_MODE_CW_NARROW},
  {"15m",   2100000,   2107000, FT817_MODE_CW_NARROW},
  {"12m",   2489000,   2491500, FT817_MODE_CW_NARROW},
  {"10m",   2800000,   2807000, FT817_MODE_CW_NARROW},
  {"CB",    2656500,   2740500, FT817_MODE_FM},
  {"2m",   14400000,  14600000, FT817_MODE_FM},
  {"70cm", 43000000,  44000000, FT817_MODE_FM},
};
//int nbands = 11;//sizeof(bands)/sizeof(bands[0]);
int nbands = sizeof(bands)/sizeof(bands[0]);
        
// Single channels
typedef struct 
{
  char *name; // channel name
  long freq; // frequency
  byte mode; // mode
  // the following variables will be used for the automatic repeater configuration based on the GPS signal
  byte rpt; // repeater shift
  //float lat, lon;
  // coverage parameter
} t_channel;

// structure of the actual configured channels
// FIXME: this can go to a separate file; scripts may help creating this structure
const t_channel channels[] = {
  {"QRP 80m",          356000,   FT817_MODE_CW, NULL},
  {"QRP 40m",          703000,   FT817_MODE_CW, NULL},
  {"QRP 30m",         1011600,   FT817_MODE_CW, NULL},
  {"QRP 20m",         1406000,   FT817_MODE_CW, NULL},
  {"QRP 17m",         1808600,   FT817_MODE_CW, NULL},
  {"QRP 15m",         2106000,   FT817_MODE_CW, NULL},
  {"QRP 12m",         2490600,   FT817_MODE_CW, NULL},
  {"QRP 10m",         2806000,   FT817_MODE_CW, NULL}, 
  {"APRS 10m",        2925000,   FT817_MODE_FM, NULL},
  {"ARPS 2m",         1448000,   FT817_MODE_FM, NULL},  
  {"CB 1",            2696500,    FT817_MODE_FM, NULL},
  {"CB 2",            2697500,    FT817_MODE_FM, NULL},
  {"CB 3",            2698500,    FT817_MODE_FM, NULL},
  {"CB 4",            2700500,    FT817_MODE_FM, NULL},
  {"CB 5",            2701500,    FT817_MODE_FM, NULL},
  {"CB 6",            2702500,    FT817_MODE_FM, NULL},
  {"CB 7",            2703500,    FT817_MODE_FM, NULL},
  {"CB 8",            2705500,    FT817_MODE_FM, NULL},
  {"CB 9",            2706500,    FT817_MODE_FM, NULL},
  {"CB 10",           2707500,    FT817_MODE_FM, NULL},
  {"CB 11",           2708500,    FT817_MODE_FM, NULL},
  {"CB 12",           2710500,    FT817_MODE_FM, NULL},
  {"CB 13",           2711500,    FT817_MODE_FM, NULL},
  {"CB 14",           2712500,    FT817_MODE_FM, NULL},
  {"CB 15",           2713500,    FT817_MODE_FM, NULL},
  {"CB 16",           2715500,    FT817_MODE_FM, NULL},
  {"CB 17",           2716500,    FT817_MODE_FM, NULL},
  {"CB 18",           2717500,    FT817_MODE_FM, NULL},
  {"CB 19",           2718500,    FT817_MODE_FM, NULL},
  {"CB 20",           2720500,    FT817_MODE_FM, NULL},
  {"CB 21",           2721500,    FT817_MODE_FM, NULL},
  {"CB 22",           2722500,    FT817_MODE_FM, NULL},
  {"CB 23",           2725500,    FT817_MODE_FM, NULL},
  {"CB 24",           2723500,    FT817_MODE_FM, NULL},
  {"CB 25",           2724500,    FT817_MODE_FM, NULL},
  {"CB 26",           2726500,    FT817_MODE_FM, NULL},
  {"CB 27",           2727500,    FT817_MODE_FM, NULL},
  {"CB 28",           2728500,    FT817_MODE_FM, NULL},
  {"CB 29",           2729500,    FT817_MODE_FM, NULL},
  {"CB 30",           2730500,    FT817_MODE_FM, NULL},
  {"CB 31",           2731500,    FT817_MODE_FM, NULL},
  {"CB 32",           2732500,    FT817_MODE_FM, NULL},
  {"CB 33",           2733500,    FT817_MODE_FM, NULL},
  {"CB 34",           2734500,    FT817_MODE_FM, NULL},
  {"CB 35",           2735500,    FT817_MODE_FM, NULL},
  {"CB 36",           2736500,    FT817_MODE_FM, NULL},
  {"CB 37",           2737500,    FT817_MODE_FM, NULL},
  {"CB 38",           2738500,    FT817_MODE_FM, NULL},
  {"CB 39",           2737500,    FT817_MODE_FM, NULL},
  {"CB 40",           2740500,    FT817_MODE_FM, NULL},
  {"2m Ch1",         14521250,    FT817_MODE_FM, NULL}, // 12,5kHz distance, simplex channels  
  {"DB0VA",          43932500,    FT817_MODE_FM, FT817_RPT_MINUS}, //, 50.109122, 8.133403}, // repeaters
  {"PMR 1",          44600625,    FT817_MODE_FM, NULL},
  {"PMR 2",          44601875,    FT817_MODE_FM, NULL},
  {"PMR 3",          44603125,    FT817_MODE_FM, NULL},
  {"PMR 4",          44604375,    FT817_MODE_FM, NULL},
  {"PMR 5",          44605625,    FT817_MODE_FM, NULL},
  {"PMR 6",          44606875,    FT817_MODE_FM, NULL},
  {"PMR 7",          44608125,    FT817_MODE_FM, NULL},
  {"PMR 8",          44609375,    FT817_MODE_FM, NULL},  // 16 Kanäle Digital  6,25 KHz steps 446.103125 MHz - 446.196875 MHz
  {"LPD 1",          43307500,    FT817_MODE_FM, NULL},  
  {"LPD 2",          43310000,    FT817_MODE_FM, NULL},  
  {"LPD 3",          43312500,    FT817_MODE_FM, NULL},  
  {"LPD 4",          43315000,    FT817_MODE_FM, NULL},  
  {"LPD 5",          43317500,    FT817_MODE_FM, NULL},  
  {"LPD 6",          43320000,    FT817_MODE_FM, NULL},  
  {"LPD 7",          43322500,    FT817_MODE_FM, NULL},  
  {"LPD 8",          43325000,    FT817_MODE_FM, NULL},  
  {"LPD 9",          43327500,    FT817_MODE_FM, NULL},  
  {"LPD 10",         43330000,    FT817_MODE_FM, NULL},  
}; 
//int num_ch = 70;// sizeof(channels)/sizeof(channels[0]);
int num_ch = sizeof(channels)/sizeof(channels[0]);