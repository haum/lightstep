EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:stairsheeldtoheaven-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "StairSheeldtoHeaven"
Date "07 oct. 2015"
Rev "0.1"
Comp "Haum.org"
Comment1 "Arduino ATX Power connect board"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ARDUINO_SHIELD_R3 SHIELD1
U 1 1 56142E35
P 2450 2300
F 0 "SHIELD1" H 2100 3500 60  0000 C CNN
F 1 "ARDUINO_SHIELD_R3" H 2300 3300 60  0000 C CNN
F 2 "JbLb_lib:ARDUINO_SHIELD_R3" H 2450 2300 60  0001 C CNN
F 3 "" H 2450 2300 60  0000 C CNN
	1    2450 2300
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P22
U 1 1 561438F4
P 10525 1300
F 0 "P22" H 10525 1450 50  0000 C CNN
F 1 "17" V 10625 1300 50  0000 C CNN
F 2 "Connect:bornier2" H 10525 1300 60  0001 C CNN
F 3 "" H 10525 1300 60  0000 C CNN
	1    10525 1300
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P23
U 1 1 56143B04
P 10525 1850
F 0 "P23" H 10525 2000 50  0000 C CNN
F 1 "18" V 10625 1850 50  0000 C CNN
F 2 "Connect:bornier2" H 10525 1850 60  0001 C CNN
F 3 "" H 10525 1850 60  0000 C CNN
	1    10525 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P24
U 1 1 56143B0A
P 10525 2400
F 0 "P24" H 10525 2550 50  0000 C CNN
F 1 "19" V 10625 2400 50  0000 C CNN
F 2 "Connect:bornier2" H 10525 2400 60  0001 C CNN
F 3 "" H 10525 2400 60  0000 C CNN
	1    10525 2400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P25
U 1 1 56143B10
P 10525 2950
F 0 "P25" H 10525 3100 50  0000 C CNN
F 1 "20" V 10625 2950 50  0000 C CNN
F 2 "Connect:bornier2" H 10525 2950 60  0001 C CNN
F 3 "" H 10525 2950 60  0000 C CNN
	1    10525 2950
	1    0    0    -1  
$EndComp
$Comp
L JUMPER JP1
U 1 1 561441BD
P 4450 4600
F 0 "JP1" H 4450 4750 50  0000 C CNN
F 1 "JUMPER" H 4450 4520 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 4450 4600 60  0001 C CNN
F 3 "" H 4450 4600 60  0000 C CNN
	1    4450 4600
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P4
U 1 1 56144C11
P 7200 3950
F 0 "P4" V 7150 3950 40  0000 C CNN
F 1 "5V" V 7250 3950 40  0000 C CNN
F 2 "Connect:bornier2" H 7200 3950 60  0001 C CNN
F 3 "" H 7200 3950 60  0000 C CNN
	1    7200 3950
	0    -1   -1   0   
$EndComp
$Comp
L CONN_2 P9
U 1 1 56144C12
P 7700 3950
F 0 "P9" V 7650 3950 40  0000 C CNN
F 1 "12V" V 7750 3950 40  0000 C CNN
F 2 "Connect:bornier2" H 7700 3950 60  0001 C CNN
F 3 "" H 7700 3950 60  0000 C CNN
	1    7700 3950
	0    -1   -1   0   
$EndComp
Text Label 4650 1650 0    60   ~ 0
3V3
$Comp
L GND-RESCUE-atxpowerboard #PWR01
U 1 1 56144C14
P 4200 2150
F 0 "#PWR01" H 4200 2150 30  0001 C CNN
F 1 "GND" H 4200 2080 30  0001 C CNN
F 2 "" H 4200 2150 60  0000 C CNN
F 3 "" H 4200 2150 60  0000 C CNN
	1    4200 2150
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-atxpowerboard #PWR02
U 1 1 56144C15
P 6000 2150
F 0 "#PWR02" H 6000 2150 30  0001 C CNN
F 1 "GND" H 6000 2080 30  0001 C CNN
F 2 "" H 6000 2150 60  0000 C CNN
F 3 "" H 6000 2150 60  0000 C CNN
	1    6000 2150
	1    0    0    -1  
