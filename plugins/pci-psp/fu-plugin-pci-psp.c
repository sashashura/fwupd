/*
 * Copyright (C) 2022 Advanced Micro Devices Inc.
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#include "config.h"

#include <fwupdplugin.h>

#include "fu-pci-psp-device.h"

static void
fu_plugin_pci_psp_init(FuPlugin *plugin)
{
	fu_plugin_add_udev_subsystem(plugin, "pci");
	fu_plugin_add_device_gtype(plugin, FU_TYPE_PCI_PSP_DEVICE);
}

void
fu_plugin_init_vfuncs(FuPluginVfuncs *vfuncs)
{
	vfuncs->build_hash = FU_BUILD_HASH;
	vfuncs->init = fu_plugin_pci_psp_init;
}
