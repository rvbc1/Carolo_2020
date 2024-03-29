/*
 * smartport.h
 *
 *  Created on: 23.06.2018
 *      Author: mice
 *
 * This file can contain source code parts from Betaflight,
 * an Open Source Project with GNU General Public License 3.
 * https://github.com/betaflight/betaflight
 *
 */

#ifndef LIBRARIES_SMARTPORT_H_
#define LIBRARIES_SMARTPORT_H_

#define SMARTPORT_MIN_TELEMETRY_RESPONSE_DELAY_US 500

enum
{
    FSSP_DATAID_SPEED      = 0x0830 ,
    FSSP_DATAID_VFAS       = 0x0210 ,
    FSSP_DATAID_VFAS1      = 0x0211 ,
    FSSP_DATAID_VFAS2      = 0x0212 ,
    FSSP_DATAID_VFAS3      = 0x0213 ,
    FSSP_DATAID_VFAS4      = 0x0214 ,
    FSSP_DATAID_VFAS5      = 0x0215 ,
    FSSP_DATAID_VFAS6      = 0x0216 ,
    FSSP_DATAID_VFAS7      = 0x0217 ,
    FSSP_DATAID_VFAS8      = 0x0218 ,
    FSSP_DATAID_CURRENT    = 0x0200 ,
    FSSP_DATAID_CURRENT1   = 0x0201 ,
    FSSP_DATAID_CURRENT2   = 0x0202 ,
    FSSP_DATAID_CURRENT3   = 0x0203 ,
    FSSP_DATAID_CURRENT4   = 0x0204 ,
    FSSP_DATAID_CURRENT5   = 0x0205 ,
    FSSP_DATAID_CURRENT6   = 0x0206 ,
    FSSP_DATAID_CURRENT7   = 0x0207 ,
    FSSP_DATAID_CURRENT8   = 0x0208 ,
    FSSP_DATAID_RPM        = 0x0500 ,
    FSSP_DATAID_RPM1       = 0x0501 ,
    FSSP_DATAID_RPM2       = 0x0502 ,
    FSSP_DATAID_RPM3       = 0x0503 ,
    FSSP_DATAID_RPM4       = 0x0504 ,
    FSSP_DATAID_RPM5       = 0x0505 ,
    FSSP_DATAID_RPM6       = 0x0506 ,
    FSSP_DATAID_RPM7       = 0x0507 ,
    FSSP_DATAID_RPM8       = 0x0508 ,
    FSSP_DATAID_ALTITUDE   = 0x0100 ,
    FSSP_DATAID_FUEL       = 0x0600 ,
    FSSP_DATAID_ADC1       = 0xF102 ,
    FSSP_DATAID_ADC2       = 0xF103 ,
    FSSP_DATAID_LATLONG    = 0x0800 ,
    FSSP_DATAID_CAP_USED   = 0x0600 ,
    FSSP_DATAID_VARIO      = 0x0110 ,
    FSSP_DATAID_CELLS      = 0x0300 ,
    FSSP_DATAID_CELLS_LAST = 0x030F ,
    FSSP_DATAID_HEADING    = 0x0840 ,
    FSSP_DATAID_ACCX       = 0x0700 ,
    FSSP_DATAID_ACCY       = 0x0710 ,
    FSSP_DATAID_ACCZ       = 0x0720 ,
    FSSP_DATAID_T1         = 0x0400 ,
    FSSP_DATAID_T2         = 0x0410 ,
    FSSP_DATAID_HOME_DIST  = 0x0420 ,
    FSSP_DATAID_GPS_ALT    = 0x0820 ,
    FSSP_DATAID_ASPD       = 0x0A00 ,
    FSSP_DATAID_TEMP       = 0x0B70 ,
    FSSP_DATAID_TEMP1      = 0x0B71 ,
    FSSP_DATAID_TEMP2      = 0x0B72 ,
    FSSP_DATAID_TEMP3      = 0x0B73 ,
    FSSP_DATAID_TEMP4      = 0x0B74 ,
    FSSP_DATAID_TEMP5      = 0x0B75 ,
    FSSP_DATAID_TEMP6      = 0x0B76 ,
    FSSP_DATAID_TEMP7      = 0x0B77 ,
    FSSP_DATAID_TEMP8      = 0x0B78 ,
    FSSP_DATAID_A3         = 0x0900 ,
    FSSP_DATAID_A4         = 0x0910
};
enum
{
    FSSP_START_STOP = 0x7E,

    FSSP_DLE        = 0x7D,
    FSSP_DLE_XOR    = 0x20,

    FSSP_DATA_FRAME = 0x10,
    FSSP_MSPC_FRAME_SMARTPORT = 0x30, // MSP client frame
    FSSP_MSPC_FRAME_FPORT = 0x31, // MSP client frame
    FSSP_MSPS_FRAME = 0x32, // MSP server frame

    // ID of sensor. Must be something that is polled by FrSky RX
    FSSP_SENSOR_ID1 = 0x1B,
    FSSP_SENSOR_ID2 = 0x0D,
    FSSP_SENSOR_ID3 = 0x34,
    FSSP_SENSOR_ID4 = 0x67
    // there are 32 ID's polled by smartport master
    // remaining 3 bits are crc (according to comments in openTx code)
};


#endif /* LIBRARIES_SMARTPORT_H_ */