$EndComp
Text Label 4500 2150 0    60   ~ 0
5V
Text Label 5850 2150 2    60   ~ 0
PSON
Text Label 4500 2550 0    60   ~ 0
PG
Text Label 4250 2650 0    60   ~ 0
5V_SB
Text Label 5950 2650 2    60   ~ 0
5V
Text Label 4350 2750 0    60   ~ 0
12V
Text Label 7800 4600 1    60   ~ 0
12V
Text Label 7300 4600 1    60   ~ 0
5V
$Comp
L GND-RESCUE-atxpowerboard #PWR03
U 1 1 56144C18
P 7600 4450
F 0 "#PWR03" H 7600 4450 30  0001 C CNN
F 1 "GND" H 7600 4380 30  0001 C CNN
F 2 "" H 7600 4450 60  0000 C CNN
F 3 "" H 7600 4450 60  0000 C CNN
	1    7600 4450
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-atxpowerboard #PWR04
U 1 1 56144C19
P 7100 4450
F 0 "#PWR04" H 7100 4450 30  0001 C CNN
F 1 "GND" H 7100 4380 30  0001 C CNN
F 2 "" H 7100 4450 60  0000 C CNN
F 3 "" H 7100 4450 60  0000 C CNN
	1    7100 4450
	1    0    0    -1  
$EndComp
$Comp
L CONN_10X2 P1
U 1 1 56144C1C
P 5150 2300
F 0 "P1" H 5150 2850 60  0000 C CNN
F 1 "CONN_10X2" V 5150 2200 50  0000 C CNN
F 2 "JbLb_lib:ATX20" H 5150 2300 60  0001 C CNN
F 3 "" H 5150 2300 60  0000 C CNN
	1    5150 2300
	1    0    0    -1  
$EndComp
NoConn ~ 5550 1950
NoConn ~ 5550 2550
Text Label 10225 1350 0    60   ~ 0
17
Text Label 10225 1900 0    60   ~ 0
18
Text Label 10225 2450 0    60   ~ 0
19
Text Label 10225 3000 0    60   ~ 0
20
Text Label 4150 4600 2    60   ~ 0
PSON
$Comp
L GND-RESCUE-atxpowerboard #PWR05
U 1 1 561498D7
P 4750 4800
F 0 "#PWR05" H 4750 4800 30  0001 C CNN
F 1 "GND" H 4750 4730 30  0001 C CNN
F 2 "" H 4750 4800 60  0000 C CNN
F 3 "" H 4750 4800 60  0000 C CNN
	1    4750 4800
	1    0    0    -1  
$EndComp
Text Label 1500 2100 2    60   ~ 0
5V_SB
$Comp
L GND-RESCUE-atxpowerboard #PWR06
U 1 1 56149CF0
P 1100 2400
F 0 "#PWR06" H 1100 2400 30  0001 C CNN
F 1 "GND" H 1100 2330 30  0001 C CNN
F 2 "" H 1100 2400 60  0000 C CNN
F 3 "" H 1100 2400 60  0000 C CNN
	1    1100 2400
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P2
U 1 1 5614A0FA
P 5250 3950
F 0 "P2" V 5200 3950 40  0000 C CNN
F 1 "LED1" V 5300 3950 40  0000 C CNN
F 2 "Connect:bornier2" H 5250 3950 60  0001 C CNN
F 3 "" H 5250 3950 60  0000 C CNN
	1    5250 3950
	0    1    1    0   
$EndComp
$Comp
L CONN_2 P3
U 1 1 5614A1B8
P 5600 3950
F 0 "P3" V 5550 3950 40  0000 C CNN
F 1 "LED2" V 5650 3950 40  0000 C CNN
F 2 "Connect:bornier2" H 5600 3950 60  0001 C CNN
F 3 "" H 5600 3950 60  0000 C CNN
	1    5600 3950
	0    1    1    0   
