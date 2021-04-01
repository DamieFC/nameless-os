#
#
# Makefile for the OS
#
#

# Name stuff

NAME = "EEEK-4-1"
VERSION = 0.4
EXTRAVERSION = "rc1"

obj-$(BOOTLOADER) += boot/
obj-$(CLI_NANOCMD) += cli/nanoCommand/
obj-$(DEVICE_DRIVERS) += drivers/
obj-$(FS_EXT4) += ext4/
obj-$(TOOLS_GPIO) += gpio/
obj-$(LIB_INCLUDE) += lib/
