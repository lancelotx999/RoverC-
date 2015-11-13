#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/tests/Battery.o \
	${OBJECTDIR}/tests/Devices.o \
	${OBJECTDIR}/tests/Drill.o \
	${OBJECTDIR}/tests/Object.o \
	${OBJECTDIR}/tests/Radar.o \
	${OBJECTDIR}/tests/Rover.o \
	${OBJECTDIR}/tests/Solar.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rover

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rover: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rover ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/tests/Battery.o: tests/Battery.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Battery.o tests/Battery.cpp

${OBJECTDIR}/tests/Devices.o: tests/Devices.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Devices.o tests/Devices.cpp

${OBJECTDIR}/tests/Drill.o: tests/Drill.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Drill.o tests/Drill.cpp

${OBJECTDIR}/tests/Object.o: tests/Object.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Object.o tests/Object.cpp

${OBJECTDIR}/tests/Radar.o: tests/Radar.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Radar.o tests/Radar.cpp

${OBJECTDIR}/tests/Rover.o: tests/Rover.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Rover.o tests/Rover.cpp

${OBJECTDIR}/tests/Solar.o: tests/Solar.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Solar.o tests/Solar.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/RoverTest.o ${TESTDIR}/tests/test_rover.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/tests/RoverTest.o: tests/RoverTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/RoverTest.o tests/RoverTest.cpp


${TESTDIR}/tests/test_rover.o: tests/test_rover.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/test_rover.o tests/test_rover.cpp


${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/tests/Battery_nomain.o: ${OBJECTDIR}/tests/Battery.o tests/Battery.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Battery.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Battery_nomain.o tests/Battery.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Battery.o ${OBJECTDIR}/tests/Battery_nomain.o;\
	fi

${OBJECTDIR}/tests/Devices_nomain.o: ${OBJECTDIR}/tests/Devices.o tests/Devices.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Devices.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Devices_nomain.o tests/Devices.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Devices.o ${OBJECTDIR}/tests/Devices_nomain.o;\
	fi

${OBJECTDIR}/tests/Drill_nomain.o: ${OBJECTDIR}/tests/Drill.o tests/Drill.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Drill.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Drill_nomain.o tests/Drill.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Drill.o ${OBJECTDIR}/tests/Drill_nomain.o;\
	fi

${OBJECTDIR}/tests/Object_nomain.o: ${OBJECTDIR}/tests/Object.o tests/Object.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Object.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Object_nomain.o tests/Object.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Object.o ${OBJECTDIR}/tests/Object_nomain.o;\
	fi

${OBJECTDIR}/tests/Radar_nomain.o: ${OBJECTDIR}/tests/Radar.o tests/Radar.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Radar.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Radar_nomain.o tests/Radar.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Radar.o ${OBJECTDIR}/tests/Radar_nomain.o;\
	fi

${OBJECTDIR}/tests/Rover_nomain.o: ${OBJECTDIR}/tests/Rover.o tests/Rover.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Rover.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Rover_nomain.o tests/Rover.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Rover.o ${OBJECTDIR}/tests/Rover_nomain.o;\
	fi

${OBJECTDIR}/tests/Solar_nomain.o: ${OBJECTDIR}/tests/Solar.o tests/Solar.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/Solar.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/Solar_nomain.o tests/Solar.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/Solar.o ${OBJECTDIR}/tests/Solar_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rover

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