$EndComp
$Comp
L GND-RESCUE-atxpowerboard #PWR07
U 1 1 5614A468
P 6000 3700
F 0 "#PWR07" H 6000 3700 30  0001 C CNN
F 1 "GND" H 6000 3630 30  0001 C CNN
F 2 "" H 6000 3700 60  0000 C CNN
F 3 "" H 6000 3700 60  0000 C CNN
	1    6000 3700
	1    0    0    -1  
$EndComp
Text Label 4750 3700 1    60   ~ 0
12V
Text Label 5350 3350 3    60   ~ 0
data
Text Label 5500 3350 3    60   ~ 0
clock
Text Label 2650 3500 3    60   ~ 0
data
Text Label 2350 3500 3    60   ~ 0
clock
$Comp
L GND-RESCUE-atxpowerboard #PWR08
U 1 1 5614DF3A
P 2750 3650
F 0 "#PWR08" H 2750 3650 30  0001 C CNN
F 1 "GND" H 2750 3580 30  0001 C CNN
F 2 "" H 2750 3650 60  0000 C CNN
F 3 "" H 2750 3650 60  0000 C CNN
	1    2750 3650
	1    0    0    -1  
$EndComp
Entry Wire Line
	10050 2900 10150 3000
Entry Wire Line
	10050 2350 10150 2450
Entry Wire Line
	10050 1800 10150 1900
Entry Wire Line
	10050 1250 10150 1350
$Comp
L CONN_01X02 P18
U 1 1 5614ED0E
P 9825 1300
F 0 "P18" H 9825 1450 50  0000 C CNN
F 1 "13" V 9925 1300 50  0000 C CNN
F 2 "Connect:bornier2" H 9825 1300 60  0001 C CNN
F 3 "" H 9825 1300 60  0000 C CNN
	1    9825 1300
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P19
U 1 1 5614ED14
P 9825 1850
F 0 "P19" H 9825 2000 50  0000 C CNN
F 1 "14" V 9925 1850 50  0000 C CNN
F 2 "Connect:bornier2" H 9825 1850 60  0001 C CNN
F 3 "" H 9825 1850 60  0000 C CNN
	1    9825 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P20
U 1 1 5614ED1A
P 9825 2400
F 0 "P20" H 9825 2550 50  0000 C CNN
F 1 "15" V 9925 2400 50  0000 C CNN
F 2 "Connect:bornier2" H 9825 2400 60  0001 C CNN
F 3 "" H 9825 2400 60  0000 C CNN
	1    9825 2400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P21
U 1 1 5614ED20
P 9825 2950
F 0 "P21" H 9825 3100 50  0000 C CNN
F 1 "16" V 9925 2950 50  0000 C CNN
F 2 "Connect:bornier2" H 9825 2950 60  0001 C CNN
F 3 "" H 9825 2950 60  0000 C CNN
	1    9825 2950
	1    0    0    -1  
$EndComp
Text Label 9525 1350 0    60   ~ 0
13
Text Label 9525 1900 0    60   ~ 0
14
Text Label 9525 2450 0    60   ~ 0
15
Text Label 9525 3000 0    60   ~ 0
16
Entry Wire Line
	9350 2900 9450 3000
Entry Wire Line
	9350 2350 9450 2450
Entry Wire Line
	9350 1800 9450 1900
Entry Wire Line
	9350 1250 9450 1350
$Comp
L CONN_01X02 P14
U 1 1 561501BA
P 9100 1300
F 0 "P14" H 9100 1450 50  0000 C CNN
F 1 "9" V 9200 1300 50  0000 C CNN
F 2 "Connect:bornier2" H 9100 1300 60  0001 C CNN
F 3 "" H 9100 1300 60  0000 C CNN
	1    9100 1300
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P15
U 1 1 561501C0
P 9100 1850
F 0 "P15" H 9100 2000 50  0000 C CNN
F 1 "10" V 9200 1850 50  0000 C CNN
F 2 "Connect:bornier2" H 9100 1850 60  0001 C CNN
F 3 "" H 9100 1850 60  0000 C CNN
	1    9100 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P16
