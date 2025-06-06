# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestbench.mk

default: Testbench

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestbench
# Module prefix (from --prefix)
VM_MODPREFIX = VTestbench
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-DVL_DEBUG -DTOP=Testbench -std=c++17 -iquote/mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/ip/include/riscv -iquote/mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/ip/include/cosim -iquote/mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/ip/include/fesvr \
	-DVL_TIME_CONTEXT \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-L/mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/ip/lib  -l:libcosim.a -l:libriscv.a -l:libdisasm.a -l:libsoftfloat.a -l:libfdt.a -l:libfesvr.a -ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	dpi \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	../.. \
	../../../../repo/sys-project/sim \


### Default rules...
# Include list of all generated classes
include VTestbench_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

dpi.o: /mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/sim/dpi.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Testbench: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
