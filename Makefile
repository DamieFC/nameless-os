#
#
# Makefile for the OS
#
#

obj-$(BOOTLOADER) += boot/
obj-$(CLI_NANOCMD) += cli/nanoCommand/
obj-$(DEVICE_DRIVERS) += drivers/
obj-$(FS_EXT4) += ext4/
obj-$(TOOLS_GPIO) += gpio/
obj-$(LIB_INCLUDE) += lib/