U 1 1 561501C6
P 9100 2400
F 0 "P16" H 9100 2550 50  0000 C CNN
F 1 "11" V 9200 2400 50  0000 C CNN
F 2 "Connect:bornier2" H 9100 2400 60  0001 C CNN
F 3 "" H 9100 2400 60  0000 C CNN
	1    9100 2400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P17
U 1 1 561501CC
P 9100 2950
F 0 "P17" H 9100 3100 50  0000 C CNN
F 1 "12" V 9200 2950 50  0000 C CNN
F 2 "Connect:bornier2" H 9100 2950 60  0001 C CNN
F 3 "" H 9100 2950 60  0000 C CNN
	1    9100 2950
	1    0    0    -1  
$EndComp
Text Label 8800 1350 0    60   ~ 0
9
Text Label 8800 1900 0    60   ~ 0
10
Text Label 8800 2450 0    60   ~ 0
11
Text Label 8800 3000 0    60   ~ 0
12
Entry Wire Line
	8625 2900 8725 3000
Entry Wire Line
	8625 2350 8725 2450
Entry Wire Line
	8625 1800 8725 1900
Entry Wire Line
	8625 1250 8725 1350
$Comp
L CONN_01X02 P10
U 1 1 561501E7
P 8400 1300
F 0 "P10" H 8400 1450 50  0000 C CNN
F 1 "5" V 8500 1300 50  0000 C CNN
F 2 "Connect:bornier2" H 8400 1300 60  0001 C CNN
F 3 "" H 8400 1300 60  0000 C CNN
	1    8400 1300
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P11
U 1 1 561501ED
P 8400 1850
F 0 "P11" H 8400 2000 50  0000 C CNN
F 1 "6" V 8500 1850 50  0000 C CNN
F 2 "Connect:bornier2" H 8400 1850 60  0001 C CNN
F 3 "" H 8400 1850 60  0000 C CNN
	1    8400 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P12
U 1 1 561501F3
P 8400 2400
F 0 "P12" H 8400 2550 50  0000 C CNN
F 1 "7" V 8500 2400 50  0000 C CNN
F 2 "Connect:bornier2" H 8400 2400 60  0001 C CNN
F 3 "" H 8400 2400 60  0000 C CNN
	1    8400 2400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P13
U 1 1 561501F9
P 8400 2950
F 0 "P13" H 8400 3100 50  0000 C CNN
F 1 "8" V 8500 2950 50  0000 C CNN
F 2 "Connect:bornier2" H 8400 2950 60  0001 C CNN
F 3 "" H 8400 2950 60  0000 C CNN
	1    8400 2950
	1    0    0    -1  
$EndComp
Text Label 8100 1350 0    60   ~ 0
5
Text Label 8100 1900 0    60   ~ 0
6
Text Label 8100 2450 0    60   ~ 0
7
Text Label 8100 3000 0    60   ~ 0
8
Entry Wire Line
	7925 2900 8025 3000
Entry Wire Line
	7925 2350 8025 2450
Entry Wire Line
	7925 1800 8025 1900
Entry Wire Line
	7925 1250 8025 1350
$Comp
L CONN_01X02 P5
U 1 1 561503DA
P 7575 1300
F 0 "P5" H 7575 1450 50  0000 C CNN
F 1 "1" V 7675 1300 50  0000 C CNN
F 2 "Connect:bornier2" H 7575 1300 60  0001 C CNN
F 3 "" H 7575 1300 60  0000 C CNN
	1    7575 1300
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P6
U 1 1 561503E0
P 7575 1850
F 0 "P6" H 7575 2000 50  0000 C CNN
F 1 "2" V 7675 1850 50  0000 C CNN
F 2 "Connect:bornier2" H 7575 1850 60  0001 C CNN
F 3 "" H 7575 1850 60  0000 C CNN
	1    7575 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P7
