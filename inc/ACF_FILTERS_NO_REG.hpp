#ifndef _ACF_PROCESS_APU_ACF_FILTERS_NO_REG
#define _ACF_PROCESS_APU_ACF_FILTERS_NO_REG

#include <acf_process_apu.h>
#include <ACF_FILTERS_NO_REG_APU_LOAD.h> //APU load associated with this process
#include <stdint.h>


//SCENARIO LIST*************************************************
static acf_scenario_buffer_data gScenarioBufferData0_ACF_FILTERS_NO_REG[] = {{4, 2, 2, 0, {0, 0, 0, 0}}, {4, 2, 1, 0, {0, 0, 0, 0}}, {4, 2, 4, 0, {1, 1, 2, 2}}, {4, 2, 4, 1, {1, 1, 2, 2}}, {4, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 2, 2, 0, {0, 0, 0, 0}}, {4, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData1_ACF_FILTERS_NO_REG[] = {{8, 2, 2, 0, {0, 0, 0, 0}}, {8, 2, 1, 0, {0, 0, 0, 0}}, {8, 2, 4, 0, {1, 1, 2, 2}}, {8, 2, 4, 1, {1, 1, 2, 2}}, {8, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 2, 2, 0, {0, 0, 0, 0}}, {8, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData2_ACF_FILTERS_NO_REG[] = {{12, 2, 2, 0, {0, 0, 0, 0}}, {12, 2, 1, 0, {0, 0, 0, 0}}, {12, 2, 4, 0, {1, 1, 2, 2}}, {12, 2, 4, 1, {1, 1, 2, 2}}, {12, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {12, 2, 2, 0, {0, 0, 0, 0}}, {12, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData3_ACF_FILTERS_NO_REG[] = {{16, 2, 2, 0, {0, 0, 0, 0}}, {16, 2, 1, 0, {0, 0, 0, 0}}, {16, 2, 4, 0, {1, 1, 2, 2}}, {16, 2, 4, 1, {1, 1, 2, 2}}, {16, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {16, 2, 2, 0, {0, 0, 0, 0}}, {16, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData4_ACF_FILTERS_NO_REG[] = {{20, 2, 2, 0, {0, 0, 0, 0}}, {20, 2, 1, 0, {0, 0, 0, 0}}, {20, 2, 4, 0, {1, 1, 2, 2}}, {20, 2, 4, 1, {1, 1, 2, 2}}, {20, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {20, 2, 2, 0, {0, 0, 0, 0}}, {20, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData5_ACF_FILTERS_NO_REG[] = {{24, 2, 2, 0, {0, 0, 0, 0}}, {24, 2, 1, 0, {0, 0, 0, 0}}, {24, 2, 4, 0, {1, 1, 2, 2}}, {24, 2, 4, 1, {1, 1, 2, 2}}, {24, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {24, 2, 2, 0, {0, 0, 0, 0}}, {24, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData6_ACF_FILTERS_NO_REG[] = {{28, 2, 2, 0, {0, 0, 0, 0}}, {28, 2, 1, 0, {0, 0, 0, 0}}, {28, 2, 4, 0, {1, 1, 2, 2}}, {28, 2, 4, 1, {1, 1, 2, 2}}, {28, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {28, 2, 2, 0, {0, 0, 0, 0}}, {28, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData7_ACF_FILTERS_NO_REG[] = {{32, 2, 2, 0, {0, 0, 0, 0}}, {32, 2, 1, 0, {0, 0, 0, 0}}, {32, 2, 4, 0, {1, 1, 2, 2}}, {32, 2, 4, 1, {1, 1, 2, 2}}, {32, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {32, 2, 2, 0, {0, 0, 0, 0}}, {32, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData8_ACF_FILTERS_NO_REG[] = {{36, 2, 2, 0, {0, 0, 0, 0}}, {36, 2, 1, 0, {0, 0, 0, 0}}, {36, 2, 4, 0, {1, 1, 2, 2}}, {36, 2, 4, 1, {1, 1, 2, 2}}, {36, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {36, 2, 2, 0, {0, 0, 0, 0}}, {36, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData9_ACF_FILTERS_NO_REG[] = {{40, 2, 2, 0, {0, 0, 0, 0}}, {40, 2, 1, 0, {0, 0, 0, 0}}, {40, 2, 4, 0, {1, 1, 2, 2}}, {40, 2, 4, 1, {1, 1, 2, 2}}, {40, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {40, 2, 2, 0, {0, 0, 0, 0}}, {40, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData10_ACF_FILTERS_NO_REG[] = {{44, 2, 2, 0, {0, 0, 0, 0}}, {44, 2, 1, 0, {0, 0, 0, 0}}, {44, 2, 4, 0, {1, 1, 2, 2}}, {44, 2, 4, 1, {1, 1, 2, 2}}, {44, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {44, 2, 2, 0, {0, 0, 0, 0}}, {44, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData11_ACF_FILTERS_NO_REG[] = {{48, 2, 2, 0, {0, 0, 0, 0}}, {48, 2, 1, 0, {0, 0, 0, 0}}, {48, 2, 4, 0, {1, 1, 2, 2}}, {48, 2, 4, 1, {1, 1, 2, 2}}, {48, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {48, 2, 2, 0, {0, 0, 0, 0}}, {48, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData12_ACF_FILTERS_NO_REG[] = {{52, 2, 2, 0, {0, 0, 0, 0}}, {52, 2, 1, 0, {0, 0, 0, 0}}, {52, 2, 4, 0, {1, 1, 2, 2}}, {52, 2, 4, 1, {1, 1, 2, 2}}, {52, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {52, 2, 2, 0, {0, 0, 0, 0}}, {52, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData13_ACF_FILTERS_NO_REG[] = {{56, 2, 2, 0, {0, 0, 0, 0}}, {56, 2, 1, 0, {0, 0, 0, 0}}, {56, 2, 4, 0, {1, 1, 2, 2}}, {56, 2, 4, 1, {1, 1, 2, 2}}, {56, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {56, 2, 2, 0, {0, 0, 0, 0}}, {56, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData14_ACF_FILTERS_NO_REG[] = {{60, 2, 2, 0, {0, 0, 0, 0}}, {60, 2, 1, 0, {0, 0, 0, 0}}, {60, 2, 4, 0, {1, 1, 2, 2}}, {60, 2, 4, 1, {1, 1, 2, 2}}, {60, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {60, 2, 2, 0, {0, 0, 0, 0}}, {60, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData15_ACF_FILTERS_NO_REG[] = {{64, 2, 2, 0, {0, 0, 0, 0}}, {64, 2, 1, 0, {0, 0, 0, 0}}, {64, 2, 4, 0, {1, 1, 2, 2}}, {64, 2, 4, 1, {1, 1, 2, 2}}, {64, 2, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {64, 2, 2, 0, {0, 0, 0, 0}}, {64, 2, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData16_ACF_FILTERS_NO_REG[] = {{4, 4, 2, 0, {0, 0, 0, 0}}, {4, 4, 1, 0, {0, 0, 0, 0}}, {4, 4, 4, 0, {1, 1, 2, 2}}, {4, 4, 4, 1, {1, 1, 2, 2}}, {4, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 4, 2, 0, {0, 0, 0, 0}}, {4, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData17_ACF_FILTERS_NO_REG[] = {{8, 4, 2, 0, {0, 0, 0, 0}}, {8, 4, 1, 0, {0, 0, 0, 0}}, {8, 4, 4, 0, {1, 1, 2, 2}}, {8, 4, 4, 1, {1, 1, 2, 2}}, {8, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 4, 2, 0, {0, 0, 0, 0}}, {8, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData18_ACF_FILTERS_NO_REG[] = {{12, 4, 2, 0, {0, 0, 0, 0}}, {12, 4, 1, 0, {0, 0, 0, 0}}, {12, 4, 4, 0, {1, 1, 2, 2}}, {12, 4, 4, 1, {1, 1, 2, 2}}, {12, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {12, 4, 2, 0, {0, 0, 0, 0}}, {12, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData19_ACF_FILTERS_NO_REG[] = {{16, 4, 2, 0, {0, 0, 0, 0}}, {16, 4, 1, 0, {0, 0, 0, 0}}, {16, 4, 4, 0, {1, 1, 2, 2}}, {16, 4, 4, 1, {1, 1, 2, 2}}, {16, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {16, 4, 2, 0, {0, 0, 0, 0}}, {16, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData20_ACF_FILTERS_NO_REG[] = {{20, 4, 2, 0, {0, 0, 0, 0}}, {20, 4, 1, 0, {0, 0, 0, 0}}, {20, 4, 4, 0, {1, 1, 2, 2}}, {20, 4, 4, 1, {1, 1, 2, 2}}, {20, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {20, 4, 2, 0, {0, 0, 0, 0}}, {20, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData21_ACF_FILTERS_NO_REG[] = {{24, 4, 2, 0, {0, 0, 0, 0}}, {24, 4, 1, 0, {0, 0, 0, 0}}, {24, 4, 4, 0, {1, 1, 2, 2}}, {24, 4, 4, 1, {1, 1, 2, 2}}, {24, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {24, 4, 2, 0, {0, 0, 0, 0}}, {24, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData22_ACF_FILTERS_NO_REG[] = {{28, 4, 2, 0, {0, 0, 0, 0}}, {28, 4, 1, 0, {0, 0, 0, 0}}, {28, 4, 4, 0, {1, 1, 2, 2}}, {28, 4, 4, 1, {1, 1, 2, 2}}, {28, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {28, 4, 2, 0, {0, 0, 0, 0}}, {28, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData23_ACF_FILTERS_NO_REG[] = {{32, 4, 2, 0, {0, 0, 0, 0}}, {32, 4, 1, 0, {0, 0, 0, 0}}, {32, 4, 4, 0, {1, 1, 2, 2}}, {32, 4, 4, 1, {1, 1, 2, 2}}, {32, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {32, 4, 2, 0, {0, 0, 0, 0}}, {32, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData24_ACF_FILTERS_NO_REG[] = {{36, 4, 2, 0, {0, 0, 0, 0}}, {36, 4, 1, 0, {0, 0, 0, 0}}, {36, 4, 4, 0, {1, 1, 2, 2}}, {36, 4, 4, 1, {1, 1, 2, 2}}, {36, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {36, 4, 2, 0, {0, 0, 0, 0}}, {36, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData25_ACF_FILTERS_NO_REG[] = {{40, 4, 2, 0, {0, 0, 0, 0}}, {40, 4, 1, 0, {0, 0, 0, 0}}, {40, 4, 4, 0, {1, 1, 2, 2}}, {40, 4, 4, 1, {1, 1, 2, 2}}, {40, 4, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {40, 4, 2, 0, {0, 0, 0, 0}}, {40, 4, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData26_ACF_FILTERS_NO_REG[] = {{4, 6, 2, 0, {0, 0, 0, 0}}, {4, 6, 1, 0, {0, 0, 0, 0}}, {4, 6, 4, 0, {1, 1, 2, 2}}, {4, 6, 4, 1, {1, 1, 2, 2}}, {4, 6, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 6, 2, 0, {0, 0, 0, 0}}, {4, 6, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData27_ACF_FILTERS_NO_REG[] = {{8, 6, 2, 0, {0, 0, 0, 0}}, {8, 6, 1, 0, {0, 0, 0, 0}}, {8, 6, 4, 0, {1, 1, 2, 2}}, {8, 6, 4, 1, {1, 1, 2, 2}}, {8, 6, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 6, 2, 0, {0, 0, 0, 0}}, {8, 6, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData28_ACF_FILTERS_NO_REG[] = {{12, 6, 2, 0, {0, 0, 0, 0}}, {12, 6, 1, 0, {0, 0, 0, 0}}, {12, 6, 4, 0, {1, 1, 2, 2}}, {12, 6, 4, 1, {1, 1, 2, 2}}, {12, 6, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {12, 6, 2, 0, {0, 0, 0, 0}}, {12, 6, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData29_ACF_FILTERS_NO_REG[] = {{16, 6, 2, 0, {0, 0, 0, 0}}, {16, 6, 1, 0, {0, 0, 0, 0}}, {16, 6, 4, 0, {1, 1, 2, 2}}, {16, 6, 4, 1, {1, 1, 2, 2}}, {16, 6, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {16, 6, 2, 0, {0, 0, 0, 0}}, {16, 6, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData30_ACF_FILTERS_NO_REG[] = {{20, 6, 2, 0, {0, 0, 0, 0}}, {20, 6, 1, 0, {0, 0, 0, 0}}, {20, 6, 4, 0, {1, 1, 2, 2}}, {20, 6, 4, 1, {1, 1, 2, 2}}, {20, 6, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {20, 6, 2, 0, {0, 0, 0, 0}}, {20, 6, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData31_ACF_FILTERS_NO_REG[] = {{24, 6, 2, 0, {0, 0, 0, 0}}, {24, 6, 1, 0, {0, 0, 0, 0}}, {24, 6, 4, 0, {1, 1, 2, 2}}, {24, 6, 4, 1, {1, 1, 2, 2}}, {24, 6, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {24, 6, 2, 0, {0, 0, 0, 0}}, {24, 6, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData32_ACF_FILTERS_NO_REG[] = {{4, 8, 2, 0, {0, 0, 0, 0}}, {4, 8, 1, 0, {0, 0, 0, 0}}, {4, 8, 4, 0, {1, 1, 2, 2}}, {4, 8, 4, 1, {1, 1, 2, 2}}, {4, 8, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 8, 2, 0, {0, 0, 0, 0}}, {4, 8, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData33_ACF_FILTERS_NO_REG[] = {{8, 8, 2, 0, {0, 0, 0, 0}}, {8, 8, 1, 0, {0, 0, 0, 0}}, {8, 8, 4, 0, {1, 1, 2, 2}}, {8, 8, 4, 1, {1, 1, 2, 2}}, {8, 8, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 8, 2, 0, {0, 0, 0, 0}}, {8, 8, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData34_ACF_FILTERS_NO_REG[] = {{12, 8, 2, 0, {0, 0, 0, 0}}, {12, 8, 1, 0, {0, 0, 0, 0}}, {12, 8, 4, 0, {1, 1, 2, 2}}, {12, 8, 4, 1, {1, 1, 2, 2}}, {12, 8, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {12, 8, 2, 0, {0, 0, 0, 0}}, {12, 8, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData35_ACF_FILTERS_NO_REG[] = {{16, 8, 2, 0, {0, 0, 0, 0}}, {16, 8, 1, 0, {0, 0, 0, 0}}, {16, 8, 4, 0, {1, 1, 2, 2}}, {16, 8, 4, 1, {1, 1, 2, 2}}, {16, 8, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {16, 8, 2, 0, {0, 0, 0, 0}}, {16, 8, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData36_ACF_FILTERS_NO_REG[] = {{20, 8, 2, 0, {0, 0, 0, 0}}, {20, 8, 1, 0, {0, 0, 0, 0}}, {20, 8, 4, 0, {1, 1, 2, 2}}, {20, 8, 4, 1, {1, 1, 2, 2}}, {20, 8, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {20, 8, 2, 0, {0, 0, 0, 0}}, {20, 8, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData37_ACF_FILTERS_NO_REG[] = {{4, 10, 2, 0, {0, 0, 0, 0}}, {4, 10, 1, 0, {0, 0, 0, 0}}, {4, 10, 4, 0, {1, 1, 2, 2}}, {4, 10, 4, 1, {1, 1, 2, 2}}, {4, 10, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 10, 2, 0, {0, 0, 0, 0}}, {4, 10, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData38_ACF_FILTERS_NO_REG[] = {{8, 10, 2, 0, {0, 0, 0, 0}}, {8, 10, 1, 0, {0, 0, 0, 0}}, {8, 10, 4, 0, {1, 1, 2, 2}}, {8, 10, 4, 1, {1, 1, 2, 2}}, {8, 10, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 10, 2, 0, {0, 0, 0, 0}}, {8, 10, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData39_ACF_FILTERS_NO_REG[] = {{12, 10, 2, 0, {0, 0, 0, 0}}, {12, 10, 1, 0, {0, 0, 0, 0}}, {12, 10, 4, 0, {1, 1, 2, 2}}, {12, 10, 4, 1, {1, 1, 2, 2}}, {12, 10, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {12, 10, 2, 0, {0, 0, 0, 0}}, {12, 10, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData40_ACF_FILTERS_NO_REG[] = {{16, 10, 2, 0, {0, 0, 0, 0}}, {16, 10, 1, 0, {0, 0, 0, 0}}, {16, 10, 4, 0, {1, 1, 2, 2}}, {16, 10, 4, 1, {1, 1, 2, 2}}, {16, 10, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {16, 10, 2, 0, {0, 0, 0, 0}}, {16, 10, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData41_ACF_FILTERS_NO_REG[] = {{4, 12, 2, 0, {0, 0, 0, 0}}, {4, 12, 1, 0, {0, 0, 0, 0}}, {4, 12, 4, 0, {1, 1, 2, 2}}, {4, 12, 4, 1, {1, 1, 2, 2}}, {4, 12, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 12, 2, 0, {0, 0, 0, 0}}, {4, 12, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData42_ACF_FILTERS_NO_REG[] = {{8, 12, 2, 0, {0, 0, 0, 0}}, {8, 12, 1, 0, {0, 0, 0, 0}}, {8, 12, 4, 0, {1, 1, 2, 2}}, {8, 12, 4, 1, {1, 1, 2, 2}}, {8, 12, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 12, 2, 0, {0, 0, 0, 0}}, {8, 12, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData43_ACF_FILTERS_NO_REG[] = {{12, 12, 2, 0, {0, 0, 0, 0}}, {12, 12, 1, 0, {0, 0, 0, 0}}, {12, 12, 4, 0, {1, 1, 2, 2}}, {12, 12, 4, 1, {1, 1, 2, 2}}, {12, 12, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {12, 12, 2, 0, {0, 0, 0, 0}}, {12, 12, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData44_ACF_FILTERS_NO_REG[] = {{4, 16, 2, 0, {0, 0, 0, 0}}, {4, 16, 1, 0, {0, 0, 0, 0}}, {4, 16, 4, 0, {1, 1, 2, 2}}, {4, 16, 4, 1, {1, 1, 2, 2}}, {4, 16, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 16, 2, 0, {0, 0, 0, 0}}, {4, 16, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData45_ACF_FILTERS_NO_REG[] = {{8, 16, 2, 0, {0, 0, 0, 0}}, {8, 16, 1, 0, {0, 0, 0, 0}}, {8, 16, 4, 0, {1, 1, 2, 2}}, {8, 16, 4, 1, {1, 1, 2, 2}}, {8, 16, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {8, 16, 2, 0, {0, 0, 0, 0}}, {8, 16, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData46_ACF_FILTERS_NO_REG[] = {{4, 20, 2, 0, {0, 0, 0, 0}}, {4, 20, 1, 0, {0, 0, 0, 0}}, {4, 20, 4, 0, {1, 1, 2, 2}}, {4, 20, 4, 1, {1, 1, 2, 2}}, {4, 20, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 20, 2, 0, {0, 0, 0, 0}}, {4, 20, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData47_ACF_FILTERS_NO_REG[] = {{4, 24, 2, 0, {0, 0, 0, 0}}, {4, 24, 1, 0, {0, 0, 0, 0}}, {4, 24, 4, 0, {1, 1, 2, 2}}, {4, 24, 4, 1, {1, 1, 2, 2}}, {4, 24, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 24, 2, 0, {0, 0, 0, 0}}, {4, 24, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData48_ACF_FILTERS_NO_REG[] = {{4, 28, 2, 0, {0, 0, 0, 0}}, {4, 28, 1, 0, {0, 0, 0, 0}}, {4, 28, 4, 0, {1, 1, 2, 2}}, {4, 28, 4, 1, {1, 1, 2, 2}}, {4, 28, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 28, 2, 0, {0, 0, 0, 0}}, {4, 28, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData49_ACF_FILTERS_NO_REG[] = {{4, 32, 2, 0, {0, 0, 0, 0}}, {4, 32, 1, 0, {0, 0, 0, 0}}, {4, 32, 4, 0, {1, 1, 2, 2}}, {4, 32, 4, 1, {1, 1, 2, 2}}, {4, 32, 2, 2, {0, 0, 0, 0}}, {6, 80, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 2, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {4, 32, 2, 0, {0, 0, 0, 0}}, {4, 32, 2, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}, {1, 1, 1, 0, {0, 0, 0, 0}}};

static acf_scenario_kernel_data gScenarioKernelData0_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData1_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData2_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData3_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData4_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData5_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData6_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData7_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData8_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData9_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData10_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData11_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData12_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData13_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData14_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData15_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData16_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData17_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData18_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData19_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData20_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData21_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData22_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData23_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData24_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData25_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData26_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData27_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData28_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData29_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData30_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData31_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData32_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData33_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData34_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData35_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData36_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData37_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData38_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData39_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData40_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData41_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData42_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData43_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData44_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData45_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData46_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData47_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData48_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};
static acf_scenario_kernel_data gScenarioKernelData49_ACF_FILTERS_NO_REG[] = {{0, 0}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}};

static acf_scenario gScenarioArray_ACF_FILTERS_NO_REG[] = {
{4, 1, 264, 2640, 2, gScenarioBufferData0_ACF_FILTERS_NO_REG, 208, gScenarioKernelData0_ACF_FILTERS_NO_REG, 24},
{8, 1, 448, 2640, 2, gScenarioBufferData1_ACF_FILTERS_NO_REG, 208, gScenarioKernelData1_ACF_FILTERS_NO_REG, 24},
{12, 1, 632, 2640, 2, gScenarioBufferData2_ACF_FILTERS_NO_REG, 208, gScenarioKernelData2_ACF_FILTERS_NO_REG, 24},
{16, 1, 816, 2640, 2, gScenarioBufferData3_ACF_FILTERS_NO_REG, 208, gScenarioKernelData3_ACF_FILTERS_NO_REG, 24},
{20, 1, 1000, 2640, 2, gScenarioBufferData4_ACF_FILTERS_NO_REG, 208, gScenarioKernelData4_ACF_FILTERS_NO_REG, 24},
{24, 1, 1184, 2640, 2, gScenarioBufferData5_ACF_FILTERS_NO_REG, 208, gScenarioKernelData5_ACF_FILTERS_NO_REG, 24},
{28, 1, 1368, 2640, 2, gScenarioBufferData6_ACF_FILTERS_NO_REG, 208, gScenarioKernelData6_ACF_FILTERS_NO_REG, 24},
{32, 1, 1552, 2640, 2, gScenarioBufferData7_ACF_FILTERS_NO_REG, 208, gScenarioKernelData7_ACF_FILTERS_NO_REG, 24},
{36, 1, 1736, 2640, 2, gScenarioBufferData8_ACF_FILTERS_NO_REG, 208, gScenarioKernelData8_ACF_FILTERS_NO_REG, 24},
{40, 1, 1920, 2640, 2, gScenarioBufferData9_ACF_FILTERS_NO_REG, 208, gScenarioKernelData9_ACF_FILTERS_NO_REG, 24},
{44, 1, 2104, 2640, 2, gScenarioBufferData10_ACF_FILTERS_NO_REG, 208, gScenarioKernelData10_ACF_FILTERS_NO_REG, 24},
{48, 1, 2288, 2640, 2, gScenarioBufferData11_ACF_FILTERS_NO_REG, 208, gScenarioKernelData11_ACF_FILTERS_NO_REG, 24},
{52, 1, 2472, 2640, 2, gScenarioBufferData12_ACF_FILTERS_NO_REG, 208, gScenarioKernelData12_ACF_FILTERS_NO_REG, 24},
{56, 1, 2656, 2640, 2, gScenarioBufferData13_ACF_FILTERS_NO_REG, 208, gScenarioKernelData13_ACF_FILTERS_NO_REG, 24},
{60, 1, 2840, 2640, 2, gScenarioBufferData14_ACF_FILTERS_NO_REG, 208, gScenarioKernelData14_ACF_FILTERS_NO_REG, 24},
{64, 1, 3024, 2640, 2, gScenarioBufferData15_ACF_FILTERS_NO_REG, 208, gScenarioKernelData15_ACF_FILTERS_NO_REG, 24},
{4, 2, 496, 2640, 2, gScenarioBufferData16_ACF_FILTERS_NO_REG, 208, gScenarioKernelData16_ACF_FILTERS_NO_REG, 24},
{8, 2, 848, 2640, 2, gScenarioBufferData17_ACF_FILTERS_NO_REG, 208, gScenarioKernelData17_ACF_FILTERS_NO_REG, 24},
{12, 2, 1200, 2640, 2, gScenarioBufferData18_ACF_FILTERS_NO_REG, 208, gScenarioKernelData18_ACF_FILTERS_NO_REG, 24},
{16, 2, 1552, 2640, 2, gScenarioBufferData19_ACF_FILTERS_NO_REG, 208, gScenarioKernelData19_ACF_FILTERS_NO_REG, 24},
{20, 2, 1904, 2640, 2, gScenarioBufferData20_ACF_FILTERS_NO_REG, 208, gScenarioKernelData20_ACF_FILTERS_NO_REG, 24},
{24, 2, 2256, 2640, 2, gScenarioBufferData21_ACF_FILTERS_NO_REG, 208, gScenarioKernelData21_ACF_FILTERS_NO_REG, 24},
{28, 2, 2608, 2640, 2, gScenarioBufferData22_ACF_FILTERS_NO_REG, 208, gScenarioKernelData22_ACF_FILTERS_NO_REG, 24},
{32, 2, 2960, 2640, 2, gScenarioBufferData23_ACF_FILTERS_NO_REG, 208, gScenarioKernelData23_ACF_FILTERS_NO_REG, 24},
{36, 2, 3312, 2640, 2, gScenarioBufferData24_ACF_FILTERS_NO_REG, 208, gScenarioKernelData24_ACF_FILTERS_NO_REG, 24},
{40, 2, 3664, 2640, 2, gScenarioBufferData25_ACF_FILTERS_NO_REG, 208, gScenarioKernelData25_ACF_FILTERS_NO_REG, 24},
{4, 3, 728, 2640, 2, gScenarioBufferData26_ACF_FILTERS_NO_REG, 208, gScenarioKernelData26_ACF_FILTERS_NO_REG, 24},
{8, 3, 1248, 2640, 2, gScenarioBufferData27_ACF_FILTERS_NO_REG, 208, gScenarioKernelData27_ACF_FILTERS_NO_REG, 24},
{12, 3, 1768, 2640, 2, gScenarioBufferData28_ACF_FILTERS_NO_REG, 208, gScenarioKernelData28_ACF_FILTERS_NO_REG, 24},
{16, 3, 2288, 2640, 2, gScenarioBufferData29_ACF_FILTERS_NO_REG, 208, gScenarioKernelData29_ACF_FILTERS_NO_REG, 24},
{20, 3, 2808, 2640, 2, gScenarioBufferData30_ACF_FILTERS_NO_REG, 208, gScenarioKernelData30_ACF_FILTERS_NO_REG, 24},
{24, 3, 3328, 2640, 2, gScenarioBufferData31_ACF_FILTERS_NO_REG, 208, gScenarioKernelData31_ACF_FILTERS_NO_REG, 24},
{4, 4, 960, 2640, 2, gScenarioBufferData32_ACF_FILTERS_NO_REG, 208, gScenarioKernelData32_ACF_FILTERS_NO_REG, 24},
{8, 4, 1648, 2640, 2, gScenarioBufferData33_ACF_FILTERS_NO_REG, 208, gScenarioKernelData33_ACF_FILTERS_NO_REG, 24},
{12, 4, 2336, 2640, 2, gScenarioBufferData34_ACF_FILTERS_NO_REG, 208, gScenarioKernelData34_ACF_FILTERS_NO_REG, 24},
{16, 4, 3024, 2640, 2, gScenarioBufferData35_ACF_FILTERS_NO_REG, 208, gScenarioKernelData35_ACF_FILTERS_NO_REG, 24},
{20, 4, 3712, 2640, 2, gScenarioBufferData36_ACF_FILTERS_NO_REG, 208, gScenarioKernelData36_ACF_FILTERS_NO_REG, 24},
{4, 5, 1192, 2640, 2, gScenarioBufferData37_ACF_FILTERS_NO_REG, 208, gScenarioKernelData37_ACF_FILTERS_NO_REG, 24},
{8, 5, 2048, 2640, 2, gScenarioBufferData38_ACF_FILTERS_NO_REG, 208, gScenarioKernelData38_ACF_FILTERS_NO_REG, 24},
{12, 5, 2904, 2640, 2, gScenarioBufferData39_ACF_FILTERS_NO_REG, 208, gScenarioKernelData39_ACF_FILTERS_NO_REG, 24},
{16, 5, 3760, 2640, 2, gScenarioBufferData40_ACF_FILTERS_NO_REG, 208, gScenarioKernelData40_ACF_FILTERS_NO_REG, 24},
{4, 6, 1424, 2640, 2, gScenarioBufferData41_ACF_FILTERS_NO_REG, 208, gScenarioKernelData41_ACF_FILTERS_NO_REG, 24},
{8, 6, 2448, 2640, 2, gScenarioBufferData42_ACF_FILTERS_NO_REG, 208, gScenarioKernelData42_ACF_FILTERS_NO_REG, 24},
{12, 6, 3472, 2640, 2, gScenarioBufferData43_ACF_FILTERS_NO_REG, 208, gScenarioKernelData43_ACF_FILTERS_NO_REG, 24},
{4, 8, 1888, 2640, 2, gScenarioBufferData44_ACF_FILTERS_NO_REG, 208, gScenarioKernelData44_ACF_FILTERS_NO_REG, 24},
{8, 8, 3248, 2640, 2, gScenarioBufferData45_ACF_FILTERS_NO_REG, 208, gScenarioKernelData45_ACF_FILTERS_NO_REG, 24},
{4, 10, 2352, 2640, 2, gScenarioBufferData46_ACF_FILTERS_NO_REG, 208, gScenarioKernelData46_ACF_FILTERS_NO_REG, 24},
{4, 12, 2816, 2640, 2, gScenarioBufferData47_ACF_FILTERS_NO_REG, 208, gScenarioKernelData47_ACF_FILTERS_NO_REG, 24},
{4, 14, 3280, 2640, 2, gScenarioBufferData48_ACF_FILTERS_NO_REG, 208, gScenarioKernelData48_ACF_FILTERS_NO_REG, 24},
{4, 16, 3744, 2640, 2, gScenarioBufferData49_ACF_FILTERS_NO_REG, 208, gScenarioKernelData49_ACF_FILTERS_NO_REG, 24}
};

static acf_scenario_list gScenarioList_ACF_FILTERS_NO_REG = {
50, //number of scenarios
gScenarioArray_ACF_FILTERS_NO_REG};
//**************************************************************

class ACF_FILTERS_NO_REG : public ACF_Process_APU
{

public:
   ACF_FILTERS_NO_REG(int32_t apex_id = 0) : ACF_Process_APU(apex_id)
   {} 

   int32_t Initialize()
   {
      int32_t lRetVal = 0;

      if (!Initialized()) //initialization steps that only need to occur once
      {
         SetProcessIdentifier("ACF_FILTERS_NO_REG");
         SetApuLoadInfo(ACF_FILTERS_NO_REG_LOAD_SEGMENTS,
                        ACF_FILTERS_NO_REG_LOAD_PMEM, ACF_FILTERS_NO_REG_LOAD_PMEM_SIZE,
                        ACF_FILTERS_NO_REG_LOAD_DMEM, ACF_FILTERS_NO_REG_LOAD_DMEM_SIZE,
                        0, 0); //assuming _LOAD_CMEM does not exist

         lRetVal = NonParametricInitialization();
         if (lRetVal != 0) return lRetVal;

         FlagSpatialDep();

         //***NOTE: the order in which the following ports are added is meaningful; do not change!

         AddPort("SRC_IMG", icp::DATATYPE_08U, 1, 1, 4, 2, 0, 0, 0, 1, 0, 0, 0, 2, 2, 2, 2, 0);
         AddPort("LOCAL_OFFSET", icp::DATATYPE_16U, 1, 1, 4, 2, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 0);
         AddPort("DELTA", icp::DATATYPE_08U, 2, 1, 4, 2, 0, 0, 0, 0, 0, 0, 10, 2, 2, 2, 2, 0);
         AddPort("THRESHOLD_PREVIOUS", icp::DATATYPE_08U, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 11, 0, 0, 0, 0, 0);
         AddPort("VOTE_THRESHOLD", icp::DATATYPE_08U, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 12, 0, 0, 0, 0, 0);
         AddPort("DST_IMG", icp::DATATYPE_08U, 1, 1, 4, 2, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0);
         AddPort("THRESHOLD", icp::DATATYPE_08U, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 8, 0, 0, 0, 0, 0);
         AddPort("MAX_LEFT", icp::DATATYPE_08U, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0);
         AddPort("MAX_RIGHT", icp::DATATYPE_08U, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 7, 0, 0, 0, 0, 0);
         AddPort("POINTS_DATA", icp::DATATYPE_32U, 1, 1, 6, 80, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 0, 0);

         CfgScenarios(&gScenarioList_ACF_FILTERS_NO_REG);

         FlagAsInitialized();
      }

      lRetVal = SelectApuConfiguration(mApuCfg, mApexId); //by default mApuCfg = ACF_APU_CFG__APEX0_DEFAULT and mApexId = 0

      return lRetVal;
   }
};

#endif //_ACF_PROCESS_APU_ACF_FILTERS_NO_REG
