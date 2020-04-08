/*
 * config_mender_defines.h is a special file used by Mender during compilation
 * that provides configuration values to U-Boot supplied by the build system
 */

/* Shell variables */
#define MENDER_BOOT_PART_NUMBER 1
#define MENDER_ROOTFS_PART_A_NUMBER 2
#define MENDER_ROOTFS_PART_B_NUMBER 3
#define MENDER_UBOOT_STORAGE_INTERFACE "mmc"
#define MENDER_UBOOT_STORAGE_DEVICE 0

/* BB variables. */
#define MENDER_STORAGE_DEVICE_BASE "/dev/mmcblk0p"
#define MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_1 (544 << 10) /* 0x88000, 544 KB */
#define MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_2 (608 << 10) /* 0x98000  608 KB */
#define MENDER_ROOTFS_PART_A_NAME "rootfs-a"
#define MENDER_ROOTFS_PART_B_NAME "rootfs-b"
#define MENDER_MTD_UBI_DEVICE_NAME ""

/* common u-boot env size: 128k */
#define MENDER_BOOTENV_SIZE 0x20000