U 1 1 561503E6
P 7575 2400
F 0 "P7" H 7575 2550 50  0000 C CNN
F 1 "3" V 7675 2400 50  0000 C CNN
F 2 "Connect:bornier2" H 7575 2400 60  0001 C CNN
F 3 "" H 7575 2400 60  0000 C CNN
	1    7575 2400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P8
U 1 1 561503EC
P 7575 2950
F 0 "P8" H 7575 3100 50  0000 C CNN
F 1 "4" V 7675 2950 50  0000 C CNN
F 2 "Connect:bornier2" H 7575 2950 60  0001 C CNN
F 3 "" H 7575 2950 60  0000 C CNN
	1    7575 2950
	1    0    0    -1  
$EndComp
Text Label 7275 1350 0    60   ~ 0
1
Text Label 7275 1900 0    60   ~ 0
2
Text Label 7275 2450 0    60   ~ 0
3
Text Label 7275 3000 0    60   ~ 0
4
Entry Wire Line
	7100 2900 7200 3000
Entry Wire Line
	7100 2350 7200 2450
Entry Wire Line
	7100 1800 7200 1900
Entry Wire Line
	7100 1250 7200 1350
Entry Wire Line
	3625 3100 3725 3000
Entry Wire Line
	3625 3000 3725 2900
Entry Wire Line
	3625 2900 3725 2800
Entry Wire Line
	3625 2800 3725 2700
Entry Wire Line
	3625 2700 3725 2600
Entry Wire Line
	3625 2600 3725 2500
Entry Wire Line
	3625 2500 3725 2400
Entry Wire Line
	3625 2400 3725 2300
Entry Wire Line
	3625 2200 3725 2100
Entry Wire Line
	3625 2100 3725 2000
Entry Wire Line
	3625 2000 3725 1900
Entry Wire Line
	3625 1900 3725 1800
Entry Wire Line
	3625 1800 3725 1700
Entry Wire Line
	3625 1700 3725 1600
Entry Wire Line
	925  2500 1025 2600
Entry Wire Line
	925  2600 1025 2700
Entry Wire Line
	925  2700 1025 2800
Entry Wire Line
	925  2800 1025 2900
Entry Wire Line
	925  2900 1025 3000
Entry Wire Line
	925  3000 1025 3100
Wire Wire Line
	4600 1950 4750 1950
Wire Wire Line
	4600 1650 4600 1950
Wire Wire Line
	4600 1850 4750 1850
Wire Wire Line
	5550 1850 5750 1850
Wire Wire Line
	5750 1850 5750 1650
Wire Wire Line
	5750 1650 4600 1650
Connection ~ 4600 1850
Wire Wire Line
	4750 2050 4200 2050
Wire Wire Line
	4200 2050 4200 2150
Wire Wire Line
	6000 2150 6000 2050
Wire Wire Line
	6000 2050 5550 2050
Wire Wire Line
	4750 2150 4500 2150
Wire Wire Line
	5550 2150 5850 2150
Wire Wire Line
	4350 2250 4750 2250
Wire Wire Line
	4350 2050 4350 2450
Connection ~ 4350 2050
Wire Wire Line
	5550 2250 5900 2250
Wire Wire Line
	5900 2050 5900 2450
Connection ~ 5900 2050
Wire Wire Line
	4750 2350 4650 2350
Wire Wire Line
	4650 2350 4650 2150
Connection ~ 4650 2150
Wire Wire Line
	5900 2350 5550 2350
Connection ~ 5900 2250
Wire Wire Line
	4350 2450 4750 2450
Connection ~ 4350 2250
Wire Wire Line
	5900 2450 5550 2450
Connection ~ 5900 2350
Wire Wire Line
	4750 2550 4500 2550
Wire Wire Line
	4750 2650 4200 2650
Wire Wire Line
	5550 2650 5950 2650
Wire Wire Line
	5550 2750 5750 2750
Wire Wire Line
	4750 2750 4350 2750
Wire Wire Line
	7800 4300 7800 4600
Wire Wire Line
	7300 4300 7300 4600
Wire Wire Line
	7600 4300 7600 4450
