#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=mkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=ECUAL_Layer/ECUAL_INIT.c ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.c ECUAL_Layer/LED/ecual_led.c ECUAL_Layer/Keypad/ecual_keypad.c ECUAL_Layer/DC_Motor/ecual_dc_motor.c ECUAL_Layer/BTN/ecual_btn.c ECUAL_Layer/7SEG/ecual_7seg.c ECUAL_Layer/Relay/ecual_relay.c APP_Layer/main.c MCAL_Layer/device_cfg.c MCAL_Layer/GPIO/hal_gpio.c Codes/MCAL/GPIO/app1.c Codes/ECUAL/Chr_Lcd/app1.c Codes/ECUAL/LED/app1.c Codes/ECUAL/Keypad/app1.c Codes/ECUAL/DC_Motor/app1.c Codes/ECUAL/BTN/app1.c Codes/ECUAL/7SEG/app1.c Codes/ECUAL/Relay/app1.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o ${OBJECTDIR}/APP_Layer/main.o ${OBJECTDIR}/MCAL_Layer/device_cfg.o ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o ${OBJECTDIR}/Codes/ECUAL/LED/app1.o ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o
POSSIBLE_DEPFILES=${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d ${OBJECTDIR}/APP_Layer/main.o.d ${OBJECTDIR}/MCAL_Layer/device_cfg.o.d ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d ${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o ${OBJECTDIR}/APP_Layer/main.o ${OBJECTDIR}/MCAL_Layer/device_cfg.o ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o ${OBJECTDIR}/Codes/ECUAL/LED/app1.o ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o

# Source Files
SOURCEFILES=ECUAL_Layer/ECUAL_INIT.c ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.c ECUAL_Layer/LED/ecual_led.c ECUAL_Layer/Keypad/ecual_keypad.c ECUAL_Layer/DC_Motor/ecual_dc_motor.c ECUAL_Layer/BTN/ecual_btn.c ECUAL_Layer/7SEG/ecual_7seg.c ECUAL_Layer/Relay/ecual_relay.c APP_Layer/main.c MCAL_Layer/device_cfg.c MCAL_Layer/GPIO/hal_gpio.c Codes/MCAL/GPIO/app1.c Codes/ECUAL/Chr_Lcd/app1.c Codes/ECUAL/LED/app1.c Codes/ECUAL/Keypad/app1.c Codes/ECUAL/DC_Motor/app1.c Codes/ECUAL/BTN/app1.c Codes/ECUAL/7SEG/app1.c Codes/ECUAL/Relay/app1.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATmega32
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o: ECUAL_Layer/ECUAL_INIT.c  .generated_files/flags/default/6f252b89ebc87b1a6fea7095b43876ffb9d4b9a5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o -o ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o ECUAL_Layer/ECUAL_INIT.c 
	
${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o: ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.c  .generated_files/flags/default/2df79ea88a5be1feb9dd3511d21419a793f6fedf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/Chr_Lcd" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o -o ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.c 
	
${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o: ECUAL_Layer/LED/ecual_led.c  .generated_files/flags/default/29a0a1294582afbbca5de3cfb21bffb6dd532592 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/LED" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o -o ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o ECUAL_Layer/LED/ecual_led.c 
	
${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o: ECUAL_Layer/Keypad/ecual_keypad.c  .generated_files/flags/default/71ef13caf6a36f4940f2f6d3a65332754a95d43f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/Keypad" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o -o ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o ECUAL_Layer/Keypad/ecual_keypad.c 
	
${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o: ECUAL_Layer/DC_Motor/ecual_dc_motor.c  .generated_files/flags/default/33d6ddb23c920629f91a5fb5b5a9eb7c1f049454 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/DC_Motor" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o -o ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o ECUAL_Layer/DC_Motor/ecual_dc_motor.c 
	
${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o: ECUAL_Layer/BTN/ecual_btn.c  .generated_files/flags/default/16137b37c259d266a0f5282c8075a1df4056d5a0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/BTN" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o -o ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o ECUAL_Layer/BTN/ecual_btn.c 
	
${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o: ECUAL_Layer/7SEG/ecual_7seg.c  .generated_files/flags/default/f6297ab069483217899580194a3fb51dfb94708f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/7SEG" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o -o ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o ECUAL_Layer/7SEG/ecual_7seg.c 
	
${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o: ECUAL_Layer/Relay/ecual_relay.c  .generated_files/flags/default/aac2f5f272809492dfa1c319ab6d46b5da088ef2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/Relay" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o -o ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o ECUAL_Layer/Relay/ecual_relay.c 
	
${OBJECTDIR}/APP_Layer/main.o: APP_Layer/main.c  .generated_files/flags/default/8f81f764dcfead6f5e111e8f5df701992df826d1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/APP_Layer" 
	@${RM} ${OBJECTDIR}/APP_Layer/main.o.d 
	@${RM} ${OBJECTDIR}/APP_Layer/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/APP_Layer/main.o.d" -MT "${OBJECTDIR}/APP_Layer/main.o.d" -MT ${OBJECTDIR}/APP_Layer/main.o -o ${OBJECTDIR}/APP_Layer/main.o APP_Layer/main.c 
	
${OBJECTDIR}/MCAL_Layer/device_cfg.o: MCAL_Layer/device_cfg.c  .generated_files/flags/default/55b999b5dc19f8557ac9907e333cedc7b5c2d115 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_cfg.o.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_cfg.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL_Layer/device_cfg.o.d" -MT "${OBJECTDIR}/MCAL_Layer/device_cfg.o.d" -MT ${OBJECTDIR}/MCAL_Layer/device_cfg.o -o ${OBJECTDIR}/MCAL_Layer/device_cfg.o MCAL_Layer/device_cfg.c 
	
${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o: MCAL_Layer/GPIO/hal_gpio.c  .generated_files/flags/default/5f016daa5f9daa730727b63dc1199e98fac50b69 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/GPIO" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d" -MT "${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d" -MT ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o -o ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o MCAL_Layer/GPIO/hal_gpio.c 
	
${OBJECTDIR}/Codes/MCAL/GPIO/app1.o: Codes/MCAL/GPIO/app1.c  .generated_files/flags/default/d833159c395a0ffc015b8e3eeee2682bb572a57e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/MCAL/GPIO" 
	@${RM} ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d" -MT "${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d" -MT ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o -o ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o Codes/MCAL/GPIO/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o: Codes/ECUAL/Chr_Lcd/app1.c  .generated_files/flags/default/429854a8b8a8bca43cfbe90062d833a36ad340e7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/Chr_Lcd" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o -o ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o Codes/ECUAL/Chr_Lcd/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/LED/app1.o: Codes/ECUAL/LED/app1.c  .generated_files/flags/default/dee12a2e4ef15c763bf8ee5494896c49aac0aa21 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/LED" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/LED/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/LED/app1.o -o ${OBJECTDIR}/Codes/ECUAL/LED/app1.o Codes/ECUAL/LED/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o: Codes/ECUAL/Keypad/app1.c  .generated_files/flags/default/8175240dcd3470946dc294c48a1551a6a58b962e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/Keypad" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o -o ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o Codes/ECUAL/Keypad/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o: Codes/ECUAL/DC_Motor/app1.c  .generated_files/flags/default/43793070278a013041c9c6b52134bf4e878dbf6a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/DC_Motor" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o -o ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o Codes/ECUAL/DC_Motor/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/BTN/app1.o: Codes/ECUAL/BTN/app1.c  .generated_files/flags/default/79e2af13d176faa08e03e0de029219b56a10161e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/BTN" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o -o ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o Codes/ECUAL/BTN/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o: Codes/ECUAL/7SEG/app1.c  .generated_files/flags/default/1476e608e9e4edcd2138726d9d7c1f18e1c8a68a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/7SEG" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o -o ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o Codes/ECUAL/7SEG/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/Relay/app1.o: Codes/ECUAL/Relay/app1.c  .generated_files/flags/default/cc9bd89f42fe0729b3902650658737d99b24a5f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/Relay" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o -o ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o Codes/ECUAL/Relay/app1.c 
	
else
${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o: ECUAL_Layer/ECUAL_INIT.c  .generated_files/flags/default/f1498ee9af5af03ce310471e4658e574e418c7ab .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o -o ${OBJECTDIR}/ECUAL_Layer/ECUAL_INIT.o ECUAL_Layer/ECUAL_INIT.c 
	
${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o: ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.c  .generated_files/flags/default/23e6c33da30af67e5fffe492e9410d22b03048f6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/Chr_Lcd" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o -o ${OBJECTDIR}/ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.o ECUAL_Layer/Chr_Lcd/ecual_chr_lcd.c 
	
${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o: ECUAL_Layer/LED/ecual_led.c  .generated_files/flags/default/2ff6cc30a72e89dfd7322be475049562f151b3fd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/LED" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o -o ${OBJECTDIR}/ECUAL_Layer/LED/ecual_led.o ECUAL_Layer/LED/ecual_led.c 
	
${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o: ECUAL_Layer/Keypad/ecual_keypad.c  .generated_files/flags/default/3b7707362591b3c2098ec4ebe6579df3b5260b08 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/Keypad" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o -o ${OBJECTDIR}/ECUAL_Layer/Keypad/ecual_keypad.o ECUAL_Layer/Keypad/ecual_keypad.c 
	
${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o: ECUAL_Layer/DC_Motor/ecual_dc_motor.c  .generated_files/flags/default/5b3c71ec7f3bc08ae413065e149406d9a69e70d1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/DC_Motor" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o -o ${OBJECTDIR}/ECUAL_Layer/DC_Motor/ecual_dc_motor.o ECUAL_Layer/DC_Motor/ecual_dc_motor.c 
	
${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o: ECUAL_Layer/BTN/ecual_btn.c  .generated_files/flags/default/6066bd558e7bc13edbe51eeed622bce9c9d5d47d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/BTN" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o -o ${OBJECTDIR}/ECUAL_Layer/BTN/ecual_btn.o ECUAL_Layer/BTN/ecual_btn.c 
	
${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o: ECUAL_Layer/7SEG/ecual_7seg.c  .generated_files/flags/default/7706de5ab6c1e3acad46fd8d5843ee78da826137 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/7SEG" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o -o ${OBJECTDIR}/ECUAL_Layer/7SEG/ecual_7seg.o ECUAL_Layer/7SEG/ecual_7seg.c 
	
${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o: ECUAL_Layer/Relay/ecual_relay.c  .generated_files/flags/default/ff1eac2e2fe4a847beff0ac7654b1d714c09006e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECUAL_Layer/Relay" 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d 
	@${RM} ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d" -MT "${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o.d" -MT ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o -o ${OBJECTDIR}/ECUAL_Layer/Relay/ecual_relay.o ECUAL_Layer/Relay/ecual_relay.c 
	
${OBJECTDIR}/APP_Layer/main.o: APP_Layer/main.c  .generated_files/flags/default/d1a3df9f374cfef2135291f6b1f76bc134b376b9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/APP_Layer" 
	@${RM} ${OBJECTDIR}/APP_Layer/main.o.d 
	@${RM} ${OBJECTDIR}/APP_Layer/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/APP_Layer/main.o.d" -MT "${OBJECTDIR}/APP_Layer/main.o.d" -MT ${OBJECTDIR}/APP_Layer/main.o -o ${OBJECTDIR}/APP_Layer/main.o APP_Layer/main.c 
	
${OBJECTDIR}/MCAL_Layer/device_cfg.o: MCAL_Layer/device_cfg.c  .generated_files/flags/default/2c49ead0bba3565f93adc8ed192ec564eec09b96 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_cfg.o.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_cfg.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL_Layer/device_cfg.o.d" -MT "${OBJECTDIR}/MCAL_Layer/device_cfg.o.d" -MT ${OBJECTDIR}/MCAL_Layer/device_cfg.o -o ${OBJECTDIR}/MCAL_Layer/device_cfg.o MCAL_Layer/device_cfg.c 
	
${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o: MCAL_Layer/GPIO/hal_gpio.c  .generated_files/flags/default/a342f03abfdfe04a02933f3f00226fb162a0186f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/GPIO" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d" -MT "${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o.d" -MT ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o -o ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.o MCAL_Layer/GPIO/hal_gpio.c 
	
${OBJECTDIR}/Codes/MCAL/GPIO/app1.o: Codes/MCAL/GPIO/app1.c  .generated_files/flags/default/5111adf2fb0f6c915340e14f037cfb0b062444e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/MCAL/GPIO" 
	@${RM} ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d" -MT "${OBJECTDIR}/Codes/MCAL/GPIO/app1.o.d" -MT ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o -o ${OBJECTDIR}/Codes/MCAL/GPIO/app1.o Codes/MCAL/GPIO/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o: Codes/ECUAL/Chr_Lcd/app1.c  .generated_files/flags/default/2a88ad4c189d28df387635ad924d7f36a6481a07 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/Chr_Lcd" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o -o ${OBJECTDIR}/Codes/ECUAL/Chr_Lcd/app1.o Codes/ECUAL/Chr_Lcd/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/LED/app1.o: Codes/ECUAL/LED/app1.c  .generated_files/flags/default/cfbe18d3c1f51cecdd89572ae23da3d1d8eb7b12 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/LED" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/LED/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/LED/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/LED/app1.o -o ${OBJECTDIR}/Codes/ECUAL/LED/app1.o Codes/ECUAL/LED/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o: Codes/ECUAL/Keypad/app1.c  .generated_files/flags/default/dbd792deff99dc55d69bd3c3b3c582c083d07824 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/Keypad" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o -o ${OBJECTDIR}/Codes/ECUAL/Keypad/app1.o Codes/ECUAL/Keypad/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o: Codes/ECUAL/DC_Motor/app1.c  .generated_files/flags/default/4a2dc47bbd9ecf449cf1090201bc9515fc7dee41 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/DC_Motor" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o -o ${OBJECTDIR}/Codes/ECUAL/DC_Motor/app1.o Codes/ECUAL/DC_Motor/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/BTN/app1.o: Codes/ECUAL/BTN/app1.c  .generated_files/flags/default/54e07d7669c760065f0098e20b75c6a69d23fdc1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/BTN" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/BTN/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o -o ${OBJECTDIR}/Codes/ECUAL/BTN/app1.o Codes/ECUAL/BTN/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o: Codes/ECUAL/7SEG/app1.c  .generated_files/flags/default/959e2d1c937b5b7fa9272250015b6618ee73c232 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/7SEG" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o -o ${OBJECTDIR}/Codes/ECUAL/7SEG/app1.o Codes/ECUAL/7SEG/app1.c 
	
${OBJECTDIR}/Codes/ECUAL/Relay/app1.o: Codes/ECUAL/Relay/app1.c  .generated_files/flags/default/e80681b276455f626ff8247302896489e034f3c5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/Codes/ECUAL/Relay" 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d 
	@${RM} ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mno-const-data-in-progmem     -MD -MP -MF "${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d" -MT "${OBJECTDIR}/Codes/ECUAL/Relay/app1.o.d" -MT ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o -o ${OBJECTDIR}/Codes/ECUAL/Relay/app1.o Codes/ECUAL/Relay/app1.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"   -gdwarf-2 -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3 -mno-const-data-in-progmem     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group  -Wl,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1
	@${RM} ${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.hex 
	
	
else
${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3 -mno-const-data-in-progmem     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group 
	${MP_CC_DIR}/avr-objcopy -O ihex "${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}" "${DISTDIR}/IEEE-Avr_Drivers.X.${IMAGE_TYPE}.hex"
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
