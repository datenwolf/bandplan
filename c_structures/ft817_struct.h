
/*
	 This file is part of xmlbandplan.

    Xmlbandplan is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Xmlbandplan is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Xmlbandplan.  If not, see http://www.gnu.org/licenses/;.	  
*/

/*
 * This file has been created by xmlbandplan.
 */


#include "FT817.h" 

typedef struct 
{
  prog_char *name; // channel name
  prog_int32_t freq;  // frequency (Hz/10)  
  prog_uint16_t mode;  // mode
  prog_int32_t shift;
  prog_char *qth;
} t_channel;

		
	 

	

	{"WSPR", 13600, NULL , 0, ""},
&gt;
		&gt;
	

	 

	

	

	


	{"WSPR", 183660, NULL , 0, ""},
{"QRP", 183600,FT817_MODE_CW_NARROW, 0, ""},
&gt;
		&gt;
	
	

	 

	
	
	{"ATV", 373500, NULL , 0, ""},
{"Emergency Region 1", 376000, NULL , 0, ""},
{"QRP", 369000, NULL , 0, ""},
{"Digital Speech", 363000, NULL , 0, ""},
{"QRP", 356000,FT817_MODE_CW_NARROW, 0, ""},
{"QRS", 355500,FT817_MODE_CW_NARROW, 0, ""},
{"WSPR", 359260, NULL , 0, ""},
&gt;
		&gt;
	

	 

	
	

	{"QRP", 703000,FT817_MODE_CW_NARROW, 0, ""},
{"Emergency Region 1", 711000, NULL , 0, ""},
{"ATV", 716500, NULL , 0, ""},
{"Digital Speech", 707000, NULL , 0, ""},
{"QRP", 709000, NULL , 0, ""},
{"WSPR", 703860, NULL , 0, ""},
&gt;
		&gt;
	

	 

	

	{"QRP", 1011600,FT817_MODE_CW_NARROW, 0, ""},
{"WSPR", 1013870, NULL , 0, ""},
&gt;
		&gt;
	

	 

	

	{"QRP", 1406000,FT817_MODE_CW_NARROW, 0, ""},
{"Emergency", 1430000, NULL , 0, ""},
{"WSPR", 1409560, NULL , 0, ""},
&gt;
		&gt;
	

	 
	
	

	{"QRP", 1808600,FT817_MODE_CW_NARROW, 0, ""},
{"QRP", 1813000, NULL , 0, ""},
{"Digital Speech", 1815000, NULL , 0, ""},
{"Emergency", 1816000, NULL , 0, ""},
{"WSPR", 1810460, NULL , 0, ""},
&gt;
		&gt;
	


	 
	


	{"QRP", 2106000,FT817_MODE_CW_NARROW, 0, ""},
{"QRS", 2105500,FT817_MODE_CW_NARROW, 0, ""},
{"Digital Speech", 2118000, NULL , 0, ""},
{"WSPR", 2199460, NULL , 0, ""},
&gt;
		&gt;
	

	 
	
	
	{"QRP", 2490600,FT817_MODE_CW_NARROW, 0, ""},
{"QRP", 2495000, NULL , 0, ""},
{"WSPR", 2492460, NULL , 0, ""},
&gt;
		&gt;
	

	 

	
	{"QRP", 2836000, NULL , 0, ""},
{"Digital Speech", 2833000, NULL , 0, ""},
{"FM Call", 2960000,FT817_MODE_FM, 0, ""},
{"FM Call", 2961000,FT817_MODE_FM, 0, ""},
{"QRS", 2805500,FT817_MODE_CW_NARROW, 0, ""},
{"QRP", 2806000,FT817_MODE_CW_NARROW, 0, ""},
{"APRS", 2925000,FT817_MODE_FM, 0, ""},
{"WSPR", 2812460, NULL , 0, ""},
&gt;
		&gt;
	


	

	

	{"1", 2696500, NULL , 0, ""},
{"2", 2697500, NULL , 0, ""},
{"3", 2698500, NULL , 0, ""},
{"3A", 2699500, NULL , 0, ""},
{"4", 2700500, NULL , 0, ""},
{"5", 2701500, NULL , 0, ""},
{"6", 2702500, NULL , 0, ""},
{"7", 2703500, NULL , 0, ""},
{"7A", 2704500, NULL , 0, ""},
{"8", 2705500, NULL , 0, ""},
{"9", 2706500, NULL , 0, ""},
{"10", 2707500, NULL , 0, ""},
{"11", 2708500, NULL , 0, ""},
{"11A", 2709500, NULL , 0, ""},
{"12", 2710500, NULL , 0, ""},
{"13", 2711500,FT817_MODE_FM, 0, ""},
{"14", 2712500,FT817_MODE_FM, 0, ""},
{"15", 2713500,FT817_MODE_FM, 0, ""},
{"15A", 2715500, NULL , 0, ""},
{"16", 2715500,FT817_MODE_FM, 0, ""},
{"17", 2716500,FT817_MODE_FM, 0, ""},
{"18", 2717500,FT817_MODE_FM, 0, ""},
{"19", 2718500,FT817_MODE_FM, 0, ""},
{"19A", 2719500, NULL , 0, ""},
{"20", 2720500,FT817_MODE_FM, 0, ""},
{"21", 2721500,FT817_MODE_FM, 0, ""},
{"22", 2722500,FT817_MODE_FM, 0, ""},
{"23", 2725500,FT817_MODE_FM, 0, ""},
{"24", 2723500,FT817_MODE_FM, 0, ""},
{"25", 2724500,FT817_MODE_FM, 0, ""},
{"26", 2726500,FT817_MODE_FM, 0, ""},
{"27", 2727500,FT817_MODE_FM, 0, ""},
{"28", 2728500,FT817_MODE_FM, 0, ""},
{"29", 2729500,FT817_MODE_FM, 0, ""},
{"30", 2730500,FT817_MODE_FM, 0, ""},
{"31", 2731500,FT817_MODE_FM, 0, ""},
{"32", 2732500,FT817_MODE_FM, 0, ""},
{"33", 2733500,FT817_MODE_FM, 0, ""},
{"34", 2734500,FT817_MODE_FM, 0, ""},
{"35", 2735500,FT817_MODE_FM, 0, ""},
{"36", 2736500,FT817_MODE_FM, 0, ""},
{"37", 2737500,FT817_MODE_FM, 0, ""},
{"38", 2738500,FT817_MODE_FM, 0, ""},
{"39", 2737500,FT817_MODE_FM, 0, ""},
{"40", 2740500,FT817_MODE_FM, 0, ""},
{"41", 2656500,FT817_MODE_FM, 0, ""},
{"42", 2657500,FT817_MODE_FM, 0, ""},
{"43", 2658500,FT817_MODE_FM, 0, ""},
{"44", 2659500,FT817_MODE_FM, 0, ""},
{"45", 2660500,FT817_MODE_FM, 0, ""},
{"46", 2661500,FT817_MODE_FM, 0, ""},
{"47", 2662500,FT817_MODE_FM, 0, ""},
{"48", 2663500,FT817_MODE_FM, 0, ""},
{"49", 2664500,FT817_MODE_FM, 0, ""},
{"50", 2665500,FT817_MODE_FM, 0, ""},
{"51", 2666500,FT817_MODE_FM, 0, ""},
{"52", 2667500,FT817_MODE_FM, 0, ""},
{"53", 2668500,FT817_MODE_FM, 0, ""},
{"54", 2669500,FT817_MODE_FM, 0, ""},
{"55", 2670500,FT817_MODE_FM, 0, ""},
{"56", 2671500,FT817_MODE_FM, 0, ""},
{"57", 2672500,FT817_MODE_FM, 0, ""},
{"58", 2673500,FT817_MODE_FM, 0, ""},
{"59", 2674500,FT817_MODE_FM, 0, ""},
{"60", 2675500,FT817_MODE_FM, 0, ""},
{"61", 2676500,FT817_MODE_FM, 0, ""},
{"62", 2677500,FT817_MODE_FM, 0, ""},
{"63", 2678500,FT817_MODE_FM, 0, ""},
{"64", 2679500,FT817_MODE_FM, 0, ""},
{"65", 2680500,FT817_MODE_FM, 0, ""},
{"66", 2681500,FT817_MODE_FM, 0, ""},
{"67", 2682500,FT817_MODE_FM, 0, ""},
{"68", 2683500,FT817_MODE_FM, 0, ""},
{"69", 2684500,FT817_MODE_FM, 0, ""},
{"70", 2685500,FT817_MODE_FM, 0, ""},
{"71", 2686500,FT817_MODE_FM, 0, ""},
{"72", 2687500,FT817_MODE_FM, 0, ""},
{"73", 2688500,FT817_MODE_FM, 0, ""},
{"74", 2689500,FT817_MODE_FM, 0, ""},
{"75", 2690500,FT817_MODE_FM, 0, ""},
{"76", 2691500,FT817_MODE_FM, 0, ""},
{"77", 2692500,FT817_MODE_FM, 0, ""},
{"78", 2693500,FT817_MODE_FM, 0, ""},
{"79", 2694500,FT817_MODE_FM, 0, ""},
{"80", 2695500,FT817_MODE_FM, 0, ""},
&gt;
		&gt;
	

	 

	

	

	{"WSPR", 502930, NULL , 0, ""},