Wire Wire Line
	7100 4450 7100 4300
Wire Wire Line
	5750 2750 5750 2650
Connection ~ 5750 2650
Wire Wire Line
	10325 2900 10125 2900
Wire Wire Line
	10125 2900 10125 1000
Wire Wire Line
	10325 1250 10125 1250
Connection ~ 10125 1250
Wire Wire Line
	10325 1800 10125 1800
Connection ~ 10125 1800
Wire Wire Line
	10325 2350 10125 2350
Connection ~ 10125 2350
Wire Wire Line
	10150 1350 10325 1350
Wire Wire Line
	10150 1900 10325 1900
Wire Wire Line
	10150 2450 10325 2450
Wire Wire Line
	10150 3000 10325 3000
Wire Wire Line
	4750 4600 4750 4800
Wire Wire Line
	1500 2200 1100 2200
Wire Wire Line
	1100 2200 1100 2400
Wire Wire Line
	1500 2300 1100 2300
Connection ~ 1100 2300
Wire Wire Line
	6000 3700 6000 3500
Wire Wire Line
	6000 3500 5700 3500
Wire Wire Line
	5700 3500 5700 3600
Wire Wire Line
	4750 3700 4750 3500
Wire Wire Line
	4750 3500 5150 3500
Wire Wire Line
	5150 3500 5150 3600
Wire Wire Line
	5500 3600 5500 3350
Wire Wire Line
	5350 3600 5350 3350
Wire Wire Line
	2750 3500 2750 3650
Wire Bus Line
	10050 850  10050 2900
Wire Wire Line
	9425 2900 9625 2900
Wire Wire Line
	9425 1000 9425 2900
Wire Wire Line
	9625 1250 9425 1250
Connection ~ 9425 1250
Wire Wire Line
	9625 1800 9425 1800
Connection ~ 9425 1800
Wire Wire Line
	9625 2350 9425 2350
Connection ~ 9425 2350
Wire Wire Line
	9450 1350 9625 1350
Wire Wire Line
	9450 1900 9625 1900
Wire Wire Line
	9450 2450 9625 2450
Wire Wire Line
	9450 3000 9625 3000
Wire Bus Line
	9350 2900 9350 850 
Wire Wire Line
	8900 2900 8700 2900
Wire Wire Line
	8700 2900 8700 1000
Wire Wire Line
	8900 1250 8700 1250
Connection ~ 8700 1250
Wire Wire Line
	8900 1800 8700 1800
Connection ~ 8700 1800
Wire Wire Line
	8900 2350 8700 2350
Connection ~ 8700 2350
Wire Wire Line
	8725 1350 8900 1350
Wire Wire Line
	8725 1900 8900 1900
Wire Wire Line
	8725 2450 8900 2450
Wire Wire Line
	8725 3000 8900 3000
Wire Bus Line
	8625 2900 8625 850 
Wire Wire Line
	8200 2900 8000 2900
Wire Wire Line
	8000 2900 8000 1000
Wire Wire Line
	8200 1250 8000 1250
Connection ~ 8000 1250
Wire Wire Line
	8200 1800 8000 1800
Connection ~ 8000 1800
Wire Wire Line
	8200 2350 8000 2350
Connection ~ 8000 2350
Wire Wire Line
	8025 1350 8200 1350
Wire Wire Line
	8025 1900 8200 1900
Wire Wire Line
	8025 2450 8200 2450
Wire Wire Line
	8025 3000 8200 3000
Wire Bus Line
	7925 2900 7925 850 
Wire Wire Line
	7375 2900 7175 2900
Wire Wire Line
	7175 2900 7175 1000
Wire Wire Line
	7375 1250 7175 1250
Connection ~ 7175 1250
Wire Wire Line
	7375 1800 7175 1800
Connection ~ 7175 1800
Wire Wire Line
	7375 2350 7175 2350
Connection ~ 7175 2350
Wire Wire Line
	7200 1350 7375 1350
Wire Wire Line
	7200 1900 7375 1900
Wire Wire Line
	7200 2450 7375 2450