&gt;
		&gt;
	


	 

	


	{"S1", 14521250,FT817_MODE_FM, 0, ""},
{"ARPS", 14480000,FT817_MODE_FM, 0, ""},
{"Echolink", 14496250,FT817_MODE_FM, 0, ""},
{"Echolink", 14497500,FT817_MODE_FM, 0, ""},
{"RTTY local", 14530000, NULL , 0, ""},
{"DV CQ", 14537500, NULL , 0, ""},
{"PSK31", 14417000, NULL , 0, ""},
{"SSB CQ", 14430000, NULL , 0, ""},
{"MGM CQ", 14437000, NULL , 0, ""},
{"WSPR", 14448900, NULL , 0, ""},
{"SSTV CQ", 14450000, NULL , 0, ""},
{"ATV", 14452500, NULL , 0, ""},
{"RTTY CQ", 14460000, NULL , 0, ""},
{"Fax CQ", 14470000, NULL , 0, ""},
{"ATV CQ / Callback", 14475000, NULL , 0, ""},
&gt;
		&gt;
	

	 

	

	&gt;
		{"DB0VA", 43932500,FT817_MODE_FM, -760000, "JO40BC"},
{"DB0ESW", 43905000,FT817_MODE_FM, -760000, "JO51AE"},
&gt;
	

	

	

	{"1", 43307500,FT817_MODE_FM, 0, ""},
{"2", 43310000,FT817_MODE_FM, 0, ""},
{"3", 43312500,FT817_MODE_FM, 0, ""},
{"4", 43315000,FT817_MODE_FM, 0, ""},
{"5", 43317500,FT817_MODE_FM, 0, ""},
{"6", 43320000,FT817_MODE_FM, 0, ""},
{"7", 43322500,FT817_MODE_FM, 0, ""},
{"8", 43325000,FT817_MODE_FM, 0, ""},
{"9", 43327500,FT817_MODE_FM, 0, ""},
{"10", 43330000,FT817_MODE_FM, 0, ""},
{"11", 43332500,FT817_MODE_FM, 0, ""},
{"12", 43335000,FT817_MODE_FM, 0, ""},
{"13", 43337500,FT817_MODE_FM, 0, ""},
{"14", 43340000,FT817_MODE_FM, 0, ""},
{"15", 43342500,FT817_MODE_FM, 0, ""},
{"16", 43345000,FT817_MODE_FM, 0, ""},
{"17", 43347500,FT817_MODE_FM, 0, ""},
{"18", 43350000,FT817_MODE_FM, 0, ""},
{"19", 43352500,FT817_MODE_FM, 0, ""},
{"20", 43355000,FT817_MODE_FM, 0, ""},
{"21", 43357500,FT817_MODE_FM, 0, ""},
{"22", 43360000,FT817_MODE_FM, 0, ""},
{"23", 43362500,FT817_MODE_FM, 0, ""},
{"24", 43365000,FT817_MODE_FM, 0, ""},
{"25", 43367500,FT817_MODE_FM, 0, ""},
{"26", 43370000,FT817_MODE_FM, 0, ""},
{"27", 43372500,FT817_MODE_FM, 0, ""},
{"28", 43375000,FT817_MODE_FM, 0, ""},
{"29", 43377500,FT817_MODE_FM, 0, ""},
{"30", 43380000,FT817_MODE_FM, 0, ""},
{"31", 43382500,FT817_MODE_FM, 0, ""},
{"32", 43385000,FT817_MODE_FM, 0, ""},
{"33", 43387500,FT817_MODE_FM, 0, ""},
{"34", 43390000,FT817_MODE_FM, 0, ""},
{"35", 43392500,FT817_MODE_FM, 0, ""},
{"36", 43395000,FT817_MODE_FM, 0, ""},
{"37", 43397500,FT817_MODE_FM, 0, ""},
{"38", 43400000,FT817_MODE_FM, 0, ""},
{"39", 43402500,FT817_MODE_FM, 0, ""},
{"40", 43405000,FT817_MODE_FM, 0, ""},
{"41", 43407500,FT817_MODE_FM, 0, ""},
{"42", 43410000,FT817_MODE_FM, 0, ""},
{"43", 43412500,FT817_MODE_FM, 0, ""},
{"44", 43415000,FT817_MODE_FM, 0, ""},
{"45", 43417500,FT817_MODE_FM, 0, ""},
{"46", 43420000,FT817_MODE_FM, 0, ""},
{"47", 43422500,FT817_MODE_FM, 0, ""},
{"48", 43425000,FT817_MODE_FM, 0, ""},
{"49", 43427500,FT817_MODE_FM, 0, ""},
{"50", 43430000,FT817_MODE_FM, 0, ""},
{"51", 43432500,FT817_MODE_FM, 0, ""},
{"52", 43435000,FT817_MODE_FM, 0, ""},
{"53", 43437500,FT817_MODE_FM, 0, ""},
{"54", 43440000,FT817_MODE_FM, 0, ""},
{"55", 43442500,FT817_MODE_FM, 0, ""},
{"56", 43445000,FT817_MODE_FM, 0, ""},
{"57", 43447500,FT817_MODE_FM, 0, ""},
{"58", 43450000,FT817_MODE_FM, 0, ""},
{"59", 43452500,FT817_MODE_FM, 0, ""},
{"60", 43455000,FT817_MODE_FM, 0, ""},
{"61", 43457500,FT817_MODE_FM, 0, ""},
{"62", 43460000,FT817_MODE_FM, 0, ""},
{"63", 43462500,FT817_MODE_FM, 0, ""},
{"64", 43465000,FT817_MODE_FM, 0, ""},
{"65", 43467500,FT817_MODE_FM, 0, ""},
{"66", 43470000,FT817_MODE_FM, 0, ""},
{"67", 43472500,FT817_MODE_FM, 0, ""},
{"68", 43475000,FT817_MODE_FM, 0, ""},
{"69", 43477500,FT817_MODE_FM, 0, ""},
&gt;
		&gt;
	

	

	

	
	

	{"1", 44600620,FT817_MODE_FM, 0, ""},
{"2", 44601875,FT817_MODE_FM, 0, ""},
{"3", 44603125,FT817_MODE_FM, 0, ""},
{"4", 44604375,FT817_MODE_FM, 0, ""},
{"5", 44605625,FT817_MODE_FM, 0, ""},
{"6", 44606875,FT817_MODE_FM, 0, ""},
{"7", 44608125,FT817_MODE_FM, 0, ""},
{"8", 44609375,FT817_MODE_FM, 0, ""},
&gt;
		&gt;
	