Wire Wire Line
	7200 3000 7375 3000
Wire Bus Line
	7100 2900 7100 850 
Wire Bus Line
	925  850  10050 850 
Wire Bus Line
	3725 850  3725 3000
Wire Bus Line
	925  850  925  3000
Wire Wire Line
	1025 2600 1500 2600
Wire Wire Line
	1500 2700 1025 2700
Wire Wire Line
	1025 2800 1500 2800
Wire Wire Line
	1025 2900 1500 2900
Wire Wire Line
	1500 3000 1025 3000
Wire Wire Line
	1025 3100 1500 3100
Wire Wire Line
	3400 3100 3625 3100
Wire Wire Line
	3400 3000 3625 3000
Wire Wire Line
	3400 2900 3625 2900
Wire Wire Line
	3400 2800 3625 2800
Wire Wire Line
	3400 2700 3625 2700
Wire Wire Line
	3400 2600 3625 2600
Wire Wire Line
	3400 2500 3625 2500
Wire Wire Line
	3400 2400 3625 2400
Wire Wire Line
	3400 2200 3625 2200
Wire Wire Line
	3400 2100 3625 2100
Wire Wire Line
	3400 2000 3625 2000
Wire Wire Line
	3400 1900 3625 1900
Wire Wire Line
	3400 1800 3625 1800
Wire Wire Line
	3400 1700 3625 1700
Text Label 3400 3100 0    60   ~ 0
1
Text Label 3400 3000 0    60   ~ 0
2
Text Label 3400 2900 0    60   ~ 0
3
Text Label 3400 2800 0    60   ~ 0
4
Text Label 3400 2700 0    60   ~ 0
5
Text Label 3400 2600 0    60   ~ 0
6
Text Label 3400 2500 0    60   ~ 0
7
Text Label 3400 2400 0    60   ~ 0
8
Text Label 3400 2200 0    60   ~ 0
9
Text Label 3400 2100 0    60   ~ 0
10
Text Label 3400 2000 0    60   ~ 0
11
Text Label 3400 1900 0    60   ~ 0
12
Text Label 3400 1800 0    60   ~ 0
13
Text Label 3400 1700 0    60   ~ 0
14
Text Label 1500 2600 2    60   ~ 0
15
Text Label 1500 2700 2    60   ~ 0
16
Text Label 1500 2800 2    60   ~ 0
17
Text Label 1500 2900 2    60   ~ 0
18
Text Label 1500 3000 2    60   ~ 0
19
Text Label 1500 3100 2    60   ~ 0
20
Wire Wire Line
	10125 1000 6850 1000
Connection ~ 9425 1000
Connection ~ 8700 1000
Connection ~ 8000 1000
Wire Wire Line
	6850 1000 6850 1250
Connection ~ 7175 1000
$Comp
L GND-RESCUE-atxpowerboard #PWR09
U 1 1 561545E5
P 6850 1250
F 0 "#PWR09" H 6850 1250 30  0001 C CNN
F 1 "GND" H 6850 1180 30  0001 C CNN
F 2 "" H 6850 1250 60  0000 C CNN
F 3 "" H 6850 1250 60  0000 C CNN
	1    6850 1250
	1    0    0    -1  
$EndComp
NoConn ~ 1500 2400
NoConn ~ 1500 2000
NoConn ~ 1500 1900
NoConn ~ 2150 3500
NoConn ~ 2250 3500
NoConn ~ 2550 3500
NoConn ~ 3400 1500
NoConn ~ 3400 1400
NoConn ~ 3400 1300
NoConn ~ 4500 2550
$Comp
L GND-RESCUE-atxpowerboard #PWR?
U 1 1 561587CE
P 3550 1600
F 0 "#PWR?" H 3550 1600 30  0001 C CNN
F 1 "GND" H 3550 1530 30  0001 C CNN
F 2 "" H 3550 1600 60  0000 C CNN
F 3 "" H 3550 1600 60  0000 C CNN
	1    3550 1600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3400 1600 3550 1600
$EndSCHEMATC
